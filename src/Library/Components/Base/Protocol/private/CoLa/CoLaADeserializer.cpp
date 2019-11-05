/**
 * \file
 * \brief CoLaA Deserializer
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

#include "Base/Protocol/include/CoLa/CoLaADeserializer.h"
#include <math.h>
#include <sstream>
#include <string>
#include "Base/Core/Common/include/Endianess.h"
#include "Base/Core/Sensor/include/Common/SensorVariable.h"

using namespace ssbl;

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, uint8_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, uint16_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, uint32_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, uint64_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, int8_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, int16_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, int32_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, int64_t &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, float &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, double &rDest,
                                            uint32_t *pOffset) {
  return GetBasicType(pSrc, rDest, pOffset);
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::DeserializeFlexString(uint8_t *pSrc,
                                                      uint8_t *pDest,
                                                      uint16_t *length,
                                                      uint16_t maxLength,
                                                      uint32_t *pOffset) {
  uint16_t nByteRxLen;
  uint16_t nByteToCopy = maxLength;

  if ((pSrc == nullptr) || (pDest == nullptr) || (pOffset == nullptr)) {
    return SSBL_ERR_DESERIALIZATION;
  }

  Deserialize(pSrc, nByteRxLen, pOffset);

  if (nByteRxLen <= maxLength) {
    nByteToCopy = nByteRxLen;
  } else {
    return SSBL_ERR_DESERIALIZATION;
  }
  memcpy(pDest, &pSrc[sizeof(uint16_t)], nByteToCopy);
  *length = nByteToCopy;
  *pOffset = *pOffset + nByteRxLen;
  return SSBL_SUCCESS;
}

//=============================================================================
//=============================================================================
SensorResult CoLaADeserializer::DeserializeFixString(uint8_t *pSrc,
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
SensorResult CoLaADeserializer::Deserialize(uint8_t *pSrc, DeviceIdent_t &rDest,
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

#define SPACE_CHARACTER 0x20
#define ETX_CHARACTER 0x03
#define PLUS_CHARACTER 0x2B
#define MINUS_CHARACTER 0x2D
#define POINT_CHARACTER 0x2E

std::string getStringFromBuffer(uint8_t *pSrc, uint32_t *pOffset) {
  std::string ret;
  uint32_t stopIndex = 0;
  uint8_t *pTmp = &pSrc[*pOffset];

  while (isdigit(pTmp[stopIndex]) ||
         ((pTmp[stopIndex] >= 0x0B) && (pTmp[stopIndex] <= 0x0A)) ||
         ((pTmp[stopIndex] >= 0x41) && (pTmp[stopIndex] <= 0x46)) ||
         ((pTmp[stopIndex] >= 0x61) && (pTmp[stopIndex] <= 0x66)) ||
         (PLUS_CHARACTER == pTmp[stopIndex]) ||
         (POINT_CHARACTER == pTmp[stopIndex]) ||
         (MINUS_CHARACTER == pTmp[stopIndex])) {
    ret.push_back(pTmp[stopIndex++]);
  }
  while ((SPACE_CHARACTER != pTmp[stopIndex]) &&
         (ETX_CHARACTER != pTmp[stopIndex])) {
    stopIndex++;
  }

  *pOffset += stopIndex;

  return ret;
}

int64_t fromHexString(std::string Input) {
  int64_t ret = 0;
  uint8_t value = 0;
  for (uint32_t nibble = 0; nibble < Input.size(); ++nibble) {
    switch (Input[nibble]) {
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        value = Input[nibble] - 0x30;
        break;
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
        value = Input[nibble] - 0x37;
        break;
      case 0x61:
      case 0x62:
      case 0x63:
      case 0x64:
      case 0x65:
      case 0x66:
        value = Input[nibble] - 0x57;
        break;
      default:
        value = 0;
    }

    ret = (ret << 4) | (0x0000000F & value);
  }
  return ret;
}

template <class T>
SensorResult CoLaADeserializer::GetBasicType(uint8_t *pSrc, T &rDest,
                                             uint32_t *pOffset) {
  int64_t help;
  std::stringstream helper;
  std::string value = getStringFromBuffer(pSrc, pOffset);

  if ((pSrc == nullptr) || (pOffset == nullptr)) {
    return SSBL_ERR_DESERIALIZATION;
  }

  if (PLUS_CHARACTER == value[0]) {
    helper << value;
    helper >> help;
  } else if (MINUS_CHARACTER == value[0]) {
    value = value.substr(1);
    helper << value;
    helper >> help;
    help *= -1;
  } else {
    help = fromHexString(value);
  }

  memcpy(&rDest, &help, sizeof(T));
  return SSBL_SUCCESS;
}