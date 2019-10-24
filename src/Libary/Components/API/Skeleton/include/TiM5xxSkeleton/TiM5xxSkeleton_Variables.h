//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include <cstring>
#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_CoLa_Extension.h"
#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Types.h"
#include "Core/Sensor/include/Common/SickSensorVariable.h"

namespace ssbl {
namespace DevTiM5xxSkeleton {
template <class T>
class TiM5xxSkeleton_Var : public SickSensorVariable {
 public:
  TiM5xxSkeleton_Var(std::string name, std::string comName, uint16_t idx,
                     VariableDirection rwDir, AccessLevel readAccessLvl,
                     AccessLevel writeAccessLvl, int32_t eventIdx)
      : SickSensorVariable(name, comName, idx, rwDir, readAccessLvl,
                           writeAccessLvl, eventIdx){};
  ~TiM5xxSkeleton_Var(){};
  uint32_t SerializeContent(Serializer* pSer, uint8_t* pDest,
                            uint32_t* pOffset) {
    switch (pSer->GetProtocolType()) {
      case COLA_A:
        (reinterpret_cast<TiM5xxSkeleton_CoLaASerializer*>(pSer))
            ->Serialize(pDest, this->Value_, pOffset);
        break;
      case COLA_B:
        (reinterpret_cast<TiM5xxSkeleton_CoLaBSerializer*>(pSer))
            ->Serialize(pDest, this->Value_, pOffset);
        break;
      default:
        break;
    }
    return *pOffset;
  }
  uint32_t DeserializeContent(Deserializer* pDes, uint8_t* pSrc) {
    uint32_t offset = 0;
    switch (pDes->GetProtocolType()) {
      case COLA_A:
        (reinterpret_cast<TiM5xxSkeleton_CoLaADeserializer*>(pDes))
            ->Deserialize(pSrc, this->Value_, &offset);
        break;
      case COLA_B:
        (reinterpret_cast<TiM5xxSkeleton_CoLaBDeserializer*>(pDes))
            ->Deserialize(pSrc, this->Value_, &offset);
        break;
      default:
        break;
    }
    return offset;
  }
  size_t Size(void) { return sizeof(T); };
  SensorResult GetRaw(uint8_t* pDest) {
    if (NULL == pDest) return SSBL_ERR_INVALID_ARGUMENT;
    memcpy(pDest, &this->Value_, sizeof(T));
    return SSBL_SUCCESS;
  }
  template <class C>
  SensorResult CopyElement(C& src, C& dest) {
    std::memcpy(&dest, &src, sizeof(C));
    return SSBL_SUCCESS;
  }
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
  T Value_;
};

class ScanConfig_TiM5xxSkeleton_Var : public TiM5xxSkeleton_Var<ScanConfig_t> {
 public:
  ScanConfig_TiM5xxSkeleton_Var();
  ~ScanConfig_TiM5xxSkeleton_Var(){};
  ComObj* Clone() { return new ScanConfig_TiM5xxSkeleton_Var(*this); }
  static SickSensorVariable* Create() {
    return new ScanConfig_TiM5xxSkeleton_Var;
  }
  SensorResult GetBasic(int8_t& value);
  SensorResult GetBasic(int16_t& value);
  SensorResult GetBasic(int32_t& value);
  SensorResult GetBasic(int64_t& value);
  SensorResult GetBasic(uint8_t& value);
  SensorResult GetBasic(uint16_t& value);
  SensorResult GetBasic(uint32_t& value);
  SensorResult GetBasic(uint64_t& value);
  SensorResult GetBasic(float& value);
  SensorResult GetBasic(double& value);
  SensorResult GetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, float& value);
  SensorResult GetBasicElement(const std::string& elementName, double& value);
  SensorResult SetBasic(int8_t& value);
  SensorResult SetBasic(int16_t& value);
  SensorResult SetBasic(int32_t& value);
  SensorResult SetBasic(int64_t& value);
  SensorResult SetBasic(uint8_t& value);
  SensorResult SetBasic(uint16_t& value);
  SensorResult SetBasic(uint32_t& value);
  SensorResult SetBasic(uint64_t& value);
  SensorResult SetBasic(float& value);
  SensorResult SetBasic(double& value);
  SensorResult SetBasicFromString(std::string value);
  SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, float& value);
  SensorResult SetBasicElement(const std::string& elementName, double& value);
};

