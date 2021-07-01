/**
 * \file
 * \brief Implementation of CoLaProtocol
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

#include <iostream>
#include <string>

#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/Endianess.h"
#include "Base/Core/Driver/include/Socket.h"
#include "Base/Core/OS/include/VariableEventQueue.h"
#include "Base/Logger/include/Logger.h"
#include "Base/Protocol/include/CoLa/CoLaProtocol.h"
#include "Base/Protocol/include/Common/Checksum.h"
#include "Base/Protocol/include/Common/Deserializer.h"

using namespace ssbl;

namespace colacommands {
CoLaReqStrings CoLaRequests[] = {
    {REQ_READ_VARIABLE, {'R', 'N'}, {'R', 'I'}},
    {REQ_WRITE_VARIABLE, {'W', 'N'}, {'W', 'I'}},
    {REQ_INVOKE_METHOD, {'M', 'N'}, {'M', 'I'}},
    {REQ_REGISTER_EVENT, {'E', 'N'}, {'E', 'I'}},
    {REQ_UNREGISTER_EVENT, {'E', 'N'}, {'E', 'I'}}};

CoLaResStrings CoLaResponses[] = {
    {RES_READ_VARIABLE, {'R', 'A'}, {'R', 'A'}},
    {RES_WRITE_VARIABLE, {'W', 'A'}, {'W', 'A'}},
    {RES_METHOD_RESULT, {'A', 'N'}, {'A', 'I'}},
    {RES_REGISTER_EVENT, {'E', 'A'}, {'E', 'A'}},
    {RES_UNREGISTER_EVENT, {'E', 'A'}, {'E', 'A'}},
    {RES_ASYC_METHOD, {'M', 'A'}, {'M', 'A'}},
    {RES_EVENT_NOTIFICATION, {'S', 'N'}, {'S', 'I'}},
    {RES_ERROR_NOTIFICATION, {'F', 'A'}, {'F', 'A'}},
};
}  // namespace colacommands

//=============================================================================
//=============================================================================
CoLaProtocol::CoLaProtocol(ProtocolType ProtoType, AddressingMode AddrMode,
                           size_t txBufSize, size_t rxBufSize)
    : Protocol(ProtoType, txBufSize, rxBufSize),
      AddressingMode_(AddrMode),
      RcvState_(RECEIVE_START_FRAME),
      PreambleLength_(0),
      PostambleLength_(0),
      PendingRequest_(REQ_READ_VARIABLE),
      PreambleData_{},
      PostambleData_{},
      pPendingObj_(nullptr),
      ReqIsPending_(false),
      RequestResult_(SSBL_SUCCESS),
      RequestComplete_(){

      };
//=============================================================================
//=============================================================================
CoLaProtocol::~CoLaProtocol() {
  EventMapLock.Unlock();
  EventMap_.clear();
};

//=============================================================================
//=============================================================================
uint32_t CoLaProtocol::AddPreamble(uint32_t offset) {
  pTxBuffer_->CopyToBuffer(offset, PreambleData_, PreambleLength_);
  return offset + static_cast<uint32_t>(PreambleLength_);
}

//=============================================================================
//=============================================================================
uint32_t CoLaProtocol::AddPayload(uint32_t offset, const void *pPayload,
                                  size_t payloadLength) {
  SSBL_ASSERT_IF_NULL(pPayload);
  if (NULL != pPayload) {
    pTxBuffer_->CopyToBuffer(offset, pPayload, payloadLength);
  }
  return offset + static_cast<uint32_t>(payloadLength);
}

//=============================================================================
//=============================================================================
uint32_t CoLaProtocol::AddPostamble(uint32_t offset) {
  pTxBuffer_->CopyToBuffer(offset, PostambleData_, PostambleLength_);
  return offset + static_cast<uint32_t>(PostambleLength_);
}

//=============================================================================
//=============================================================================
uint32_t CoLaProtocol::AddRequest(uint32_t offset, ProtocolRequest req,
                                  uint16_t idx) {
  uint16_t idxtmp = bswap_16(idx);
  offset = AddPreamble(offset);

  offset = AddPayload(offset,
                      reinterpret_cast<const uint8_t *>(
                          colacommands::CoLaRequests[req].byIndex),
                      2);

  offset = AddPayload(offset, reinterpret_cast<const uint8_t *>(&idxtmp),
                      sizeof(uint16_t));

  offset = AddPostamble(offset);
  return offset;
}

//=============================================================================
//=============================================================================
uint32_t CoLaProtocol::AddRequest(uint32_t offset, ProtocolRequest req,
                                  std::string name) {
  offset = AddPreamble(offset);
  std::string localName = " " + name + " ";

  offset = AddPayload(
      offset,
      reinterpret_cast<const uint8_t *>(colacommands::CoLaRequests[req].byName),
      2);

  offset =
      AddPayload(offset, reinterpret_cast<const uint8_t *>(localName.c_str()),
                 localName.size());

  offset = AddPostamble(offset);
  return offset;
}

//=============================================================================
//=============================================================================
SensorResult CoLaProtocol::InitInternal(SensorInterface &rInterface,
                                        std::size_t preambleLength,
                                        std::size_t postambleLength,
                                        const uint8_t *pPreamble,
                                        const uint8_t *pPostamble) {
  SensorResult ret = SSBL_SUCCESS;
  PreambleLength_ = preambleLength;
  PostambleLength_ = postambleLength;
  pInterface_ = &rInterface;

  if (preambleLength) SSBL_ASSERT_IF_NULL(pPreamble);
  if (postambleLength) SSBL_ASSERT_IF_NULL(pPostamble);

  memcpy(PreambleData_, pPreamble, preambleLength);
  memcpy(PostambleData_, pPostamble, postambleLength);

  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaProtocol::SendRequest(ProtocolRequest req, ComObj &rObj) {
  SensorResult ret = SSBL_SUCCESS;
  EventReturn eRet;

  ReqIsPending_ = true;

  pPendingObj_ = &rObj;
  PendingRequest_ = req;

  SSBL_LOG_DEBUG("Send request: %d, Object: %s", req, rObj.GetName().c_str());

  ret = SerializeRequest(req, rObj);

  eRet = RequestComplete_.WaitForEvent(5000);

  if (ret == SSBL_SUCCESS) {
    // forward request result if it failed
    // forward timeout condition in case
    // request still signaled success
    if ((RequestResult_ == SSBL_SUCCESS) && (eRet != EVENT_RECEIVED)) {
      ret = SSBL_ERR_TIMEOUT_DURING_REQUEST;
    } else {
      ret = RequestResult_;
    }
  }

  return ret;
}

//=============================================================================
//=============================================================================
ColaResponse CoLaProtocol::GetResponseType(uint8_t *pResponseCommandStart) {
  ColaResponse res;
  uint8_t *pCmp;
  for (uint32_t i = 0; i <= RES_ERROR_NOTIFICATION; i++) {
    res = colacommands::CoLaResponses[i].index;
    if (AddressingMode_ == BY_NAME) {
      pCmp = colacommands::CoLaResponses[i].byName;
    } else {
      pCmp = colacommands::CoLaResponses[i].byIndex;
    }
    if (0 == memcmp(pResponseCommandStart, pCmp, 2)) {
      return res;
    }
  }

  return res;
}

//=============================================================================
//=============================================================================
uint16_t CoLaProtocol::CreateEventToken(const std::string &varname,
                                        uint16_t eventIndex) {
  if (AddressingMode_ == BY_NAME) {
    return ComputeSignature(varname);
  } else {
    return ComputeSignature(eventIndex);
  }
}

//=============================================================================
//=============================================================================
SensorResult CoLaProtocol::RegisterEvent(
    ComObj &rVar, std::function<void(uint64_t *)> OnEventCb, uint64_t cbParam,
    VariableEventQueue *pQueue) {
  SensorResult ret = SSBL_SUCCESS;
  VariableEventContainer *pExists = nullptr;
  uint16_t eventToken = CreateEventToken(rVar.GetComName(), rVar.GetComIndex());

  EventMapLock.Lock();
  pExists = EventMap_[eventToken];
  EventMapLock.Unlock();

  if (pExists == nullptr) {
    pExists = new VariableEventContainer;
    if (pExists != nullptr) {
      pExists->Callback_ = OnEventCb;
      pExists->CallbackData_.CallbackParameter = cbParam;
      pExists->pQueue_ = pQueue;
      pExists->CallbackData_.pComObj = rVar.Clone();

      if (pExists->CallbackData_.pComObj != nullptr) {
        EventMapLock.Lock();
        EventMap_[eventToken] = pExists;
        EventMapLock.Unlock();
      }
    }
  } else {
    ret = SSBL_ERR_EVENT_ALREADY_REGISTERED_FAILED;
  }

  return ret;
}

//=============================================================================
//=============================================================================
bool CoLaProtocol::IsVarEventRegistered(ComObj &rVar) {
  VariableEventContainer *pExists = nullptr;
  uint16_t eventToken = CreateEventToken(rVar.GetComName(), rVar.GetComIndex());
  EventMapLock.Lock();
  pExists = EventMap_[eventToken];
  EventMapLock.Unlock();

  if (pExists != nullptr) {
    return true;
  }
  return false;
}

//=============================================================================
//=============================================================================
SensorResult CoLaProtocol::DeregisterEvent(ComObj &rVar) {
  SensorResult ret = SSBL_SUCCESS;
  VariableEventContainer *pExists = nullptr;
  uint16_t eventToken = CreateEventToken(rVar.GetComName(), rVar.GetComIndex());

  EventMapLock.Lock();
  pExists = EventMap_[eventToken];
  EventMapLock.Unlock();

  if (pExists != nullptr) {
    delete pExists;
    EventMap_.erase(eventToken);
  } else {
    ret = SSBL_ERR_EVENT_ALREADY_UNREGISTERED;
  }

  return ret;
}

//=============================================================================
//=============================================================================
std::vector<std::string> CoLaProtocol::GetRegisteredEventNames() {
  std::vector<std::string> ret;
  EventMapLock.Lock();
  for (auto const &x : EventMap_) {
    ret.push_back(x.second->CallbackData_.pComObj->GetName());
  }

  EventMapLock.Unlock();
  return ret;
}

//=============================================================================
//=============================================================================
void CoLaProtocol::DispatchRxMessage(uint32_t contentStartOffset) {
  uint8_t *pTmp = &(pRxBuffer_->GetRaw())[0];
  ColaResponse res = GetResponseType(&pTmp[contentStartOffset]);
  uint32_t cOffset = 0;
  bool signalReqComplete = false;
  bool replyToPending = false;
  VariableEventContainer *pExists = nullptr;
  uint16_t eventToken = 0;

  if (pPendingObj_ != nullptr) {
    if ((PendingRequest_ == (ProtocolRequest)res) ||
        ((PendingRequest_ == REQ_UNREGISTER_EVENT) &&
         (res == RES_REGISTER_EVENT))) {
      replyToPending = CheckReplyMatchesPending();
    }
  }

  if (replyToPending) {
    switch (res) {
      case RES_READ_VARIABLE:
        cOffset = GetContentOffset(*pPendingObj_);

        pPendingObj_->DeserializeContent(pDeserializer_,
                                         &pRxBuffer_->GetRaw()[cOffset]);
        RequestResult_ = SSBL_SUCCESS;
        signalReqComplete = true;
        break;
        //------------------------------------------------------------------
      case RES_WRITE_VARIABLE:
        RequestResult_ = SSBL_SUCCESS;
        signalReqComplete = true;
        break;
        //------------------------------------------------------------------
      case RES_METHOD_RESULT:
        cOffset = GetContentOffset(*pPendingObj_);
        pPendingObj_->DeserializeContent(pDeserializer_,
                                         &pRxBuffer_->GetRaw()[cOffset]);
        RequestResult_ = SSBL_SUCCESS;
        signalReqComplete = true;
        break;
        //------------------------------------------------------------------
      case RES_REGISTER_EVENT: {
        cOffset = GetContentOffset(*pPendingObj_);
        uint8_t ret;
        uint32_t offset = 0;
        pDeserializer_->Deserialize(&pRxBuffer_->GetRaw()[cOffset], ret,
                                    &offset);
        RequestResult_ = SSBL_ERR_SENSOR_REQUEST_FAILED;
        if (((PendingRequest_ == REQ_UNREGISTER_EVENT) && (ret == 0)) ||
            ((PendingRequest_ == REQ_REGISTER_EVENT) && (ret == 1))) {
          RequestResult_ = SSBL_SUCCESS;
        }

        signalReqComplete = true;
      } break;

        //------------------------------------------------------------------
      case RES_ASYC_METHOD:
      case RES_EVENT_NOTIFICATION:
      case RES_ERROR_NOTIFICATION:
        SSBL_ASSERT_IF_NULL(0);
        break;
      default:
        break;
    }
  } else {
    switch (res) {
        //------------------------------------------------------------------
      case RES_READ_VARIABLE:
      case RES_WRITE_VARIABLE:
      case RES_METHOD_RESULT:
      case RES_REGISTER_EVENT:
        SSBL_ASSERT_IF_NULL(0);
        break;
        //------------------------------------------------------------------
      case RES_ASYC_METHOD:
        break;
        //------------------------------------------------------------------
      case RES_EVENT_NOTIFICATION:
        eventToken = GetTelegramSignature(pRxBuffer_->GetRaw());
        EventMapLock.Lock();
        pExists = EventMap_[eventToken];
        EventMapLock.Unlock();
        if (nullptr != pExists) {
          if (nullptr != pExists->pQueue_) {
            std::shared_ptr<ComObj> pC = pExists->pQueue_->GetFree();
            if (NULL != pC) {
              cOffset = GetContentOffset(*pC);
              pC->DeserializeContent(pDeserializer_,
                                     &pRxBuffer_->GetRaw()[cOffset]);
              pExists->pQueue_->InsertInQueue(pC);
            }
          } else {
            cOffset = GetContentOffset(*pExists->CallbackData_.pComObj);

            pExists->CallbackData_.pComObj->DeserializeContent(
                pDeserializer_, &pRxBuffer_->GetRaw()[cOffset]);

            SsblEventContainer *pE = new SsblEventContainer;
            if (NULL != pE) {
              pE->CallbackParameter = pExists->CallbackData_.CallbackParameter;
              pE->pComObj = pExists->CallbackData_.pComObj->Clone();
              pExists->Callback_(reinterpret_cast<uint64_t *>(pE));
            } else {
              SSBL_LOG_WARNING(
                  "Can't allocate memory to forward variable event");
            }
          }
        }

        break;
        //------------------------------------------------------------------
      case RES_ERROR_NOTIFICATION:
        uint16_t errorCode;
        contentStartOffset += COLA_AB_REQ_LENGTH + GetProtocolErrorOffset();
        pDeserializer_->Deserialize(pRxBuffer_->GetRaw(), errorCode,
                                    &contentStartOffset);
        RequestResult_ = static_cast<SensorResult>(errorCode);
        SSBL_LOG_WARNING("Sensor request failed with error code: 0x%04x",
                         errorCode);

        signalReqComplete = true;
        break;
        //------------------------------------------------------------------
      default:
        break;
        //------------------------------------------------------------------
    }
  }

  if (signalReqComplete) RequestComplete_.SignalEvent();
}

//=============================================================================
//=============================================================================
void CoLaProtocol::SocketEvent(int32_t value) {
  switch (value) {
    case COLA_RECEIVE_EVENT:
      Receive();
      break;
  }
}

//=============================================================================
//=============================================================================
bool CoLaProtocol::CheckReplyMatchesPending(void) {
  bool ret = false;

  if (AddressingMode_ == BY_NAME) {
    std::string name = DeserializeReqComName();
    if (name.compare(pPendingObj_->GetComName())) {
      return true;
    }
  } else {
    uint16_t idx = DeserializeReqComIndex();
    if (idx == pPendingObj_->GetComIndex()) {
      return true;
    }
  }
  return ret;
}