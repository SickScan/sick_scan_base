/**
 * \file
 * \brief CoLaB Deserializer
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

#include "Base/Protocol/include/CoLa/CoLaBDeserializer.h"
#include <math.h>
#include <string>
#include "Base/Core/Common/include/Endianess.h"
#include "Base/Core/Sensor/include/Common/SensorVariable.h"

using namespace ssbl;

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, uint8_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, uint16_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, uint32_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, uint64_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, int8_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, int16_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, int32_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, int64_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, float &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, double &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::DeserializeFlexString(uint8_t *pSrc,
                                                      uint8_t *pDest,
                                                      uint16_t *length,
                                                      uint16_t maxLength,
                                                      uint32_t *pOffset) {
  uint16_t nByteRxLen;
  uint16_t nByteToCopy = maxLength;

  if ((pSrc == nullptr) || (pDest == nullptr) || (length == nullptr) ||
      (pOffset == nullptr)) {
    return SSBL_ERR_DESERIALIZATION;
  }

  Deserialize(pSrc, nByteRxLen, pOffset);

  if (nByteRxLen < maxLength) {
    nByteToCopy = nByteRxLen;
  }
  memcpy(pDest, &pSrc[sizeof(uint16_t)], nByteToCopy);
  *length = nByteToCopy;
  *pOffset = *pOffset + nByteRxLen;
  return SSBL_SUCCESS;
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::DeserializeFixString(uint8_t *pSrc,
                                                     uint8_t *pDest,
                                                     uint16_t maxLength,
                                                     uint32_t *pOffset) {
  if ((pSrc == nullptr) || (pDest == nullptr) || (pOffset == nullptr)) {
    return SSBL_ERR_DESERIALIZATION;
  }
  memcpy(pDest, pSrc, maxLength);
  *pOffset = *pOffset + maxLength;
  return SSBL_SUCCESS;
}

//=============================================================================
//=============================================================================
SensorResult CoLaBDeserializer::Deserialize(uint8_t *pSrc, DeviceIdent_t &rDest,
                                            uint32_t *pOffset) {
  if ((pSrc == nullptr) || (pOffset == nullptr)) {
    return SSBL_ERR_DESERIALIZATION;
  }

  DeserializeFlexString(pSrc, rDest.Name.Text, &rDest.Name.length,
                        sizeof(rDest.Name.Text), pOffset);
  DeserializeFlexString(pSrc, rDest.Revision.Text, &rDest.Revision.length,
                        sizeof(rDest.Revision.Text), pOffset);
  return SSBL_SUCCESS;
}

//=============================================================================
//=============================================================================
template <class T>
SensorResult CoLaBDeserializer::GetBasicType(uint8_t *pSrc, T &rDest,
                                             uint32_t *pOffset) {
  uint8_t buffer[8];
  size_t nSize = sizeof(T);

  if ((pSrc == nullptr) || (pOffset == nullptr)) {
    return SSBL_ERR_DESERIALIZATION;
  }

  memcpy(buffer, &pSrc[*pOffset], nSize);
  *pOffset = *pOffset + static_cast<uint32_t>(nSize);

  switch (nSize) {
    case 2: {
      uint16_t *pX = reinterpret_cast<uint16_t *>(&buffer[0]);
      *pX = bswap_16(*pX);
      break;
    }
    case 4: {
      uint32_t *pX = reinterpret_cast<uint32_t *>(&buffer[0]);
      *pX = bswap_32(*pX);
      break;
    }
    case 8: {
      uint64_t *pX = reinterpret_cast<uint64_t *>(&buffer[0]);
      *pX = bswap_64(*pX);
      break;
    }
  }
  memcpy(reinterpret_cast<void *>(&rDest), buffer, nSize);
  return SSBL_SUCCESS;
}