class EtherHostCoLaDialect_TiM5xxSkeleton_Var
    : public TiM5xxSkeleton_Var<Enum8_t> {
 public:
  EtherHostCoLaDialect_TiM5xxSkeleton_Var();
  ~EtherHostCoLaDialect_TiM5xxSkeleton_Var(){};
  ComObj* Clone() { return new EtherHostCoLaDialect_TiM5xxSkeleton_Var(*this); }
  static SickSensorVariable* Create() {
    return new EtherHostCoLaDialect_TiM5xxSkeleton_Var;
  }
  SensorResult GetBasic(int8_t& value);
  SensorResult GetBasic(int16_t& value);
  SensorResult GetBasic(int32_t& value);
  SensorResult GetBasic(int64_t& value);
  SensorResult GetBasic(uint8_t& value);
  SensorResult GetBasic(uint16_t& value);
  SensorResult GetBasic(uint32_t& value);
  SensorResult GetBasic(uint64_t& value);
  SensorResult GetBasic(float& value);
  SensorResult GetBasic(double& value);
  SensorResult GetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, float& value);
  SensorResult GetBasicElement(const std::string& elementName, double& value);
  SensorResult SetBasic(int8_t& value);
  SensorResult SetBasic(int16_t& value);
  SensorResult SetBasic(int32_t& value);
  SensorResult SetBasic(int64_t& value);
  SensorResult SetBasic(uint8_t& value);
  SensorResult SetBasic(uint16_t& value);
  SensorResult SetBasic(uint32_t& value);
  SensorResult SetBasic(uint64_t& value);
  SensorResult SetBasic(float& value);
  SensorResult SetBasic(double& value);
  SensorResult SetBasicFromString(std::string value);
  SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, float& value);
  SensorResult SetBasicElement(const std::string& elementName, double& value);
};

class DataOutputRange_TiM5xxSkeleton_Var
    : public TiM5xxSkeleton_Var<DataOutputRange_t> {
 public:
  DataOutputRange_TiM5xxSkeleton_Var();
  ~DataOutputRange_TiM5xxSkeleton_Var(){};
  ComObj* Clone() { return new DataOutputRange_TiM5xxSkeleton_Var(*this); }
  static SickSensorVariable* Create() {
    return new DataOutputRange_TiM5xxSkeleton_Var;
  }
  SensorResult GetBasic(int8_t& value);
  SensorResult GetBasic(int16_t& value);
  SensorResult GetBasic(int32_t& value);
  SensorResult GetBasic(int64_t& value);
  SensorResult GetBasic(uint8_t& value);
  SensorResult GetBasic(uint16_t& value);
  SensorResult GetBasic(uint32_t& value);
  SensorResult GetBasic(uint64_t& value);
  SensorResult GetBasic(float& value);
  SensorResult GetBasic(double& value);
  SensorResult GetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, float& value);
  SensorResult GetBasicElement(const std::string& elementName, double& value);
  SensorResult SetBasic(int8_t& value);
  SensorResult SetBasic(int16_t& value);
  SensorResult SetBasic(int32_t& value);
  SensorResult SetBasic(int64_t& value);
  SensorResult SetBasic(uint8_t& value);
  SensorResult SetBasic(uint16_t& value);
  SensorResult SetBasic(uint32_t& value);
  SensorResult SetBasic(uint64_t& value);
  SensorResult SetBasic(float& value);
  SensorResult SetBasic(double& value);
  SensorResult SetBasicFromString(std::string value);
  SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, float& value);
  SensorResult SetBasicElement(const std::string& elementName, double& value);
};

class ScanData_TiM5xxSkeleton_Var : public TiM5xxSkeleton_Var<ScanData_t> {
 public:
  ScanData_TiM5xxSkeleton_Var();
  ~ScanData_TiM5xxSkeleton_Var(){};
  ComObj* Clone() { return new ScanData_TiM5xxSkeleton_Var(*this); }
  static SickSensorVariable* Create() {
    return new ScanData_TiM5xxSkeleton_Var;
  }
  SensorResult GetBasic(int8_t& value);
  SensorResult GetBasic(int16_t& value);
  SensorResult GetBasic(int32_t& value);
  SensorResult GetBasic(int64_t& value);
  SensorResult GetBasic(uint8_t& value);
  SensorResult GetBasic(uint16_t& value);
  SensorResult GetBasic(uint32_t& value);
  SensorResult GetBasic(uint64_t& value);
  SensorResult GetBasic(float& value);
  SensorResult GetBasic(double& value);
  SensorResult GetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, float& value);
  SensorResult GetBasicElement(const std::string& elementName, double& value);
  SensorResult SetBasic(int8_t& value);
  SensorResult SetBasic(int16_t& value);
  SensorResult SetBasic(int32_t& value);
  SensorResult SetBasic(int64_t& value);
  SensorResult SetBasic(uint8_t& value);
  SensorResult SetBasic(uint16_t& value);
  SensorResult SetBasic(uint32_t& value);
  SensorResult SetBasic(uint64_t& value);
  SensorResult SetBasic(float& value);
  SensorResult SetBasic(double& value);
  SensorResult SetBasicFromString(std::string value);
  SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, float& value);
  SensorResult SetBasicElement(const std::string& elementName, double& value);
};

