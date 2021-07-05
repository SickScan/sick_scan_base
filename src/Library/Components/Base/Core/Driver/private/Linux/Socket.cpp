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

#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/poll.h>
#include <sys/socket.h>
#include <sys/types.h>

#include <unistd.h>

#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/Driver/include/Socket.h"
#include "Base/Core/OS/include/Task.h"
#include "Base/Core/OS/include/Time.h"
#include "Base/Types/include/SickSensorReturnCodes.h"

namespace ssbl {

class Socket::impl : public Task {
 public:
  impl() : localIsOpen(false), pParent_(nullptr), sockhndl_(0) {}
  virtual ~impl() { Disconnect(); };
  //========================================================================
  bool Connect(std::string ip, uint32_t port) {
    localIsOpen = false;

    struct sockaddr_in DeviceAddr;
    struct hostent *pDevice;
    sockhndl_ = socket(AF_INET, SOCK_STREAM, 0);

    SSBL_LOG_INFO("Connecting to %s on port %d", ip.c_str(), port);

    if (sockhndl_ < 0) {
      SSBL_LOG_ERROR("Error when opening socket");
      return false;
    }
    pDevice = gethostbyname(ip.c_str());
    if (nullptr == pDevice) {
      SSBL_LOG_ERROR("Error device not found");
      return false;
    }
    bzero((char *)&DeviceAddr, sizeof(DeviceAddr));
    DeviceAddr.sin_family = AF_INET;
    bcopy((char *)pDevice->h_addr, (char *)&DeviceAddr.sin_addr.s_addr,
          pDevice->h_length);
    DeviceAddr.sin_port = htons(port);
    struct timeval timeout;
    timeout.tv_sec = 2;
    timeout.tv_usec = 0;
    setsockopt(sockhndl_, SOL_SOCKET, SO_SNDTIMEO, &timeout, sizeof(timeout));

    if (connect(sockhndl_, (struct sockaddr *)&DeviceAddr, sizeof(DeviceAddr)) <
        0) {
      SSBL_LOG_ERROR("Error connecting to device. %s", strerror(errno));
      return false;
    }
    /*
    timeout.tv_sec = 0;
    timeout.tv_usec = 0;
    setsockopt(sockhndl_, SOL_SOCKET, SO_SNDTIMEO, &timeout,
    sizeof(timeout));
    */
    localIsOpen = true;

    if (localIsOpen) {
      SSBL_LOG_INFO("Connection to %s on port %u established.", ip.c_str(),
                    port);
      Run();  // start the receiver task
    }
    return localIsOpen;
  }

  //========================================================================
  void Delete() { Disconnect(); }

  //========================================================================
  void Disconnect() {
    Stop();
    localIsOpen = false;
    close(sockhndl_);
  }

  //========================================================================
  void DisconnectWithError() {
    // printf("send failed with error: %d\n", WSAGetLastError());
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
      iResult = write(sockhndl_,
                      reinterpret_cast<const char *>(&pData[nBytesWritten]),
                      static_cast<int32_t>(nBytes - nBytesWritten));

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
    ioctl(sockhndl_, FIONREAD, &bytesAvl);

    return (size_t)bytesAvl;
  }

  //========================================================================
  void setParent(Socket *pParent) { pParent_ = pParent; }

  //========================================================================
  bool TaskLoop(void) {
    int32_t iRet;
    struct pollfd fds[200];

    if (localIsOpen) {
      fds[0].fd = sockhndl_;
      fds[0].events = POLLIN;

      fd_set readSet;
      FD_ZERO(&readSet);
      FD_SET(sockhndl_, &readSet);
      iRet = poll(fds, 1, 500);
      if (0 > iRet) {
        SSBL_LOG_WARNING("Error when polling socket");
      } else if (iRet >= 1) {
        if (pParent_ != nullptr) {
          pParent_->OnReceive();
        }
      }
    } else {
      SSBL_Sleep(500);
    }
    return true;
  }

 private:
  bool localIsOpen;
  Socket *pParent_;
  int32_t sockhndl_;
};

//===========================================================================
//===========================================================================
Socket::Socket(std::string &Ip, uint32_t PortNo)
    : pImpl_{ssbl::make_unique<impl>()} {
  IP_ = Ip;
  Port_ = PortNo;
  pImpl_->setParent(this);
}
//===========================================================================
//===========================================================================
Socket::Socket(uint32_t PortNo) : pImpl_{ssbl::make_unique<impl>()} {
  Port_ = PortNo;
  // not supported yet
  SSBL_ASSERT_IF_NULL(0);
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

  if (!pImpl_->Connect(IP_, Port_)) {
    ret = SSBL_ERR_CONNECT;
  }
  return ret;
}

//===========================================================================
//===========================================================================
void Socket::Disconnect() { pImpl_->Disconnect(); }

//===========================================================================
//===========================================================================
bool Socket::IsOpen() { return pImpl_->IsOpen(); }

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
size_t Socket::BytesPending(void) { return pImpl_->BytesPending(); }

//===========================================================================
//===========================================================================
Socket::Socket(Socket &&) = default;
Socket &Socket::operator=(Socket &&) = default;

}  // namespace ssbl
