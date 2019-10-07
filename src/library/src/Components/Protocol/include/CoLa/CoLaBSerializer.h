/**
 * \file
 * \brief Declaration CoLaB Serializer
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

#include "Protocol/include/Common/Serializer.h"
#include "Types/include/SickSensorReturnCodes.h"

namespace ssbl {

/**
 * @class CoLaBSerializer
 * @brief CoLaB Serializer
 *
 */
class CoLaBSerializer : public Serializer {
 public:
  /**
   * @brief Construct a new CoLaBSerializer object
   *
   */
  CoLaBSerializer(void){};

  /**
   * @brief Destroy the CoLaBSerializer object
   *
   */
  ~CoLaBSerializer(void){};

  SensorResult Serialize(uint8_t* pDest, const uint8_t& rSrc,
                         uint32_t* pOffset);
  SensorResult Serialize(uint8_t* pDest, const uint16_t& rSrc,
                         uint32_t* pOffset);
  SensorResult Serialize(uint8_t* pDest, const uint32_t& rSrc,
                         uint32_t* pOffset);
  SensorResult Serialize(uint8_t* pDest, const uint64_t& rSrc,
                         uint32_t* pOffset);

  SensorResult Serialize(uint8_t* pDest, const int8_t& rSrc, uint32_t* pOffset);
  SensorResult Serialize(uint8_t* pDest, const int16_t& rSrc,
                         uint32_t* pOffset);
  SensorResult Serialize(uint8_t* pDest, const int32_t& rSrc,
                         uint32_t* pOffset);
  SensorResult Serialize(uint8_t* pDest, const int64_t& rSrc,
                         uint32_t* pOffset);

  SensorResult Serialize(uint8_t* pDest, const float& rSrc, uint32_t* pOffset);
  SensorResult Serialize(uint8_t* pDest, const double& rSrc, uint32_t* pOffset);

  /**
   * @brief Serialize a FlexString
   *
   * @param pDest Pointer to the destination array
   * @param pSrc Pointer to the source array
   * @param length Length of the FlexString (variable)
   * @param maxLength Max. Length of the FlexString (fix)
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  SensorResult SerializeFlexString(uint8_t* pDest, uint8_t* pSrc,
                                   uint16_t length, uint16_t maxLength,
                                   uint32_t* pOffset);

  /**
   * @brief Serialize a FixString
   *
   * @param pDest Pointer to the destination array
   * @param pSrc Pointer to the source array
   * @param maxLength Max. Length of the FixString
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  SensorResult SerializeFixString(uint8_t* pDest, uint8_t* pSrc,
                                  uint16_t maxLength, uint32_t* pOffset);

  /**
   * @brief Get the Protocol Type
   *
   * @return ProtocolType
   */
  ProtocolType GetProtocolType() { return COLA_B; };

 protected:
  CoLaBSerializer(const CoLaBSerializer&);
  CoLaBSerializer& operator=(const CoLaBSerializer&);

  /**
   * @brief Serialize a basic type
   *
   * @tparam T type
   * @param pDest Pointer to the destination array
   * @param rSrc reference to the source
   * @param pOffset Pointer to the offset within pDest
   * @return SensorResult SSBL_SUCCESS on success
   */
  template <class T>
  SensorResult SerializeBasicType(uint8_t* pDest, const T& rSrc,
                                  uint32_t* pOffset);
};

}  // namespace ssbl
