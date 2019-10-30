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

#pragma once
#include <stdio.h>
#include <string.h>
#include <string>

#include <iostream>
#include "Protocol/include/Common/ComObject.h"
#include "Protocol/include/Common/Deserializer.h"
#include "Protocol/include/Common/Serializer.h"

#include "Core/Common/include/Assert.h"
#include "Core/OS/include/Mutex.h"
#include "Core/Sensor/include/Common/SickSensorInterface.h"

namespace ssbl {
class Protocol;

class SickSensorVariable : public ComObj {
 public:
  using ::ssbl::ComObj::GetComIndex;
  using ::ssbl::ComObj::GetComName;

  SickSensorVariable(const std::string& Name, const std::string& comName,
                     uint16_t idx, VariableDirection rwDir,
                     AccessLevel readAccessLvl, AccessLevel writeAccessLvl,
                     int32_t eventIdx)
      : ComObj(Name, comName, idx),
        rwDir_(rwDir),
        readAccessLvl_(readAccessLvl),
        writeAccessLvl_(writeAccessLvl),
        providesEvent_(false) {
    if (eventIdx > 0) {
      providesEvent_ = true;
      seIdx_ = 0;
    } else {
      seIdx_ = static_cast<uint16_t>(eventIdx);
    }
  };

  ~SickSensorVariable(){};

  AccessLevel GetReadAccessLevel(void) { return readAccessLvl_; };

  AccessLevel GetWriteAccessLevel(void) { return writeAccessLvl_; };

  bool IsReadOnly(void) {
    if (rwDir_ == READ_ONLY) {
      return true;
    }
    return false;
  };

  bool ProvidesEvent(void) { return providesEvent_; };

  uint16_t GetEventIndex(void) { return seIdx_; };

  virtual uint32_t SerializeContent(Serializer* pSer, uint8_t* pDest,
                                    uint32_t* pOffset) = 0;
  virtual uint32_t DeserializeContent(Deserializer* pDes, uint8_t* pSrc) = 0;

  virtual size_t Size(void) = 0;
  virtual SensorResult GetRaw(uint8_t* pDest) = 0;

 protected:
  VariableDirection rwDir_;
  AccessLevel readAccessLvl_;
  AccessLevel writeAccessLvl_;

  uint16_t seIdx_;
  bool providesEvent_;

 public:
  // no struct types

  virtual SensorResult GetBasic(int8_t& value) = 0;
  virtual SensorResult GetBasic(int16_t& value) = 0;
  virtual SensorResult GetBasic(int32_t& value) = 0;
  virtual SensorResult GetBasic(int64_t& value) = 0;
  virtual SensorResult GetBasic(uint8_t& value) = 0;
  virtual SensorResult GetBasic(uint16_t& value) = 0;
  virtual SensorResult GetBasic(uint32_t& value) = 0;
  virtual SensorResult GetBasic(uint64_t& value) = 0;
  virtual SensorResult GetBasic(float& value) = 0;
  virtual SensorResult GetBasic(double& value) = 0;

  // struct types
  virtual SensorResult GetBasicElement(const std::string& elementName,
                                       int8_t& value) = 0;
  virtual SensorResult GetBasicElement(const std::string& elementName,
                                       int16_t& value) = 0;
  virtual SensorResult GetBasicElement(const std::string& elementName,
                                       int32_t& value) = 0;
  virtual SensorResult GetBasicElement(const std::string& elementName,
                                       int64_t& value) = 0;
  virtual SensorResult GetBasicElement(const std::string& elementName,
                                       uint8_t& value) = 0;
  virtual SensorResult GetBasicElement(const std::string& elementName,
                                       uint16_t& value) = 0;
  virtual SensorResult GetBasicElement(const std::string& elementName,
                                       uint32_t& value) = 0;
  virtual SensorResult GetBasicElement(const std::string& elementName,
                                       uint64_t& value) = 0;
  virtual SensorResult GetBasicElement(const std::string& elementName,
                                       float& value) = 0;
  virtual SensorResult GetBasicElement(const std::string& elementName,
                                       double& value) = 0;

  template <typename T>
  T GetBasicType(const std::string& elementName) {
    T ret = 0;
    SensorResult res = GetBasicElement(elementName, ret);
    SSBL_ASSERT_IF_NULL(res == SSBL_SUCCESS);
    return ret;
  }

  // no struct types
  virtual SensorResult SetBasicFromString(std::string value) = 0;
  virtual SensorResult SetBasic(int8_t& value) = 0;
  virtual SensorResult SetBasic(int16_t& value) = 0;
  virtual SensorResult SetBasic(int32_t& value) = 0;
  virtual SensorResult SetBasic(int64_t& value) = 0;
  virtual SensorResult SetBasic(uint8_t& value) = 0;
  virtual SensorResult SetBasic(uint16_t& value) = 0;
  virtual SensorResult SetBasic(uint32_t& value) = 0;
  virtual SensorResult SetBasic(uint64_t& value) = 0;
  virtual SensorResult SetBasic(float& value) = 0;
  virtual SensorResult SetBasic(double& value) = 0;

  // struct types
  virtual SensorResult SetBasicElement(const std::string& elementName,
                                       int8_t& value) = 0;
  virtual SensorResult SetBasicElement(const std::string& elementName,
                                       int16_t& value) = 0;
  virtual SensorResult SetBasicElement(const std::string& elementName,
                                       int32_t& value) = 0;
  virtual SensorResult SetBasicElement(const std::string& elementName,
                                       int64_t& value) = 0;
  virtual SensorResult SetBasicElement(const std::string& elementName,
                                       uint8_t& value) = 0;
  virtual SensorResult SetBasicElement(const std::string& elementName,
                                       uint16_t& value) = 0;
  virtual SensorResult SetBasicElement(const std::string& elementName,
                                       uint32_t& value) = 0;
  virtual SensorResult SetBasicElement(const std::string& elementName,
                                       uint64_t& value) = 0;
  virtual SensorResult SetBasicElement(const std::string& elementName,
                                       float& value) = 0;
  virtual SensorResult SetBasicElement(const std::string& elementName,
                                       double& value) = 0;
};

}  // namespace ssbl
