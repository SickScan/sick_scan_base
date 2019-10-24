/**
 * \file
 * \brief Declaration of CoLaA Protocol Class (ColaA by index might not work)
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
#include "Protocol/include/CoLa/CoLaADeserializer.h"
#include "Protocol/include/CoLa/CoLaASerializer.h"
#include "Protocol/include/CoLa/CoLaProtocol.h"

namespace ssbl {

// Forward declarations
class SickSensorInterface;
class CoLaADeserializer;

/**
 * @class CoLaAProtocol
 * @brief CoLA protocol implementation
 *
 */
class CoLaAProtocol : public CoLaProtocol {
 public:
  /**
   * @brief Construct a new CoLaAProtocol object
   *
   * @param AddrMode Addressing mode (ByIndex or ByName)
   * @param txBufSize txBufSize Size of the the tx buffer (see base class)
   * @param rxBufSize rxBufSize Size of the the rx buffer (see base class)
   */
  CoLaAProtocol(AddressingMode AddrMode, size_t txBufSize, size_t rxBufSize);

  /**
   * @brief Destroy the CoLaAProtocol object
   *
   */
  ~CoLaAProtocol(){};

  /**
   * @brief Initialize the protocol.
   *
   * @param rInterface Reference to the sensor interface that is to be used
   * @return SensorResult SSBL_SUCCESS on success
   */
  SensorResult Init(SickSensorInterface& rInterface);

  /**
   * @brief Create a request and transmit it
   *
   * @param req the type of request
   * @param rComObj the object to be transmitted
   * @return SensorResult SSBL_SUCCESS on success
   */
  SensorResult SerializeRequest(ProtocolRequest req, ComObj& rComObj);

 private:
  /**
   * @brief Get the offset at which the payload starts
   *
   * @param rComObj the ComObj
   * @return uint32_t offset
   */
  uint32_t GetContentOffset(ComObj& rComObj);

  /**
   * @brief Get the Telegram Signature (depends on addressing)
   *
   * @param pTelegram Pointer to the raw telegram
   * @return uint16_t signature (CRC16)
   */
  uint16_t GetTelegramSignature(uint8_t* pTelegram);

  /**
   * @brief Get the offset in bytes after sFA at which the error token starts
   *
   * @return uint16_t offset
   */
  uint16_t GetProtocolErrorOffset(void) { return 1; };

  /**
   * @brief Deserialize the request index
   *
   * @return uint16_t Communication Index
   */
  uint16_t DeserializeReqComIndex(void);

  /**
   * @brief Deserialize the request name
   *
   * @return uint16_t Communication Name
   */
  std::string DeserializeReqComName(void);

  /**
   * @brief Receive data from interface, deserialize and forward
   *
   */
  void Receive(void);
};

}  // namespace ssbl
