/**
 * \file
 * \brief Implementation of TelegramBuffer
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

#include "Base/Protocol/include/Common/TelegramBuffer.h"
#include <cstring>

//=============================================================================
//=============================================================================
TelegramBuffer::TelegramBuffer(size_t bufferSize) : BufferSize_(bufferSize) {
  pRawBuffer = static_cast<uint8_t *>(new uint8_t[BufferSize_]);
}

//=============================================================================
//=============================================================================
TelegramBuffer::~TelegramBuffer() { delete[] pRawBuffer; }

//=============================================================================
//=============================================================================
void TelegramBuffer::CopyToBuffer(uint32_t offset, const void *pData,
                                  size_t nBytes) {
  std::memcpy(&pRawBuffer[offset], pData, nBytes);
}
