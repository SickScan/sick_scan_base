/**
 * \file
 * \brief CoLaA Serializer
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

#include "Base/Protocol/include/CoLa/CoLaASerializer.h"
#include <math.h>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include "Base/Core/Common/include/Endianess.h"

using namespace ssbl;

//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::Serialize(uint8_t *pDest, const uint8_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::Serialize(uint8_t *pDest, const uint16_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::Serialize(uint8_t *pDest, const uint32_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::Serialize(uint8_t *pDest, const uint64_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::Serialize(uint8_t *pDest, const int8_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::Serialize(uint8_t *pDest, const int16_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}
//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::Serialize(uint8_t *pDest, const int32_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::Serialize(uint8_t *pDest, const int64_t &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::Serialize(uint8_t *pDest, const float &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::Serialize(uint8_t *pDest, const double &rSrc,
                                        uint32_t *pOffset) {
  return SerializeBasicType(pDest, rSrc, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaASerializer::SerializeFlexString(uint8_t *pDest, uint8_t *pSrc,
                                                  uint16_t length,
                                                  uint16_t maxLength,
                                                  uint32_t *pOffset) {
  uint16_t bytesToSer;

  if ((pDest == nullptr) || (pSrc == nullptr) || (pOffset == nullptr)) {
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
SensorResult CoLaASerializer::SerializeFixString(uint8_t *pDest, uint8_t *pSrc,
                                                 uint16_t maxLength,
                                                 uint32_t *pOffset) {
  if ((pDest == nullptr) || (pSrc == nullptr) || (pOffset == nullptr)) {
    return SSBL_ERR_SERIALIZATION;
  }
  Serialize(pDest, maxLength, pOffset);

  std::memcpy(&pDest[sizeof(uint16_t)], pSrc, maxLength);

  *pOffset = *pOffset + maxLength;
  return SSBL_SUCCESS;
}

#ifdef _MSC_VER
#pragma warning(disable : 4127)
#endif

std::string str_toupper(std::string in) {
  std::string out;

  for (auto c : in) {
    switch (c) {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
        break;
      case 'a':
        c = 'A';
        break;
      case 'b':
        c = 'B';
        break;
      case 'c':
        c = 'C';
        break;
      case 'd':
        c = 'D';
        break;
      case 'e':
        c = 'E';
        break;
      case 'f':
        c = 'F';
        break;
      default:
        break;
    }
    out.push_back(c);
  }

  return out;
}
//=============================================================================
//=============================================================================
template <class T>
SensorResult CoLaASerializer::SerializeBasicType(uint8_t *pDest, const T &rSrc,
                                                 uint32_t *pOffset) {
  char space = 0x20;
  std::ostringstream helper;
  std::string value;

  if ((pDest == nullptr) || (pOffset == nullptr)) {
    return SSBL_ERR_SERIALIZATION;
  }

  if (sizeof(T) > 1) {
    helper << std::hex << rSrc;
  } else {
    helper << std::hex << static_cast<int>(rSrc);
  }

  value = helper.str();

  value = str_toupper(value);
  /*
  std::transform(value.begin(), value.end(), value.begin(),
                 [](unsigned char c) { return std::toupper(c); });
  */
  // ::toupper);

  value.push_back(space);
  std::memcpy(&pDest[*pOffset], value.c_str(), value.size());

  *pOffset = *pOffset + static_cast<uint32_t>(value.size());
  return SSBL_SUCCESS;
}
