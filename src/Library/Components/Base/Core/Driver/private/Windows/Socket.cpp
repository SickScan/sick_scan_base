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

#define WIN32_LEAN_AND_MEAN
#ifdef __MINGW32__
#define _WIN32_WINNT 0x0A00
#endif
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>

#include "Base/Core/Driver/include/Socket.h"
#include "Base/Core/OS/include/Task.h"
#include "Base/Core/OS/include/Time.h"
#include "Base/Types/include/SickSensorReturnCodes.h"
namespace ssbl {

enum SocketType {
  TCP_SOCKET,
  UDP_SOCKET,
};

class Socket::impl : public Task {
 public:
  impl() { socketType_ = TCP_SOCKET; };
  virtual ~impl() {
    Disconnect();
    Stop();
  };
  //========================================================================
  bool Connect(std::string ip, uint32_t port) {
    localIsOpen = false;

    int iResult;
    fdarray_ = {0};
    struct addrinfo *result = nullptr, *ptr = nullptr, hints;

    SSBL_LOG_INFO("Connecting to %s on port %d", ip.c_str(), port);

    InternSocket_ = INVALID_SOCKET;

    iResult = WSAStartup(MAKEWORD(2, 2), &wsaData_);
    if (iResult != 0) {
      SSBL_LOG_ERROR("WSAStartup failed with error: %d\n", iResult);
      return false;
    }

    if (TCP_SOCKET == socketType_) {
      memset(&hints, 0x00, sizeof(hints));

      hints.ai_family = AF_UNSPEC;
      hints.ai_socktype = SOCK_STREAM;
      hints.ai_protocol = IPPROTO_TCP;

      iResult = getaddrinfo(ip.c_str(), std::to_string(port).c_str(), &hints,
                            &result);
      if (iResult != 0) {
        SSBL_LOG_ERROR("getaddrinfo failed with error: %d\n", iResult);
        WSACleanup();
        return false;
      }

      for (ptr = result; ptr != nullptr; ptr = ptr->ai_next) {
        InternSocket_ =
            socket(ptr->ai_family, ptr->ai_socktype, ptr->ai_protocol);
        if (InternSocket_ == INVALID_SOCKET) {
          SSBL_LOG_ERROR("Socket failed with error: %ld\n", WSAGetLastError());
          WSACleanup();
          return false;
        }

        // Connect to server.
        iResult = connect(InternSocket_, ptr->ai_addr, (int)ptr->ai_addrlen);
        if (iResult == SOCKET_ERROR) {
          closesocket(InternSocket_);
          InternSocket_ = INVALID_SOCKET;
          continue;
        }
        break;
      }

      freeaddrinfo(result);

      if (InternSocket_ == INVALID_SOCKET) {
        SSBL_LOG_ERROR("Unable to connect to server!\n");
        WSACleanup();
        return false;
      }

      fdarray_.fd = InternSocket_;
      fdarray_.events = POLLRDNORM;
      localIsOpen = true;

      if (localIsOpen) {
        SSBL_LOG_INFO("Connection to %s on port %u established.", ip.c_str(),
                      port);
        Run();  // start the receiver task
      }

    } else {
      struct sockaddr_in server;
      bool foundSocket = false;
      uint16_t start = 1024;
      uint16_t recentPort = 30718;
      char bc = 1;
      hints.ai_family = AF_INET;
      hints.ai_socktype = SOCK_DGRAM;
      hints.ai_protocol = IPPROTO_UDP;

      InternSocket_ =
          socket(hints.ai_family, hints.ai_socktype, hints.ai_protocol);
      if (InternSocket_ == INVALID_SOCKET) {
        SSBL_LOG_ERROR("Socket failed with error: %ld\n", WSAGetLastError());
        WSACleanup();
        return false;
      }

      if (setsockopt(InternSocket_, SOL_SOCKET, SO_BROADCAST, &bc, sizeof(bc)) <
          0) {
        SSBL_LOG_ERROR("Can't enable broadcast option");
        closesocket(InternSocket_);
        return false;
      }

      server.sin_family = AF_INET;
      server.sin_addr.s_addr = INADDR_ANY;
      server.sin_port = htons(recentPort);

      while ((!foundSocket) && (start >= 1024)) {
        if (bind(InternSocket_, (struct sockaddr *)&server, sizeof(server)) ==
            SOCKET_ERROR) {
          SSBL_LOG_INFO("Bind on port %d failed with error: %ld\n", recentPort,
                        WSAGetLastError());
        } else {
          foundSocket = true;
          break;
        }
        recentPort = start;
        server.sin_port = htons(start++);
      }

      if (foundSocket) {
        localIsOpen = true;
      } else {
        closesocket(InternSocket_);
        SSBL_LOG_ERROR("No free UDP port found");
      }
    }
    return localIsOpen;
  }
  //========================================================================
  void SetToUdp() { socketType_ = UDP_SOCKET; }

  //========================================================================
  void Disconnect() {
    localIsOpen = false;

    SSBL_Sleep(500);

    closesocket(InternSocket_);
    WSACleanup();
    Stop();
  }

