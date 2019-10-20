/**
 * \file
 * \brief Declaration of CoLaProtocol
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
#include <string>
#include <vector>
#include "Core/OS/include/VariableEventQueue.h"
#include "Protocol/include/Common/Protocol.h"

#define COLA_AB_REQ_LENGTH 2

#define COLA_RECEIVE_EVENT 0

namespace ssbl {
#define MAX_PREAMBLE_LENGTH 10
#define MAX_POSTAMBLE_LENGTH 10

// Forward declarations
class SickSensorInterface;
class Deserializer;
class Serializer;

enum ColaResponse {
  RES_READ_VARIABLE,
  RES_WRITE_VARIABLE,
  RES_METHOD_RESULT,
  RES_REGISTER_EVENT,
  RES_UNREGISTER_EVENT,
  RES_ASYC_METHOD,
  RES_EVENT_NOTIFICATION,
  RES_ERROR_NOTIFICATION
};

enum ReceiveState {
  RECEIVE_START_FRAME,
  RECEIVE_LENGTH_FIELD,
  RECEIVE_PAYLOAD,
};

typedef struct {
  ProtocolRequest index;
  uint8_t byName[2];
  uint8_t byIndex[2];
} CoLaReqStrings;

typedef struct {
  ColaResponse index;
  uint8_t byName[2];
  uint8_t byIndex[2];
} CoLaResStrings;

/**
 * @class CoLaProtocol
 * @brief Base class for all CoLa protocols
 *
 */
class CoLaProtocol : public Protocol {
 public:
  //============================================================================
  // \brief Constructor
  // \param ProtoType One of the protocol types defined within in BasicTypes.h
  // \param AddrMode Addressing mode (ByIndex or ByName)
  // \param txBufSize Size of the the tx buffer (see base class)
  // \param rxBufSize Size of the the rx buffer (see base class)

  /**
   * @brief Construct a new CoLaProtocol object
   *
   * @param ProtoType One of the protocol types defined within in BasicTypes.h
   * @param AddrMode Addressing mode (ByIndex or ByName)
   * @param txBufSize txBufSize Size of the the tx buffer (see base class)
   * @param rxBufSize rxBufSize Size of the the rx buffer (see base class)
   */
  CoLaProtocol(ProtocolType ProtoType, AddressingMode AddrMode,
               size_t txBufSize, size_t rxBufSize);

  /**
   * @brief Destroy the CoLaProtocol object
   *
   */
  virtual ~CoLaProtocol();

  /**
   * @brief Initialize
   *
   * @param rInterface
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Init(SickSensorInterface& rInterface) = 0;

  /**
   * @brief Send a request to the sensor
   *
   * @param req the request
   * @param rObj the ComObj to transfer
   * @return SensorResult SSBL_SUCCESS on success
   */
  SensorResult SendRequest(ProtocolRequest req, ComObj& rObj);

  /**
   * @brief Register an event. Provide either a callback or a queue not both,
   * not nothing
   *
   * @param rVar the variable which provides an event
   * @param OnEventCb the callback function triggered when event arrives
   * @param cbParam user parameter to the callback
   * @param pQueue a queue to which the event data is forwarded
   * @return SensorResult SSBL_SUCCESS on success
   */
  SensorResult RegisterEvent(ComObj& rVar,
                             std::function<void(uint64_t*)> OnEventCb,
                             uint64_t cbParam, VariableEventQueue* pQueue);

  /**
   * @brief Deregister from an event
   *
   * @param rVar the variable providing the event
   * @return SensorResult  SSBL_SUCCESS on success
   */
  SensorResult DeregisterEvent(ComObj& rVar);

  /**
   * @brief Serialize and transmit a request
   *
   * @param req the request
   * @param rObj the ComObj to transfer
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult SerializeRequest(ProtocolRequest req, ComObj& rVar) = 0;

  /**
   * @brief Check if a variable event is registered
   *
   * @param rVar the variable
   * @return true if registered
   * @return false
   */
  bool IsVarEventRegistered(ComObj& rVar);

  /**
   * @brief Get the names of the variables which have an event registered
   *
   * @return std::vector<std::string>
   */
  std::vector<std::string> GetRegisteredEventNames();

  /**
   * @brief Get the Deserializer currently employed
   *
   * @return Deserializer*
   */
  Deserializer* GetDeserializer(void) { return pDeserializer_; };

  /**
   * @brief Get the Serializer currently employed
   *
   * @return Serializer*
   */
  Serializer* GetSerializer(void) { return pSerializer_; };

  /**
   * @brief Forward Socket event to receive function
   *
   * @param value COLA_RECEIVE_EVENT
   */
  void SocketEvent(int32_t value);

 protected:
  /**
   * @brief Get the Content Offset
   *
   * @param rComObject
   * @return uint32_t
   */
  virtual uint32_t GetContentOffset(ComObj& rComObject) = 0;
  /**
   * @brief Get Signature of the received telegram (computed over Communication
   * Name or Index)
   *
   * @param pTelegram
   * @return uint16_t
   */
  virtual uint16_t GetTelegramSignature(uint8_t* pTelegram) = 0;

