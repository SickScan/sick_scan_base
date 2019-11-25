/**
 * \file
 * \brief Socket class
 *
 * Copyright 2019, SICK AG, Waldkirch
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include <stdint.h>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/Driver/include/Socket.h"
#include "Base/Core/OS/include/Task.h"
#include "Base/Core/OS/include/Time.h"
#include "Base/Types/include/SickSensorReturnCodes.h"
#include <zephyr.h>
#include <net/socket.h>


namespace ssbl {

#define MAX_CLIENTS_SERVER_PORT 1


class Socket::impl : public Task {

enum SocketState{
	CLOSED,
	WAIT_FOR_CLIENT,
	RECEIVE
} ;


 public:
impl(SocketDirection SockDir)
 	 : localIsOpen(false)
 	 , pParent_(nullptr)
 	 , sockhndl_(0)
 	 , SockDir_(SockDir)
 	 , SockState_(CLOSED){ }

  ~impl() { Disconnect(); };

  //========================================================================
  bool Connect(std::string ip, uint32_t port) {
	  if (!localIsOpen) {
		  PortNummber_ = port;
		  IP_ = ip;
		  localIsOpen = OpenClientSocket();
		  return localIsOpen;
	  }
	  return false;

  }

  //========================================================================
  bool Connect(uint32_t port)
  {

	  if (!localIsOpen) {

		  PortNummber_ = port;
		  Run();
	  }
	  return true;
  }


  //========================================================================
  void Delete() { Disconnect(); }

  //========================================================================
  void Disconnect() {
    Stop();
    localIsOpen = false;
    zsock_close(sockhndl_);

  }

  //========================================================================
  void DisconnectWithError() {
    SSBL_LOG_INFO("Send failed, closing socket. Error: %d", errno);
    Disconnect();
  }


  //========================================================================
  bool IsOpen() { return localIsOpen; }

  //========================================================================
  bool Send(uint8_t *pData, size_t nBytes) {
    bool bRet = true;
    ssize_t iResult = 0;
    size_t nBytesWritten = 0;
    while ((nBytes != nBytesWritten) && bRet) {
      iResult = send(sockhndl_,
                      reinterpret_cast<const char *>(&pData[nBytesWritten]),
                      static_cast<int32_t>(nBytes - nBytesWritten),0);

      if (iResult < 0) {
        DisconnectWithError();

        bRet = false;
      }
      nBytesWritten += iResult;
    }
    return bRet;
  }

  //========================================================================
  size_t Receive(uint8_t **ppData, size_t nBytesToRead) {
    size_t ret = 0;
    int32_t res = recv(sockhndl_, reinterpret_cast<char *>(*ppData),
                       static_cast<int32_t>(nBytesToRead), 0);

    if (res < 0) {
      ret = 0;
    } else {
      ret = static_cast<size_t>(res);
    }

    return ret;
  }

  //========================================================================
  size_t BytesPending(void) {
    int32_t bytesAvl;
    SSBL_LOG_INFO("Check pending");
    bytesAvl = recv(sockhndl_, NULL, 9999, ZSOCK_MSG_PEEK | ZSOCK_MSG_DONTWAIT);
    SSBL_LOG_INFO("Bytes pending: %d", bytesAvl);

    if(bytesAvl < 0)
    {
    	bytesAvl = 0;
    }

    return (size_t)bytesAvl;
  }

  //========================================================================
  void setParent(Socket *pParent) { pParent_ = pParent; }

  //========================================================================
  bool OpenClientSocket(void) {
	 struct sockaddr_in mAddr;

	socklen_t mAddrLen = sizeof(mAddr);
	int32_t ret;

	  (void)memset(&mAddr, 0, sizeof(mAddr));
	  mAddr.sin_family = AF_INET;
	  mAddr.sin_port = htons(PortNummber_);

	  inet_pton(AF_INET, IP_.c_str(),
			  &mAddr.sin_addr);


	  sockhndl_ = socket(((struct sockaddr *)(&mAddr))->sa_family, SOCK_STREAM, IPPROTO_TCP);
	  if (sockhndl_ < 0) {
		  SSBL_LOG_ERROR("Error when opening socket");
	      return false;
	  }


	ret = connect(sockhndl_, (sockaddr*) &mAddr, mAddrLen);
	if (ret < 0) {

		SSBL_LOG_INFO("Cannot connect to TCP remote (%s): %d", IP_.c_str(),
				errno);

		return false;
	}
	SSBL_LOG_INFO("Connected with %s", IP_.c_str());

	Run();

    return true;
  }


  //========================================================================
  bool OpenServerSocket(void) {
	  struct sockaddr_in mAddr;

	  (void)memset(&mAddr, 0, sizeof(mAddr));
	  mAddr.sin_family = AF_INET;
	  mAddr.sin_port = htons(PortNummber_);

	  sockhndl_ = socket(((struct sockaddr *)(&mAddr))->sa_family, SOCK_STREAM, IPPROTO_TCP);
	  if (sockhndl_ < 0) {
		  SSBL_LOG_ERROR("Error when opening socket");
	      return false;
	  }

	  if( 0 < bind(sockhndl_, (struct sockaddr *)&mAddr, sizeof(mAddr)))
	  {
		  SSBL_LOG_ERROR("Error when trying to bind socket");
		  return false;
	  }
	  if( 0 < listen(sockhndl_, MAX_CLIENTS_SERVER_PORT))
	  {
		  SSBL_LOG_ERROR("Error when trying to listen to socket");
		  return false;
	  }
	  SSBL_LOG_INFO("Opened socket on port %u.",  PortNummber_);
	  localIsOpen = true;
	  return localIsOpen;
  }
  //========================================================================
  bool ProcessServerSocket(void) {
	  bool bRet =true;
	  struct sockaddr_in client_addr;
	  socklen_t client_addr_len = sizeof(client_addr);
	  uint8_t rcv;
	  int32_t received;
	  switch(SockState_)
	  {
	  	  case CLOSED:
			  bRet = OpenServerSocket();
			  if(bRet)
			  {
				  SockState_ = WAIT_FOR_CLIENT;
			  }
	  		  break;

	  	  case WAIT_FOR_CLIENT:

	  		SSBL_LOG_INFO("Waiting for client on port %u.",  PortNummber_);
	  		Client_ = accept(sockhndl_,
	  					(struct sockaddr *)&client_addr,
						&client_addr_len);

	  		if(Client_ < 0)
	  		{
			  SSBL_LOG_ERROR("Error in accept");
			  bRet = false;
	  		}
	  		else
	  		{
	  			SockState_ = RECEIVE;
	  		}
	  		SSBL_LOG_INFO("Accepted client on port %u.",  PortNummber_);

	  		break;

	  	  case RECEIVE:
	  		  received = recv(Client_, &rcv,  1,  MSG_PEEK );

	  		  if(received >= 1)
	  		  {
	  			  //notify parent
	  			  SSBL_LOG_INFO("Received data");
	  			  if (pParent_ != nullptr) {
	  			    pParent_->OnReceive();
	  	          }
	  		  }

	  		  break;
	  	  default:
	  		  break;

	  }


    return bRet;
  }
  //========================================================================
  bool ProcessClientSocket(void) {
	  bool bRet =true;
	  int res;
	  if (localIsOpen) {
		 zsock_pollfd fds[1];
		 fds[0].fd = sockhndl_;
		 fds[0].events = ZSOCK_POLLIN;
		 fds[0].revents = 0;

		 zsock_fd_set readSet;
		 ZSOCK_FD_ZERO(&readSet);
		 ZSOCK_FD_SET(sockhndl_, &readSet);

		  res = zsock_poll(fds, 1, K_FOREVER);

		  if(res < 0)
		  {
			  SSBL_LOG_WARNING("Error when polling socket");
		  }
		  else
		  {

			  if(errno == EALREADY)
			  {
				  SSBL_Sleep(5);
			  }
			  else
			  {
				  //notify parent
				  SSBL_LOG_INFO("Received data");
				  if (pParent_ != nullptr) {
					pParent_->OnReceive();
				  }
			  }
		  }

	  }
	  else
	  {
		  SSBL_Sleep(5);
	  }

    return bRet;
  }

  //========================================================================
  bool TaskLoop(void) {
	  bool bRet;
	 if(SERVER_SOCKET == SockDir_)
	 {
		 bRet = ProcessServerSocket();
	 }
	 else
	 {
		 bRet = ProcessClientSocket();
	 }
    return bRet;
  }
  //========================================================================
  SocketDirection GetDirection()
  {
	  return SockDir_;
  }

 private:
  bool localIsOpen;
  Socket *pParent_;
  int32_t sockhndl_;
  std::string IP_;
  uint16_t PortNummber_;
  int32_t Client_;

  SocketDirection SockDir_;
  SocketState SockState_;
};


//===========================================================================
//===========================================================================
Socket::Socket(std::string &Ip, uint32_t PortNo)
     : pImpl_{std::make_unique<impl>(CLIENT_SOCKET)} {
  IP_ = Ip;
  Port_ = PortNo;
  pImpl_->setParent(this);
}


//===========================================================================
//===========================================================================
Socket::Socket(uint32_t PortNo) : pImpl_{std::make_unique<impl>(SERVER_SOCKET)} {

  Port_ = PortNo;
  pImpl_->setParent(this);
}


//===========================================================================
//===========================================================================
Socket::~Socket() {
  pImpl_->Delete();
  pImpl_.reset(nullptr);
}

//===========================================================================
//===========================================================================
void Socket::OnReceive(void) {
  SSBL_LOG_DEBUG("Socket: %s", __func__);

  FireCallback("OnReceive");
}

//===========================================================================
//===========================================================================
SensorResult Socket::Connect() {
  SensorResult ret = SSBL_SUCCESS;

  if(CLIENT_SOCKET == pImpl_->GetDirection())
  {
	  if (!pImpl_->Connect(IP_, Port_)) {
		ret = SSBL_ERR_CONNECT;
	  }
  }
  else
  {
	  if (!pImpl_->Connect(Port_)) {
		ret = SSBL_ERR_CONNECT;
	  }

  }
  return ret;
}

//===========================================================================
//===========================================================================
void Socket::Disconnect() {
	pImpl_->Disconnect();
}

//===========================================================================
//===========================================================================
bool Socket::IsOpen() {
	return pImpl_->IsOpen();

	return false;

}

//===========================================================================
//===========================================================================
bool Socket::Send(uint8_t *pData, size_t nBytes) {
  return pImpl_->Send(pData, nBytes);
}

//===========================================================================
//===========================================================================
size_t Socket::Receive(uint8_t **ppData, size_t nBytesToRead) {
  return pImpl_->Receive(ppData, nBytesToRead);
}

//===========================================================================
//===========================================================================
size_t Socket::BytesPending(void) {
	return pImpl_->BytesPending();
	}

//===========================================================================
//===========================================================================
Socket::Socket(Socket &&) = default;
Socket &Socket::operator=(Socket &&) = default;

}  // namespace ssbl
