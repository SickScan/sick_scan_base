// Copyright 2019, SICK AG, Waldkirch
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#include <stdint.h>
#include "Core/Sensor/include/Common/SickSensorFunction.h"
#include "Core/Sensor/include/Common/SickSensorVariable.h"

namespace ssbl {
#pragma pack(push, 1)
typedef struct {
  uint8_t NewMode;
  uint32_t Password;
} SetAccessModeArgs_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  uint8_t success;
} SetAccessModeReturn_t;
#pragma pack(pop)

class MethSetAccessMode : public SickSensorFunction {
 public:
  MethSetAccessMode();

  ~MethSetAccessMode(){};
  uint32_t SerializeContent(Serializer* pSer, uint8_t* pDest,
                            uint32_t* pOffset);
  uint32_t DeserializeContent(Deserializer* pDes, uint8_t* pSrc);

  ComObj* Clone() { return nullptr; }

  SetAccessModeArgs_t Args;
  SetAccessModeReturn_t ReturnValue;
};

class VarDeviceIdent : public SickSensorVariable {
 public:
  VarDeviceIdent();

  ~VarDeviceIdent(){};
  uint32_t SerializeContent(Serializer* pSer, uint8_t* pDest,
                            uint32_t* pOffset);
  uint32_t DeserializeContent(Deserializer* pDes, uint8_t* pSrc);

  size_t Size(void) { return sizeof(Value_); };

  SensorResult GetRaw(uint8_t* pDest) {
    if (nullptr == pDest) return SSBL_ERR_INVALID_ARGUMENT;
    memcpy(pDest, &this->Value_, sizeof(Value_));
    return SSBL_SUCCESS;
  }

  ComObj* Clone() { return nullptr; }

  DeviceIdent_t Value_;

  SensorResult GetBasic(int8_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasic(int16_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasic(int32_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasic(int64_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasic(uint8_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasic(uint16_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasic(uint32_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasic(uint64_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasic(float& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasic(double& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  //--------------------------------------------------------
  SensorResult GetBasicElement(const std::string& elementName, int8_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasicElement(const std::string& elementName, int16_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasicElement(const std::string& elementName, int32_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasicElement(const std::string& elementName, int64_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasicElement(const std::string& elementName, uint8_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasicElement(const std::string& elementName,
                               uint16_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasicElement(const std::string& elementName,
                               uint32_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasicElement(const std::string& elementName,
                               uint64_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasicElement(const std::string& elementName, float& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult GetBasicElement(const std::string& elementName, double& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  //----------
  SensorResult SetBasic(int8_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasic(int16_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasic(int32_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasic(int64_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasic(uint8_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasic(uint16_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasic(uint32_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasic(uint64_t& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasic(float& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasic(double& value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasicFromString(std::string value) {
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  //-------------------------------------
  SensorResult SetBasicElement(const std::string& elementName, int8_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasicElement(const std::string& elementName, int16_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasicElement(const std::string& elementName, int32_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasicElement(const std::string& elementName, int64_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasicElement(const std::string& elementName, uint8_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasicElement(const std::string& elementName,
                               uint16_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasicElement(const std::string& elementName,
                               uint32_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasicElement(const std::string& elementName,
                               uint64_t& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasicElement(const std::string& elementName, float& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
  SensorResult SetBasicElement(const std::string& elementName, double& value) {
    SSBL_UNUSED(elementName);
    SSBL_UNUSED(value);
    return SSBL_SUCCESS;
  }
};

}  // namespace ssbl