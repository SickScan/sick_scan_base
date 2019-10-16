/**
 * \file
 * \brief Declaration of Protocol Base Class
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
#include <stdint.h>
#include <cstddef>
#include <string>
#include "Core/OS/include/Event.h"
#include "Core/OS/include/Mutex.h"
#include "Core/Sensor/include/Common/SickSensorVariable.h"
#include "Logger/include/Logger.h"
#include "Protocol/include/Common/TelegramBuffer.h"
#include "Types/include/SickSensorReturnCodes.h"

namespace ssbl {

// Forward declarations
class SickSensorInterface;
class Deserializer;
class Serializer;
class VariableEventQueue;

//! \typedef Enum ProtocolRequest
typedef enum {
  REQ_READ_VARIABLE,     /// Read variable req.
  REQ_WRITE_VARIABLE,    /// Write variable req.
  REQ_INVOKE_METHOD,     /// Exec. func req.
  REQ_REGISTER_EVENT,    /// Reg. event req.
  REQ_UNREGISTER_EVENT,  /// Unreg. event req.
} ProtocolRequest;

//! \typedef Struct VariableEventContainer
typedef struct {
  std::function<void(uint64_t*)> Callback_;

  ///  Callback function
  SsblEventContainer
      CallbackData_;  ///  Callback data, payload and user user defined param
  /// Queue
  VariableEventQueue* pQueue_;
} VariableEventContainer;

/**
 * @class Protocol
 * @brief Base class Protocol used by all protocol implementations.
 * Concrete protocol implementations should derive from this base class
 */
class Protocol {
 public:
  /**
   * @brief Construct a new Protocol object
   *
   * @param ProtoType One of the protocol types defined within in BasicTypes.h
   * @param txBufSize Size of the the tx buffer created within this class
   * @param rxBufSize Size of the the rx buffer created within this class
   */
  Protocol(ProtocolType ProtoType, size_t txBufSize, size_t rxBufSize);

  /**
   * @brief Destroy the Protocol object
   *
   */
  virtual ~Protocol();

  /**
   * @brief Send data to sensor. Transmits payloadLength bytes to a server.
   * Note that the data has already been placed into the tx buffer. The first
   * transmitted byte will be buffer[0]
   *
   * @param payloadLength Number of bytes to transmit
   * @return SensorResult SSBL_SUCCESS on success
   */
  SensorResult Send(size_t payloadLength);

  /**
   * @brief Get the Deserializer
   *
   * @return Deserializer*
   */
  Deserializer* GetDeserializer(void) { return pDeserializer_; };

  /**
   * @brief Get the Serializer
   *
   * @return Serializer*
   */
  Serializer* GetSerializer(void) { return pSerializer_; };

  /**
   * @brief Get the Protocol Type
   *
   * @return ProtocolType
   */
  ProtocolType GetProtocolType(void) { return ProtocolType_; };

  /**
   * @brief Initialize the protocol.<b> Has to be implemented by derived classes
   * </b>
   *
   * @param rInterface Refernence to the sensor interface that is to be used
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Init(SickSensorInterface& rInterface) = 0;

  /**
   * @brief Send a request to the sensor
   * First, this function will log in at the sensor with the user level
   * required to exchange rObj. Second, it will transfer the request to the
   * sensor. Third, it will wait with a predfined timout (5s) for a response
   * from the sensor. Finally, if required, the function will log of from the
   *  sensor.
   *  <b> Has to be implemented by derived classes </b>
   *
   * @param req Request to be sent (Read, Write, Exec. Function, Reg. Event)
   * @param rObj The ComObj (variable, function) to be exchanged
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult SendRequest(ProtocolRequest req, ComObj& rObj) = 0;

  /**
   * @brief Get the offset within the tx/rx buffer at which the payload starts
   *  This number is required by the de-/serializer to start operation on the
   *  payload.
   *  <b> Has to be implemented by derived classes </b>
   *
   * @param rComObject The ComObj (variable, function) to be exchanged
   * @return uint32_t Number of bytes
   */
  virtual uint32_t GetContentOffset(ComObj& rComObject) = 0;

  /**
   * @brief Compute the telegram signature
   * The signature is either a checksum computed over the communication name
   *  used within the telegram or the index (depends on the addressing scheme
   *  of the employed protocol.
   *  <b> Has to be implemented by derived classes </b>
   *
   * @param pTelegram
   * @return uint16_t Signature
   */
  virtual uint16_t GetTelegramSignature(uint8_t* pTelegram) = 0;

  /**
   * @brief Bind a callback function to a variable event
   *  <b> Has to be implemented by derived classes </b>
   *
   * @param rVar the ComObj (a variable which provides an event)
   * @param OnEventCb a callback function
   * @param cbParam An additional parameter that can be found in pEventData when
   * the callback is triggered
   * @param pQueue Pointer to a queue. If it is not not null, the callback an
   * it's parameter is ignored
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult RegisterEvent(ComObj& rVar,
                                     std::function<void(uint64_t*)> OnEventCb,
                                     uint64_t cbParam,
                                     VariableEventQueue* pQueue) = 0;

  /**
   * @brief Check if a variable event is already registered
   *
   * @param rVar the variable to check
   * @return true
   * @return false
   */
  virtual bool IsVarEventRegistered(ComObj& rVar) = 0;

  /**
   * @brief Deregister a variable event
   *
   * @param rVar The ComObj (a variable which provides an event)
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult DeregisterEvent(ComObj& rVar) = 0;

  /**
   * @brief Get the names of all variable with registered events
   *
   * @return std::vector<std::string>
   */
  virtual std::vector<std::string> GetRegisteredEventNames() = 0;

 protected:
  /// Handle to store the protocol type
  ProtocolType ProtocolType_;

  ///  Pointer to the Deserializer
  Deserializer* pDeserializer_;

  /// Pointer to the Serializer
  Serializer* pSerializer_;

  /// Pointer to the communication interface
  SickSensorInterface* pInterface_;

  ///  Transmit buffer
  TelegramBuffer* pTxBuffer_;

  ///  Receive buffer
  TelegramBuffer* pRxBuffer_;
};

}  // namespace ssbl
