/**
 * \file
 * \brief Declaration of Deserializer Base Class
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

//===============================================================================
// \class Deserializer
// \brief Base class for protocol Deserializer
//
/**
 * @class Deserializer
 * @brief Base class for protocol Deserializer
 *
 */
class Deserializer {
 public:
  /**
   * @brief Destroy the Deserializer object
   *
   */
  virtual ~Deserializer(){};
  /**
   * @brief Deserialize an uint8_t
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, uint8_t& rDest,
                                   uint32_t* pOffset) = 0;
  /**
   * @brief Deserialize an uint16_t
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, uint16_t& rDest,
                                   uint32_t* pOffset) = 0;
  /**
   * @brief Deserialize an uint32_t
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, uint32_t& rDest,
                                   uint32_t* pOffset) = 0;
  /**
   * @brief Deserialize an uint64_t
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, uint64_t& rDest,
                                   uint32_t* pOffset) = 0;

  /**
   * @brief Deserialize an int8_t
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, int8_t& rDest,
                                   uint32_t* pOffset) = 0;
  /**
   * @brief Deserialize an int16_t
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, int16_t& rDest,
                                   uint32_t* pOffset) = 0;
  /**
   * @brief Deserialize an int32_t
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, int32_t& rDest,
                                   uint32_t* pOffset) = 0;
  /**
   * @brief Deserialize an int64_t
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, int64_t& rDest,
                                   uint32_t* pOffset) = 0;

  /**
   * @brief Deserialize a float
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, float& rDest,
                                   uint32_t* pOffset) = 0;
  /**
   * @brief Deserialize a double
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, double& rDest,
                                   uint32_t* pOffset) = 0;

  /**
   * @brief Deserialize an DeviceIdent_t structure
   *
   * @param pSrc Pointer to the source array
   * @param rDest the destination
   * @param pOffset Pointer to the offset within pSrc which shall be
   * deserialized. Offset will be increased by the size of rDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  virtual SensorResult Deserialize(uint8_t* pSrc, DeviceIdent_t& rDest,
                                   uint32_t* pOffset) = 0;

  /**
   * @brief Get the Protocol Type object
   *
   * @return ProtocolType
   */
  virtual ProtocolType GetProtocolType() = 0;
};
}  // namespace ssbl
