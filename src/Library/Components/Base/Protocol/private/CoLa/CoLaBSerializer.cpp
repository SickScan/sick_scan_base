/**
 * \file
 * \brief CoLaB Serializer
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

#include "Base/Protocol/include/CoLa/CoLaBSerializer.h"
#include <math.h>
#include <cstring>
#include <string>
#include "Base/Core/Common/include/Endianess.h"

using namespace ssbl;

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::Serialize(uint8_t *pDest, const uint8_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::Serialize(uint8_t *pDest, const uint16_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::Serialize(uint8_t *pDest, const uint32_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::Serialize(uint8_t *pDest, const uint64_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::Serialize(uint8_t *pDest, const int8_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::Serialize(uint8_t *pDest, const int16_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}
//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::Serialize(uint8_t *pDest, const int32_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::Serialize(uint8_t *pDest, const int64_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::Serialize(uint8_t *pDest, const float &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::Serialize(uint8_t *pDest, const double &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::SerializeFlexString(uint8_t *pDest, uint8_t *pSrc,
                                                  uint16_t length,
                                                  uint16_t maxLength,
                                                  uint32_t *pOffset) {
  uint16_t bytesToSer;

  if ((pSrc == nullptr) || (pDest == nullptr) || (pOffset == nullptr)) {
    return SSBL_ERR_SERIALIZATION;
  }

  if (length > maxLength) {
    bytesToSer = maxLength;
  } else {
    bytesToSer = length;
  }

  Serialize(pDest, bytesToSer, pOffset);

  std::memcpy(&pDest[sizeof(uint16_t)], pSrc, bytesToSer);

  *pOffset = *pOffset + bytesToSer;
  return SSBL_SUCCESS;
}

//=============================================================================
//=============================================================================
SensorResult CoLaBSerializer::SerializeFixString(uint8_t *pDest, uint8_t *pSrc,
                                                 uint16_t maxLength,
                                                 uint32_t *pOffset) {
  if ((pSrc == nullptr) || (pDest == nullptr) || (pOffset == nullptr)) {
    return SSBL_ERR_SERIALIZATION;
  }

  Serialize(pDest, maxLength, pOffset);

  std::memcpy(&pDest[sizeof(uint16_t)], pSrc, maxLength);

  *pOffset = *pOffset + maxLength;
  return SSBL_SUCCESS;
}

//=============================================================================
//=============================================================================
template <class T>
SensorResult CoLaBSerializer::SerializeBasicType(uint8_t *pDest, const T &rSrc,
                                                 uint32_t *pOffset) {
  uint8_t buffer[8];
  size_t nSize = sizeof(T);
  uint8_t *pSrcChar = reinterpret_cast<uint8_t *>(&(const_cast<T &>(rSrc)));

  if ((pDest == nullptr) || (pOffset == nullptr)) {
    return SSBL_ERR_SERIALIZATION;
  }

  std::memcpy(buffer, pSrcChar, nSize);

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
  std::memcpy(&pDest[*pOffset], buffer, nSize);
  *pOffset = *pOffset + static_cast<uint32_t>(nSize);
  return SSBL_SUCCESS;
}
