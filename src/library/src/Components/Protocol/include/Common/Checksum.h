/**
 * \file
 * \brief Signature functions
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
#include <string>

namespace ssbl {

/**
 * @brief Compute a signature (CRC16)
 *
 * @param pSrc pointer to sourc
 * @param nBytes  number of bytes to take into accout
 * @return uint16_t signature
 */
uint16_t ComputeSignature(uint8_t* pSrc, size_t nBytes);

/**
 * @brief Compute a signature (CRC16)
 *
 * @param string over which the signature is computed
 * @return uint16_t signature
 */
uint16_t ComputeSignature(const std::string& string);

/**
 * @brief Compute a signature (CRC16)
 *
 * @param index value over which the signature is computed
 * @return uint16_tsignature
 */
uint16_t ComputeSignature(uint16_t index);

/**
 * @brief Compute XOR over input
 *
 * @param pData input array
 * @param nBytes number of bytes to take into accout
 * @return uint8_t XOR
 */
uint8_t ComputeXOR(uint8_t* pData, uint32_t nBytes);
}  // namespace ssbl
