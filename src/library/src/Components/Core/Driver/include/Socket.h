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

#pragma once

#include <functional>
#include <memory>
#include <string>
#include "Core/Sensor/include/Common/SickSensorInterface.h"
#include "Logger/include/Logger.h"

namespace ssbl {

/**
 * @class Socket
 * @brief Socket class to connect to sensors via Ethernet
 *
 */
class Socket : public SickSensorInterface {
 public:
  /**
   * @brief Constructor: Create a TCP Client socket to connect to a servert
   *
   * @param Ip the server IP
   * @param PortNo the server port
   */
  Socket(std::string& Ip, uint32_t PortNo);

  /**
   * @brief Constructor: Create a UDP Client socket
   *
   * @param PortNo the UDP Port on the host machine
   */
  Socket(uint32_t PortNo);

  /**
   * @brief Destroy the Socket object
   *
   */
  ~Socket();

  /**
   * @brief Connect to the server
   *
   * @return SensorResult
   */
  SensorResult Connect();

  /**
   * @brief Disconnect from the server
   *
   */
  void Disconnect();

  /**
   * @brief Is the socket open
   *
   * @return true if open
   * @return false
   */
  bool IsOpen();

  /**
   * @brief Send data to a TCP client
   *
   * @param pSrc Pointer to data
   * @param nBytes to be sent
   * @return true on success
   * @return false
   */
  bool Send(uint8_t* pSrc, size_t nBytes);

  /**
   * @brief Receive from buffer
   *
   * @param ppDst Pointer to storage area (please provide a buffer of size
  nBytesToRead)
   * @param nBytesToRead number of bytes to be read from the internal buffer
   * @return size_t number of bytes read
   */
  size_t Receive(uint8_t** ppDst, size_t nBytesToRead);

  /**
   * @brief Get the number of bytes pending in the RX Buffer
   *
   * @return size_t number of bytes pending
   */
  size_t BytesPending(void);

  /**
   * @brief Send UPD broadcast
   *
   * @param pData Pointer to source
   * @param nBytes to transmit
   * @param port destination port
   * @return true on success
   * @return false
   */
  // bool SendUdpBroadcast(uint8_t* pData, size_t nBytes, uint16_t port);

 private:
  // no copy
  Socket(Socket&&);
  Socket& operator=(Socket&&);
  /**
   * @brief Private OnReceive
   *
   */
  void OnReceive(void);

  class impl;
  std::unique_ptr<impl> pImpl_;
  std::string IP_;
  uint32_t Port_;
};

}  // namespace ssbl
