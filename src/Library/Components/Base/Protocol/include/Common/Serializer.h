/**
 * \file
 * \brief Declaration of Serializer Base Class
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
#include "Types/include/BasicTypes.h"
#include "Types/include/SickSensorReturnCodes.h"

namespace ssbl {

/**
 * @class Serializer
 * @brief Base class for protocol serializer
 *
 */
class Serializer {
 public:
  /**
   * @brief Destroy the Serializer object
   *
   */
  virtual ~Serializer(){};

  /**
   * @brief Serialize an uint8_t
   *
   * @param pDest Pointer to the destination array
   * @param rSrc the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Serialize(uint8_t* pDest, const uint8_t& rSrc,
                                 uint32_t* pOffset) = 0;

  /**
   * @brief Serialize an uint16_t
   *
   * @param pDest Pointer to the destination array
   * @param rSrc the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Serialize(uint8_t* pDest, const uint16_t& rSrc,
                                 uint32_t* pOffset) = 0;
  /**
   * @brief Serialize an uint32_t
   *
   * @param pDest Pointer to the destination array
   * @param rSrc the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Serialize(uint8_t* pDest, const uint32_t& rSrc,
                                 uint32_t* pOffset) = 0;
  /**
   * @brief Serialize an uint64_t
   *
   * @param pDest Pointer to the destination array
   * @param rSrc the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Serialize(uint8_t* pDest, const uint64_t& rSrc,
                                 uint32_t* pOffset) = 0;

  /**
   * @brief Serialize an int8_t
   *
   * @param pDest Pointer to the destination array
   * @param rSrc the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Serialize(uint8_t* pDest, const int8_t& rSrc,
                                 uint32_t* pOffset) = 0;
  /**
   * @brief Serialize an int16_t
   *
   * @param pDest Pointer to the destination array
   * @param rSrc the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Serialize(uint8_t* pDest, const int16_t& rSrc,
                                 uint32_t* pOffset) = 0;
  /**
   * @brief Serialize an int32_t
   *
   * @param pDest Pointer to the destination array
   * @param rSrc the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Serialize(uint8_t* pDest, const int32_t& rSrc,
                                 uint32_t* pOffset) = 0;
  /**
   * @brief Serialize an int64_t
   *
   * @param pDest Pointer to the destination array
   * @param rSrc the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Serialize(uint8_t* pDest, const int64_t& rSrc,
                                 uint32_t* pOffset) = 0;

  /**
   * @brief Serialize a float
   *
   * @param pDest Pointer to the destination array
   * @param rSrc the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Serialize(uint8_t* pDest, const float& rSrc,
                                 uint32_t* pOffset) = 0;
  /**
   * @brief Serialize a double
   *
   * @param pDest Pointer to the destination array
   * @param rSrc the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Serialize(uint8_t* pDest, const double& rSrc,
                                 uint32_t* pOffset) = 0;

  /**
   * @brief Get the Protocol Type object
   *
   * @return ProtocolType
   */
  virtual ProtocolType GetProtocolType() = 0;
};
}  // namespace ssbl