  //========================================================================
  void DisconnectWithError() { Disconnect(); }

  //========================================================================
  bool IsOpen() { return localIsOpen; }

  //========================================================================
  bool Send(uint8_t *pData, size_t nBytes) {
    bool bRet = true;

    int32_t iResult = send(InternSocket_, reinterpret_cast<const char *>(pData),
                           static_cast<int32_t>(nBytes), 0);

    if (iResult == SOCKET_ERROR) {
      SSBL_LOG_ERROR("Send failed with %d", WSAGetLastError());
      DisconnectWithError();

      bRet = false;
    }
    return bRet;
  }

  //========================================================================
  size_t Receive(uint8_t **ppData, size_t nBytesToRead) {
    size_t ret = 0;
    int32_t res = recv(InternSocket_, reinterpret_cast<char *>(*ppData),
                       static_cast<int32_t>(nBytesToRead), 0);

    if (res < 0) {
      SSBL_LOG_ERROR("Socket error");
      ret = 0;
    } else {
      ret = static_cast<size_t>(res);
    }

    return ret;
  }

  //========================================================================
  size_t BytesPending(void) {
    size_t ret = 0;
    u_long cmdret;
    ioctlsocket(InternSocket_, FIONREAD, &cmdret);
    ret = cmdret;
    return ret;
  }

  //========================================================================
  bool SendUdpBroadcast(uint8_t *pData, size_t nBytes, uint16_t port) {
    struct sockaddr_in out;
    out.sin_family = AF_INET;
    out.sin_port = htons(port);

    InetPton(AF_INET, "255.255.255.255", &out.sin_addr.s_addr);

    if (SOCKET_ERROR == sendto(InternSocket_,
                               reinterpret_cast<const char *>(pData),
                               (int32_t)nBytes, 0, (struct sockaddr *)&out,
                               (int32_t)sizeof(out))) {
      SSBL_LOG_ERROR("UDP broadcast failed with error: %ld\n",
                     WSAGetLastError());
      return false;
    }
    return true;
  }

  //========================================================================
  void setParent(Socket *pParent) { pParent_ = pParent; }
  //========================================================================
  void Delete() {}
  //========================================================================
  bool TaskLoop(void) {
    int32_t iRet;

    if (localIsOpen) {
      iRet = WSAPoll(&fdarray_, 1, 250);

      if (SOCKET_ERROR != iRet) {
        if (fdarray_.revents == POLLRDNORM) {
          if (pParent_ != nullptr) {
            pParent_->OnReceive();
          }
        }
      } else {
        SSBL_LOG_WARNING("Error when polling socket");
      }
    }
    return true;
  }

 private:
  SocketType socketType_;
  bool localIsOpen;

  SOCKET InternSocket_;
  WSADATA wsaData_;
  WSAPOLLFD fdarray_;
  Socket *pParent_;
};

//=============================================================================
//=============================================================================
Socket::Socket(std::string &Ip, uint32_t PortNo)
    : pImpl_{std::make_unique<impl>()} {
  IP_ = Ip;
  Port_ = PortNo;
  pImpl_->setParent(this);
}

//=============================================================================
//=============================================================================
Socket::Socket(uint32_t PortNo) : pImpl_{std::make_unique<impl>()} {
  Port_ = PortNo;
  pImpl_->SetToUdp();
  pImpl_->setParent(this);
}

//===========================================================================
//===========================================================================
Socket::~Socket() {
  pImpl_->Delete();
  pImpl_.reset(nullptr);
}

//=============================================================================
//=============================================================================
void Socket::OnReceive(void) {
  SSBL_LOG_DEBUG("Socket: %s", __func__);
  FireCallback("OnReceive");
}

//=============================================================================
//=============================================================================
SensorResult Socket::Connect() {
  SensorResult ret = SSBL_SUCCESS;

  if (!pImpl_->Connect(IP_, Port_)) {
    ret = SSBL_ERR_CONNECT;
  }
  return ret;
}

//=============================================================================
//=============================================================================
void Socket::Disconnect() { pImpl_->Disconnect(); }

//=============================================================================
//=============================================================================
bool Socket::IsOpen() { return pImpl_->IsOpen(); }

//=============================================================================
//=============================================================================
bool Socket::Send(uint8_t *pData, size_t nBytes) {
  return pImpl_->Send(pData, nBytes);
}

//=============================================================================
//=============================================================================
size_t Socket::Receive(uint8_t **ppData, size_t nBytesToRead) {
  return pImpl_->Receive(ppData, nBytesToRead);
}

//=============================================================================
//=============================================================================
size_t Socket::BytesPending(void) { return pImpl_->BytesPending(); }

//=============================================================================
//=============================================================================
// bool Socket::SendUdpBroadcast(uint8_t *pData, size_t nBytes, uint16_t port) {
//  return pImpl_->SendUdpBroadcast(pData, nBytes, port);
//}

//=============================================================================
//=============================================================================
Socket::Socket(Socket &&) = default;
Socket &Socket::operator=(Socket &&) = default;

}  // namespace ssbl
