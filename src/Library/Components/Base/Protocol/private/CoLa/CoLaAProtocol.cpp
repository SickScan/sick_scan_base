/**
 * \file
 * \brief CoLaA implementation (ColaA by index might not work)
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

#include "Base/Protocol/include/CoLa/CoLaAProtocol.h"
#include <iostream>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/Endianess.h"
#include "Base/Core/Sensor/include/Common/SensorInterface.h"
#include "Base/Protocol/include/CoLa/CoLaADeserializer.h"
#include "Base/Protocol/include/CoLa/CoLaASerializer.h"
#include "Base/Protocol/include/Common/Checksum.h"

using namespace ssbl;

namespace colaa {
const uint8_t Preamble[] = {0x02, 0x73};
const uint8_t Postamble[] = {0x03};
}  // namespace colaa
#define COLA_A_PREAMBLE_LENGTH sizeof(colaa::Preamble)
#define COLA_A_COMMAND_START COLA_A_PREAMBLE_LENGTH

#define COLA_A_INDENTIFIER_START COLA_A_COMMAND_START + COLA_AB_REQ_LENGTH

#define COLA_A_SPACE 0x20
#define RECEIVE_EVENT 0

//=============================================================================
//=============================================================================
CoLaAProtocol::CoLaAProtocol(AddressingMode AddrMode, size_t txBufSize,
                             size_t rxBufSize)
    : CoLaProtocol(COLA_A, AddrMode, txBufSize, rxBufSize) {}

//=============================================================================
//=============================================================================
SensorResult CoLaAProtocol::Init(SensorInterface &rInterface) {
  SensorResult ret = SSBL_SUCCESS;
  using namespace std::placeholders;
  ret = InitInternal(rInterface, sizeof(colaa::Preamble), 0, colaa::Preamble,
                     nullptr);

  rInterface.RegisterToCallbackEvent(
      "OnReceive",
      std::bind(&CoLaProtocol::SocketEvent, this, COLA_RECEIVE_EVENT));

  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaAProtocol::SerializeRequest(ProtocolRequest req,
                                             ComObj &rComObj) {
  SensorResult ret = SSBL_SUCCESS;
  uint32_t offset = 0;
  uint8_t chk = 0;

  if (AddressingMode_ == BY_INDEX) {
    offset = AddRequest(offset, req, rComObj.GetComIndex());
  } else {
    offset = AddRequest(offset, req, rComObj.GetComName());  // TODO
  }

  switch (req) {
    case REQ_READ_VARIABLE:
      break;
    case REQ_WRITE_VARIABLE:
    case REQ_INVOKE_METHOD:
      offset =
          rComObj.SerializeContent(pSerializer_, pTxBuffer_->GetRaw(), &offset);
      break;
    case REQ_REGISTER_EVENT:
      chk = 1;
      offset = AddPayload(offset, &chk, sizeof(uint8_t));
      break;
    case REQ_UNREGISTER_EVENT:
      chk = 0;
      offset = AddPayload(offset, &chk, sizeof(uint8_t));
      break;
    default:
      SSBL_ASSERT_IF_NULL(0);
      break;
  }

  offset = AddPayload(offset, colaa::Postamble, sizeof(colaa::Postamble));

  pInterface_->Send(pTxBuffer_->GetRaw(), offset);

  return ret;
}

//=============================================================================
//=============================================================================
void CoLaAProtocol::Receive(void) {
  static uint8_t preamble[2] = {0};
  static uint32_t rxCnt = 0;
  uint8_t *pTmp;

  while (0 != pInterface_->BytesPending()) {
    switch (RcvState_) {
      case RECEIVE_START_FRAME:

        if (0 != memcmp(preamble, colaa::Preamble, sizeof(colaa::Preamble))) {
          pTmp = &preamble[rxCnt];
          rxCnt = (rxCnt + 1) % static_cast<uint32_t>(sizeof(colaa::Preamble));
          pInterface_->Receive(&pTmp, 1);

        } else {
          pRxBuffer_->CopyToBuffer(0, colaa::Preamble, sizeof(colaa::Preamble));
          memset(preamble, 0x00, sizeof(preamble));
          rxCnt = 2;
          RcvState_ = RECEIVE_PAYLOAD;
        }
        break;
      case RECEIVE_PAYLOAD:
        pTmp = &(pRxBuffer_->GetRaw())[rxCnt];

        rxCnt += static_cast<uint32_t>(pInterface_->Receive(&pTmp, 1));
        if (*pTmp == colaa::Postamble[0]) {
          rxCnt = 0;
          RcvState_ = RECEIVE_START_FRAME;
          DispatchRxMessage(COLA_A_COMMAND_START);
        }
        break;

      default:
        break;
    }
  }
};

//=============================================================================
//=============================================================================
uint16_t CoLaAProtocol::DeserializeReqComIndex(void) {
  uint16_t idx = 0;
  uint8_t *pTmp = &(pRxBuffer_->GetRaw())[0];

  memcpy(&idx, &pTmp[COLA_A_PREAMBLE_LENGTH + COLA_AB_REQ_LENGTH],
         2);  // TODO!!!!

  return bswap_16(idx);
}

//=============================================================================
//=============================================================================
std::string CoLaAProtocol::DeserializeReqComName(void) {
  std::string ret;
  uint32_t i = 0;
  uint8_t *pTmp =
      &(pRxBuffer_->GetRaw())[COLA_A_PREAMBLE_LENGTH + COLA_AB_REQ_LENGTH + 2];

  while ((0x20 != pTmp[i]) && (0x03 != pTmp[i])) {
    ret.push_back(pTmp[i++]);
  }
  return ret;
}

//=============================================================================
//=============================================================================
uint16_t CoLaAProtocol::GetTelegramSignature(uint8_t *pTelegram) {
  uint16_t ret;
  size_t nBytes = COLA_A_INDENTIFIER_START;

  if (AddressingMode_ == BY_NAME) {
    std::string signature = DeserializeReqComName();

    ret = ComputeSignature(signature);
  } else {
    nBytes = sizeof(uint16_t);  // TODO
    ret = ComputeSignature(&pTelegram[COLA_A_INDENTIFIER_START], nBytes);
  }
  return ret;
}

//=============================================================================
//=============================================================================
uint32_t CoLaAProtocol::GetContentOffset(ComObj &rComObject) {
  uint32_t contentStart = COLA_A_INDENTIFIER_START;

  if (AddressingMode_ == BY_NAME) {
    contentStart += 2;
    contentStart += static_cast<uint32_t>(rComObject.GetComName().size());
  } else {
    contentStart += 4;  // TODO
  }

  return contentStart;
}