class ScanDataConfig_TiM5xxSkeleton_Var
    : public TiM5xxSkeleton_Var<ScanDataConfig_t> {
 public:
  ScanDataConfig_TiM5xxSkeleton_Var();
  ~ScanDataConfig_TiM5xxSkeleton_Var(){};
  ComObj* Clone() { return new ScanDataConfig_TiM5xxSkeleton_Var(*this); }
  static SickSensorVariable* Create() {
    return new ScanDataConfig_TiM5xxSkeleton_Var;
  }
  SensorResult GetBasic(int8_t& value);
  SensorResult GetBasic(int16_t& value);
  SensorResult GetBasic(int32_t& value);
  SensorResult GetBasic(int64_t& value);
  SensorResult GetBasic(uint8_t& value);
  SensorResult GetBasic(uint16_t& value);
  SensorResult GetBasic(uint32_t& value);
  SensorResult GetBasic(uint64_t& value);
  SensorResult GetBasic(float& value);
  SensorResult GetBasic(double& value);
  SensorResult GetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, float& value);
  SensorResult GetBasicElement(const std::string& elementName, double& value);
  SensorResult SetBasic(int8_t& value);
  SensorResult SetBasic(int16_t& value);
  SensorResult SetBasic(int32_t& value);
  SensorResult SetBasic(int64_t& value);
  SensorResult SetBasic(uint8_t& value);
  SensorResult SetBasic(uint16_t& value);
  SensorResult SetBasic(uint32_t& value);
  SensorResult SetBasic(uint64_t& value);
  SensorResult SetBasic(float& value);
  SensorResult SetBasic(double& value);
  SensorResult SetBasicFromString(std::string value);
  SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, float& value);
  SensorResult SetBasicElement(const std::string& elementName, double& value);
};

class SCdevicestate_TiM5xxSkeleton_Var : public TiM5xxSkeleton_Var<Enum8_t> {
 public:
  SCdevicestate_TiM5xxSkeleton_Var();
  ~SCdevicestate_TiM5xxSkeleton_Var(){};
  ComObj* Clone() { return new SCdevicestate_TiM5xxSkeleton_Var(*this); }
  static SickSensorVariable* Create() {
    return new SCdevicestate_TiM5xxSkeleton_Var;
  }
  SensorResult GetBasic(int8_t& value);
  SensorResult GetBasic(int16_t& value);
  SensorResult GetBasic(int32_t& value);
  SensorResult GetBasic(int64_t& value);
  SensorResult GetBasic(uint8_t& value);
  SensorResult GetBasic(uint16_t& value);
  SensorResult GetBasic(uint32_t& value);
  SensorResult GetBasic(uint64_t& value);
  SensorResult GetBasic(float& value);
  SensorResult GetBasic(double& value);
  SensorResult GetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, float& value);
  SensorResult GetBasicElement(const std::string& elementName, double& value);
  SensorResult SetBasic(int8_t& value);
  SensorResult SetBasic(int16_t& value);
  SensorResult SetBasic(int32_t& value);
  SensorResult SetBasic(int64_t& value);
  SensorResult SetBasic(uint8_t& value);
  SensorResult SetBasic(uint16_t& value);
  SensorResult SetBasic(uint32_t& value);
  SensorResult SetBasic(uint64_t& value);
  SensorResult SetBasic(float& value);
  SensorResult SetBasic(double& value);
  SensorResult SetBasicFromString(std::string value);
  SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, float& value);
  SensorResult SetBasicElement(const std::string& elementName, double& value);
};

class OrderNumber_TiM5xxSkeleton_Var : public TiM5xxSkeleton_Var<FixString7> {
 public:
  OrderNumber_TiM5xxSkeleton_Var();
  ~OrderNumber_TiM5xxSkeleton_Var(){};
  ComObj* Clone() { return new OrderNumber_TiM5xxSkeleton_Var(*this); }
  static SickSensorVariable* Create() {
    return new OrderNumber_TiM5xxSkeleton_Var;
  }
  SensorResult GetBasic(int8_t& value);
  SensorResult GetBasic(int16_t& value);
  SensorResult GetBasic(int32_t& value);
  SensorResult GetBasic(int64_t& value);
  SensorResult GetBasic(uint8_t& value);
  SensorResult GetBasic(uint16_t& value);
  SensorResult GetBasic(uint32_t& value);
  SensorResult GetBasic(uint64_t& value);
  SensorResult GetBasic(float& value);
  SensorResult GetBasic(double& value);
  SensorResult GetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult GetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult GetBasicElement(const std::string& elementName, float& value);
  SensorResult GetBasicElement(const std::string& elementName, double& value);
  SensorResult SetBasic(int8_t& value);
  SensorResult SetBasic(int16_t& value);
  SensorResult SetBasic(int32_t& value);
  SensorResult SetBasic(int64_t& value);
  SensorResult SetBasic(uint8_t& value);
  SensorResult SetBasic(uint16_t& value);
  SensorResult SetBasic(uint32_t& value);
  SensorResult SetBasic(uint64_t& value);
  SensorResult SetBasic(float& value);
  SensorResult SetBasic(double& value);
  SensorResult SetBasicFromString(std::string value);
  SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, int64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint8_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint16_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint32_t& value);
  SensorResult SetBasicElement(const std::string& elementName, uint64_t& value);
  SensorResult SetBasicElement(const std::string& elementName, float& value);
  SensorResult SetBasicElement(const std::string& elementName, double& value);
};

}  // namespace DevTiM5xxSkeleton
}  // namespace ssbl
