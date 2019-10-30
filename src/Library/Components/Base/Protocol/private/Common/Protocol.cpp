/**
 * \file
 * \brief Decleration of Protocol
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
#include "Base/Core/Driver/include/Socket.h"
#include "Base/Protocol/include/Common/Protocol.h"
#include "Base/Protocol/include/Common/TelegramBuffer.h"

using namespace ssbl;

//=============================================================================
//=============================================================================
Protocol::Protocol(ProtocolType ProtoType, size_t txBufSize, size_t rxBufSize)
    : ProtocolType_(ProtoType),
      pDeserializer_(nullptr),
      pSerializer_(nullptr),
      pInterface_(nullptr) {
  pTxBuffer_ = new TelegramBuffer(txBufSize);
  pRxBuffer_ = new TelegramBuffer(rxBufSize);

  SSBL_ASSERT_IF_NULL(pTxBuffer_);
  SSBL_ASSERT_IF_NULL(pRxBuffer_);
};
//=============================================================================
//=============================================================================
Protocol::~Protocol() {
  delete pTxBuffer_;
  delete pRxBuffer_;
}

//=============================================================================
//=============================================================================
SensorResult Protocol::Send(size_t payloadLength) {
  if (!pInterface_->IsOpen()) return SSBL_ERR_SOCKET_IS_CLOSED;

  if (pInterface_->Send(pTxBuffer_->GetRaw(), payloadLength))
    return SSBL_SUCCESS;

  return SSBL_ERR_SEND_FAILED;
}
