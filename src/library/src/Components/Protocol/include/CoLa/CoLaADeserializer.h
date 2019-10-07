/**
 * \file
 * \brief Declaration CoLaA Deserializer
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

#include "Protocol/include/Common/Deserializer.h"
#include "Types/include/SickSensorReturnCodes.h"

namespace ssbl {

/**
 * @class CoLaADeserializer
 * @brief CoLaA Deserializer, derived from Deserializer
 *
 */

class CoLaADeserializer : public Deserializer {
 public:
  /**
   * @brief Construct a new CoLaADeserializer object
   *
   */
  CoLaADeserializer(void){};
  ~CoLaADeserializer(void){};

  SensorResult Deserialize(uint8_t* pSrc, uint8_t& rDest, uint32_t* pOffset);
  SensorResult Deserialize(uint8_t* pSrc, uint16_t& rDest, uint32_t* pOffset);
  SensorResult Deserialize(uint8_t* pSrc, uint32_t& rDest, uint32_t* pOffset);
  SensorResult Deserialize(uint8_t* pSrc, uint64_t& rDest, uint32_t* pOffset);
  SensorResult Deserialize(uint8_t* pSrc, int8_t& rDest, uint32_t* pOffset);
  SensorResult Deserialize(uint8_t* pSrc, int16_t& rDest, uint32_t* pOffset);
  SensorResult Deserialize(uint8_t* pSrc, int32_t& rDest, uint32_t* pOffset);
  SensorResult Deserialize(uint8_t* pSrc, int64_t& rDest, uint32_t* pOffset);
  SensorResult Deserialize(uint8_t* pSrc, float& rDest, uint32_t* pOffset);
  SensorResult Deserialize(uint8_t* pSrc, double& rDest, uint32_t* pOffset);

  SensorResult DeserializeFlexString(uint8_t* pSrc, uint8_t* pDest,
                                     uint16_t* length, uint16_t maxLength,
                                     uint32_t* pOffset);

  SensorResult DeserializeFixString(uint8_t* pSrc, uint8_t* pDest,
                                    uint16_t maxLength, uint32_t* pOffset);

  SensorResult Deserialize(uint8_t* pSrc, DeviceIdent_t& rDest,
                           uint32_t* pOffset);

  ProtocolType GetProtocolType() { return COLA_A; };

 private:
  CoLaADeserializer(const CoLaADeserializer&);
  CoLaADeserializer& operator=(const CoLaADeserializer&);

  /**
   * @brief Deserialize a Basic Type
   *
   * @tparam T type
   * @param pSrc Pointer to the source array
   * @param rDest Reference to the destination object
   * @param pOffset Offset within pSrc
   * @return SensorResult SSBL_SUCCES on success
   */
  template <class T>
  SensorResult GetBasicType(uint8_t* pSrc, T& rDest, uint32_t* pOffset);
};

}  // namespace ssbl
