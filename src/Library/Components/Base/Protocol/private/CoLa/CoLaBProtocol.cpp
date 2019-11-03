/**
 * \file
 * \brief CoLaB implementation
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

#include "Base/Protocol/include/CoLa/CoLaBProtocol.h"
#include <iostream>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/Endianess.h"
#include "Base/Core/Sensor/include/Common/SensorInterface.h"
#include "Base/Protocol/include/CoLa/CoLaBDeserializer.h"
#include "Base/Protocol/include/CoLa/CoLaBSerializer.h"
#include "Base/Protocol/include/Common/Checksum.h"

using namespace ssbl;

namespace colab {
const uint8_t StartFrame[] = {0x02, 0x02, 0x02, 0x02};
const uint8_t LengthField[] = {0x00, 0x00, 0x00, 0x00};
const uint8_t Preamble[] = {0x73};
}  // namespace colab

#define COLA_B_START_FRAME_LENGTH sizeof(colab::StartFrame)
#define COLA_B_LENGTH_FILED_LENGTH sizeof(colab::LengthField)
#define COLA_B_PREAMBLE_LENGTH sizeof(colab::Preamble)
#define COLA_B_COMMAND_START                               \
  COLA_B_START_FRAME_LENGTH + COLA_B_LENGTH_FILED_LENGTH + \
      COLA_B_PREAMBLE_LENGTH

#define COLA_B_INDENTIFIER_START COLA_B_COMMAND_START + COLA_AB_REQ_LENGTH

#define COLA_B_SPACE 0x20

//=============================================================================
//=============================================================================
CoLaBProtocol::CoLaBProtocol(AddressingMode AddrMode, size_t txBufSize,
                             size_t rxBufSize)
    : CoLaProtocol(COLA_B, AddrMode, txBufSize, rxBufSize) {}

//=============================================================================
//=============================================================================
SensorResult CoLaBProtocol::Init(SensorInterface &rInterface) {
  SensorResult ret = SSBL_SUCCESS;
  using namespace std::placeholders;
  ret = InitInternal(rInterface, sizeof(colab::Preamble), 0, colab::Preamble,
                     nullptr);

  rInterface.RegisterToCallbackEvent(
      "OnReceive",
      std::bind(&CoLaProtocol::SocketEvent, this, COLA_RECEIVE_EVENT));

  return ret;
}

//=============================================================================
//=============================================================================
void CoLaBProtocol::AddLength(uint8_t *pDst, uint32_t length) {
  length = bswap_32(length);

  memcpy(pDst, &length, sizeof(uint32_t));
}

//=============================================================================
//=============================================================================
SensorResult CoLaBProtocol::SerializeRequest(ProtocolRequest req,
                                             ComObj &rComObj) {
  SensorResult ret = SSBL_SUCCESS;
  uint32_t offset = 0;
  const uint32_t chkOffset =
      COLA_B_START_FRAME_LENGTH + COLA_B_LENGTH_FILED_LENGTH;
  uint8_t chk;

  offset = AddPayload(offset, colab::StartFrame, sizeof(colab::StartFrame));
  offset = AddPayload(offset, colab::LengthField, sizeof(colab::LengthField));
  if (AddressingMode_ == BY_INDEX) {
    offset = AddRequest(offset, req, rComObj.GetComIndex());
  } else {
    offset = AddRequest(offset, req, rComObj.GetComName());
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

  chk = ComputeXOR(&(pTxBuffer_->GetRaw())[chkOffset], offset - chkOffset);
  offset = AddPayload(offset, &chk, sizeof(uint8_t));

  AddLength(
      &(pTxBuffer_->GetRaw())[sizeof(colab::StartFrame)],
      offset - sizeof(colab::StartFrame) - sizeof(colab::LengthField) - 1);

  pInterface_->Send(pTxBuffer_->GetRaw(), offset);

  return ret;
}

//=============================================================================
//=============================================================================
void CoLaBProtocol::Receive(void) {
  const uint32_t chkOffset =
      COLA_B_START_FRAME_LENGTH + COLA_B_LENGTH_FILED_LENGTH;
  static uint8_t startFrame[4] = {0};
  static uint8_t lengthField[4] = {0};
  static uint32_t rxCnt = 0;
  uint32_t btr;
  uint8_t *pTmp;

  static uint32_t PayloadLength = 0;

  while (0 != pInterface_->BytesPending()) {
    switch (RcvState_) {
      case RECEIVE_START_FRAME:

        if (0 !=
            memcmp(startFrame, colab::StartFrame, sizeof(colab::StartFrame))) {
          pTmp = &startFrame[rxCnt];
          rxCnt = (rxCnt + 1) % (uint32_t)sizeof(colab::StartFrame);
          pInterface_->Receive(&pTmp, 1);

        } else {
          memset(startFrame, 0x00, sizeof(startFrame));
          rxCnt = 0;
          RcvState_ = RECEIVE_LENGTH_FIELD;
        }
        break;
      case RECEIVE_LENGTH_FIELD:
        pTmp = &lengthField[rxCnt];

        btr = static_cast<uint32_t>(pInterface_->BytesPending());
        if (btr > (sizeof(lengthField) - rxCnt)) {
          btr = sizeof(lengthField) - rxCnt;
        }

        rxCnt += static_cast<uint32_t>(pInterface_->Receive(&pTmp, btr));

        if (rxCnt == sizeof(lengthField)) {
          pRxBuffer_->CopyToBuffer(0, colab::StartFrame,
                                   sizeof(colab::StartFrame));
          pRxBuffer_->CopyToBuffer(sizeof(colab::StartFrame), lengthField,
                                   sizeof(lengthField));

          memcpy(&PayloadLength, lengthField, sizeof(lengthField));
          PayloadLength = bswap_32(PayloadLength);
          rxCnt = sizeof(lengthField) + sizeof(startFrame);

          RcvState_ = RECEIVE_PAYLOAD;
        }

        break;
      case RECEIVE_PAYLOAD:
        pTmp = &(pRxBuffer_->GetRaw())[rxCnt];
        btr = static_cast<uint32_t>(pInterface_->BytesPending());
        if (btr >= PayloadLength + 1 + chkOffset - rxCnt) {
          btr = PayloadLength + 1 + chkOffset - rxCnt;
        }

        rxCnt += static_cast<uint32_t>(pInterface_->Receive(&pTmp, btr));

        if (rxCnt ==
            (PayloadLength + 1 + sizeof(lengthField) + sizeof(startFrame))) {
          rxCnt = 0;
          RcvState_ = RECEIVE_START_FRAME;
          uint8_t chk =
              ComputeXOR(&(pRxBuffer_->GetRaw())[chkOffset], PayloadLength + 1);
          if (0 == chk) {
            DispatchRxMessage(COLA_B_COMMAND_START);
          } else {
            SSBL_LOG_ERROR("CoLaB Checksum error");
          }
        }

        break;

      default:
        break;
    }
  }
};

//=============================================================================
//=============================================================================
uint16_t CoLaBProtocol::DeserializeReqComIndex(void) {
  uint16_t idx = 0;
  uint8_t *pTmp = &(pRxBuffer_->GetRaw())[0];

  memcpy(&idx,
         &pTmp[COLA_B_START_FRAME_LENGTH + COLA_B_LENGTH_FILED_LENGTH +
               COLA_B_PREAMBLE_LENGTH + COLA_AB_REQ_LENGTH],
         2);

  return bswap_16(idx);
}

//=============================================================================
//=============================================================================
std::string CoLaBProtocol::DeserializeReqComName(void) {
  std::string ret;
  uint32_t i = 0;
  uint8_t *pTmp =
      &(pRxBuffer_
            ->GetRaw())[COLA_B_START_FRAME_LENGTH + COLA_B_LENGTH_FILED_LENGTH +
                        COLA_B_PREAMBLE_LENGTH + COLA_AB_REQ_LENGTH + 2];

  while (0x20 != pTmp[i]) {
    ret.push_back(pTmp[i++]);
  }
  return ret;
}

//=============================================================================
//=============================================================================
uint16_t CoLaBProtocol::GetTelegramSignature(uint8_t *pTelegram) {
  uint16_t ret;
  size_t nBytes = COLA_B_INDENTIFIER_START;
  size_t nBytesr = COLA_B_INDENTIFIER_START;

  if (AddressingMode_ == BY_NAME) {
    while (pTelegram[nBytes + 1] != COLA_B_SPACE) {
      nBytes++;
    }
    nBytes = nBytes - nBytesr;

    ret = ComputeSignature(&pTelegram[COLA_B_INDENTIFIER_START + 1], nBytes);
  } else {
    nBytes = sizeof(uint16_t);
    ret = ComputeSignature(&pTelegram[COLA_B_INDENTIFIER_START], nBytes);
  }
  return ret;
}

//=============================================================================
//=============================================================================
uint32_t CoLaBProtocol::GetContentOffset(ComObj &rComObject) {
  uint32_t contentStart = COLA_B_INDENTIFIER_START;

  if (AddressingMode_ == BY_NAME) {
    contentStart += 2;
    contentStart += static_cast<uint32_t>(rComObject.GetComName().size());
  } else {
    contentStart += 2;
  }

  return contentStart;
}
