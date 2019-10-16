/**
 * \file
 * \brief Decleration of TelegramBuffer
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

/**
 * @class TelegramBuffer
 * @brief Used as Rx / Tx Buffer
 *
 */
class TelegramBuffer {
 public:
  /**
   * @brief Construct a new Telegram Buffer object
   *
   * @param bufferSize
   */
  TelegramBuffer(size_t bufferSize);

  /**
   * @brief Destroy the Telegram Buffer object
   *
   */
  ~TelegramBuffer();

  /**
   * @brief Get the size of the buffer
   *
   * @return size_t
   */
  size_t GetSize(void) { return BufferSize_; };

  /**
   * @brief Get a pointer to the first element
   *
   * @return uint8_t*
   */
  uint8_t* GetRaw(void) { return pRawBuffer; };

  /**
   * @brief Copy bytes to buffer
   *
   * @param offset within the buffer
   * @param pData points to source data
   * @param nBytes to copy
   */
  void CopyToBuffer(uint32_t offset, const void* pData, size_t nBytes);

 private:
  size_t BufferSize_;
  uint8_t* pRawBuffer;
};