  /**
   * @brief Get the Protocol Error Offset (n bytes after response identiefier
   * RA,MA etc.)
   *
   * @return uint16_t
   */
  virtual uint16_t GetProtocolErrorOffset(void) = 0;

  /**
   * @brief Create an event token by computing a signature over Communication
   * Name or Index
   *
   * @param varname Communication Name
   * @param eventIndex Communication Index
   * @return uint16_t Signature
   */
  uint16_t CreateEventToken(const std::string& varname, uint16_t eventIndex);

  /**
   * @brief Call when Rx telegram is complete to process the telegram
   *
   * @param contentStartOffset offset to the response identifier (RA, MA)
   */
  void DispatchRxMessage(uint32_t contentStartOffset);

  /**
   * @brief Receive data from Socket
   *
   */
  virtual void Receive(void) = 0;

  /**
   * @brief Get the Response Type
   *
   * @param pResponseCommandStart Pointer to the response type start (RA, WA,
   * etc.)
   * @return ColaResponse
   */
  ColaResponse GetResponseType(uint8_t* pResponseCommandStart);

  /**
   * @brief Copy Preamble to Tx buffer
   *
   * @param offset bytes in Tx buffer (0)
   * @return uint32_t offset + length of preamble
   */
  uint32_t AddPreamble(uint32_t offset);

  /**
   * @brief Copy payload to Tx buffer - for exampe the value of variable in case
   * of a write variable
   *
   * @param offset bytes in Tx buffer
   * @param pPayload Pointer to payload
   * @param payloadLength Length of payload
   * @return uint32_t offset + length of payload
   */
  uint32_t AddPayload(uint32_t offset, const void* pPayload,
                      size_t payloadLength);
  /**
   * @brief Copy postable to Tx buffer (0x03 for example for CoLaA)
   *
   * @param offset bytes in Tx buffer
   * @return uint32_t offset + length of payload
   */
  uint32_t AddPostamble(uint32_t offset);

  /**
   * @brief Copy Preamble, Indexed Request, Payload and Postamble to Tx buffer
   *
   * @param offset bytes in Tx buffer
   * @param req the request
   * @param idx the Communication Index of the ComObj
   * @return uint32_t
   */
  uint32_t AddRequest(uint32_t offset, ProtocolRequest req, uint16_t idx);

  /**
   * @brief Copy Preamble, Named Request, Payload and Postamble to Tx buffer
   *
   * @param offset bytes in Tx buffer
   * @param req the request
   * @param name the Communication Name of the ComObj
   * @return uint32_t
   */
  uint32_t AddRequest(uint32_t offset, ProtocolRequest req, std::string name);

  /**
   * @brief Deserialize the request index
   *
   * @return uint16_t Communication Index
   */
  virtual uint16_t DeserializeReqComIndex(void) = 0;

  /**
   * @brief Deserialize the request name
   *
   * @return uint16_t Communication Name
   */
  virtual std::string DeserializeReqComName(void) = 0;

  /**
   * @brief Check if the reply received matches the request sent
   *
   * @return true
   * @return false
   */
  bool CheckReplyMatchesPending(void);

  /**
   * @brief Set up the internal variables
   *
   * @param rInterface the interface that is going to be used
   * @param preambleLength the length of the preamble
   * @param postambleLength the length of the postamble
   * @param pPreamble Pointer to the preamble
   * @param pPostamble Pointer to the postamble
   * @return SensorResult SSBL_SUCCESS - always
   */
  SensorResult InitInternal(SickSensorInterface& rInterface,
                            std::size_t preambleLength,
                            std::size_t postambleLength,
                            const uint8_t* pPreamble,
                            const uint8_t* pPostamble);

 protected:
  AddressingMode AddressingMode_;   ///< Addressing mode index or name
  ReceiveState RcvState_;           ///< current receiver state
  std::size_t PreambleLength_;      ///< length of the preamble
  std::size_t PostambleLength_;     ///< length of the postamble
  ProtocolRequest PendingRequest_;  ///< pending request for pPending_obj_
  uint8_t PreambleData_[MAX_PREAMBLE_LENGTH];   ///<< Preamble something like
                                                ///< 0x02 0x02 0x02 0x02
  uint8_t PostambleData_[MAX_PREAMBLE_LENGTH];  ///<< Postable
  ComObj* pPendingObj_;         ///< pending ComObj for pending_request_
  bool ReqIsPending_;           ///< marks if there is a request pending (set
                                ///< pPending_obj_ to NULL insted?)
  SensorResult RequestResult_;  ///< the request result - finished successful or
                                ///< timeout, etc.
  Event RequestComplete_;  ///< DispatchRxMessage will trigger this event if a
                           ///< request has been completed
  Mutex EventMapLock;      ///< Mutex for the event map
  std::map<uint16_t, VariableEventContainer*>
      EventMap_;  ///< an event map containing a signatatur and variable to find
                  ///< out if, and if which callback or queue we have to hand
                  ///< over the event data
};

}  // namespace ssbl
