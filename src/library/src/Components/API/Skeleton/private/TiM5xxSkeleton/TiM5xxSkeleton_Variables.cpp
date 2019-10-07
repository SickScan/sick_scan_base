//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Variables.h"
#include <sstream>
#include "Core/Common/include/Hash.h"
#include "Logger/include/Logger.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl {
namespace DevTiM5xxSkeleton {
#define SSBL_LONG_MIN (-2147483647L - 1)
#define SSBL_LLONG_MIN (-9223372036854775807i64 - 1)

ScanConfig_TiM5xxSkeleton_Var::ScanConfig_TiM5xxSkeleton_Var()
    : TiM5xxSkeleton_Var("ScanConfig", "LMPscancfg", 215, READ_WRITE, LEVEL_RUN,
                         LEVEL_INVALID, 85) {}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int8_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int16_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "diStartAngle"_hash:
      value = this->Value_.ScanRange.aRange[0].diStartAngle;
      ret = SSBL_SUCCESS;
      break;
    case "ScanRange.aRange[0].diStartAngle"_hash:
      value = this->Value_.ScanRange.aRange[0].diStartAngle;
      ret = SSBL_SUCCESS;
      break;
    case "diStopAngle"_hash:
      value = this->Value_.ScanRange.aRange[0].diStopAngle;
      ret = SSBL_SUCCESS;
      break;
    case "ScanRange.aRange[0].diStopAngle"_hash:
      value = this->Value_.ScanRange.aRange[0].diStopAngle;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type int32_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int32_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int64_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint8_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "uiLength"_hash:
      value = this->Value_.ScanRange.uiLength;
      ret = SSBL_SUCCESS;
      break;
    case "ScanRange.uiLength"_hash:
      value = this->Value_.ScanRange.uiLength;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint16_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint16_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "udiScanFreq"_hash:
      value = this->Value_.udiScanFreq;
      ret = SSBL_SUCCESS;
      break;
    case "udiAngleRes"_hash:
      value = this->Value_.ScanRange.aRange[0].udiAngleRes;
      ret = SSBL_SUCCESS;
      break;
    case "ScanRange.aRange[0].udiAngleRes"_hash:
      value = this->Value_.ScanRange.aRange[0].udiAngleRes;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint32_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint32_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint64_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type float");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::GetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type double");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "diStartAngle"_hash:
      if ((value >= -450000) && (value <= 2250000)) {
        this->Value_.ScanRange.aRange[0].diStartAngle = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "ScanRange.aRange[0].diStartAngle"_hash:
      if ((value >= -450000) && (value <= 2250000)) {
        this->Value_.ScanRange.aRange[0].diStartAngle = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "diStopAngle"_hash:
      if ((value >= -450000) && (value <= 2250000)) {
        this->Value_.ScanRange.aRange[0].diStopAngle = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "ScanRange.aRange[0].diStopAngle"_hash:
      if ((value >= -450000) && (value <= 2250000)) {
        this->Value_.ScanRange.aRange[0].diStopAngle = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type int32_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "uiLength"_hash:
      if ((value >= 1) && (value <= 1)) {
        this->Value_.ScanRange.uiLength = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "ScanRange.uiLength"_hash:
      if ((value >= 1) && (value <= 1)) {
        this->Value_.ScanRange.uiLength = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint16_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "udiScanFreq"_hash:
      if ((value >= 1500) && (value <= 1500)) {
        this->Value_.udiScanFreq = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1500 Max: 1500");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "udiAngleRes"_hash:
      if ((value >= 3333) && (value <= 10000)) {
        this->Value_.ScanRange.aRange[0].udiAngleRes = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 3333 Max: 10000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "ScanRange.aRange[0].udiAngleRes"_hash:
      if ((value >= 3333) && (value <= 10000)) {
        this->Value_.ScanRange.aRange[0].udiAngleRes = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 3333 Max: 10000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint32_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of float");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of double");
  return ret;
}

SensorResult ScanConfig_TiM5xxSkeleton_Var::SetBasicFromString(
    std::string value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type");
  return ret;
}

EtherHostCoLaDialect_TiM5xxSkeleton_Var::
    EtherHostCoLaDialect_TiM5xxSkeleton_Var()
    : TiM5xxSkeleton_Var("EtherHostCoLaDialect", "EIHstCola", 110, READ_WRITE,
                         LEVEL_RUN, LEVEL_AUTHORIZED_CLIENT, -1) {}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int8_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int16_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int32_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int64_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  ret = SSBL_SUCCESS;
  value = this->Value_;
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasic(
    uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint16_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasic(
    uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint32_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasic(
    uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint64_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type float");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::GetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type double");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  this->Value_ = value;
  ret = SSBL_SUCCESS;
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasic(
    uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasic(
    uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasic(
    uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of float");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of double");
  return ret;
}

SensorResult EtherHostCoLaDialect_TiM5xxSkeleton_Var::SetBasicFromString(
    std::string value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  bool isNegative = false;
  std::string help = value;
  if ('+' == value[0]) {
    help = value.substr(1);
  } else if ('-' == value[0]) {
    isNegative = true;
    help = value.substr(1);
  } else {
    help = value;
  }
  int8_t helpInt = (int8_t)std::stoi(help);
  if (isNegative) helpInt *= -1;
  memcpy(&this->Value_, &helpInt, 1);
  ret = SSBL_SUCCESS;
  return ret;
}

DataOutputRange_TiM5xxSkeleton_Var::DataOutputRange_TiM5xxSkeleton_Var()
    : TiM5xxSkeleton_Var("DataOutputRange", "LMPoutputRange", 217, READ_WRITE,
                         LEVEL_RUN, LEVEL_AUTHORIZED_CLIENT, 87) {}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int8_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int16_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "diStartAngle"_hash:
      value = this->Value_.aRange[0].diStartAngle;
      ret = SSBL_SUCCESS;
      break;
    case "aRange[0].diStartAngle"_hash:
      value = this->Value_.aRange[0].diStartAngle;
      ret = SSBL_SUCCESS;
      break;
    case "diStopAngle"_hash:
      value = this->Value_.aRange[0].diStopAngle;
      ret = SSBL_SUCCESS;
      break;
    case "aRange[0].diStopAngle"_hash:
      value = this->Value_.aRange[0].diStopAngle;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type int32_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int32_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int64_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint8_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "uiLength"_hash:
      value = this->Value_.uiLength;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint16_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint16_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "udiAngleRes"_hash:
      value = this->Value_.aRange[0].udiAngleRes;
      ret = SSBL_SUCCESS;
      break;
    case "aRange[0].udiAngleRes"_hash:
      value = this->Value_.aRange[0].udiAngleRes;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint32_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint32_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint64_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type float");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::GetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type double");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "diStartAngle"_hash:
      if ((value >= -450000) && (value <= 2250000)) {
        this->Value_.aRange[0].diStartAngle = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aRange[0].diStartAngle"_hash:
      if ((value >= -450000) && (value <= 2250000)) {
        this->Value_.aRange[0].diStartAngle = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "diStopAngle"_hash:
      if ((value >= -450000) && (value <= 2250000)) {
        this->Value_.aRange[0].diStopAngle = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aRange[0].diStopAngle"_hash:
      if ((value >= -450000) && (value <= 2250000)) {
        this->Value_.aRange[0].diStopAngle = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type int32_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "uiLength"_hash:
      if ((value >= 1) && (value <= 1)) {
        this->Value_.uiLength = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint16_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "udiAngleRes"_hash:
      if ((value >= 3333) && (value <= 10000)) {
        this->Value_.aRange[0].udiAngleRes = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 3333 Max: 10000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aRange[0].udiAngleRes"_hash:
      if ((value >= 3333) && (value <= 10000)) {
        this->Value_.aRange[0].udiAngleRes = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 3333 Max: 10000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint32_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of float");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of double");
  return ret;
}

SensorResult DataOutputRange_TiM5xxSkeleton_Var::SetBasicFromString(
    std::string value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type");
  return ret;
}

ScanData_TiM5xxSkeleton_Var::ScanData_TiM5xxSkeleton_Var()
    : TiM5xxSkeleton_Var("ScanData", "LMDscandata", 230, READ_ONLY, LEVEL_RUN,
                         LEVEL_INVALID, 90) {}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int8_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "iEncoderSpeed"_hash:
      value = this->Value_.aEncoderBlock[0].iEncoderSpeed;
      ret = SSBL_SUCCESS;
      break;
    case "aEncoderBlock[0].iEncoderSpeed"_hash:
      value = this->Value_.aEncoderBlock[0].iEncoderSpeed;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type int16_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int16_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "aDataChannel16[0].DataChannelHdr.diStartAngle"_hash:
      value = this->Value_.aDataChannel16[0].DataChannelHdr.diStartAngle;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[1].DataChannelHdr.diStartAngle"_hash:
      value = this->Value_.aDataChannel16[1].DataChannelHdr.diStartAngle;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[0].DataChannelHdr.diStartAngle"_hash:
      value = this->Value_.aDataChannel8[0].DataChannelHdr.diStartAngle;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[1].DataChannelHdr.diStartAngle"_hash:
      value = this->Value_.aDataChannel8[1].DataChannelHdr.diStartAngle;
      ret = SSBL_SUCCESS;
      break;
    case "diAngle"_hash:
      value = this->Value_.aEventBlock[0].diAngle;
      ret = SSBL_SUCCESS;
      break;
    case "aEventBlock[0].diAngle"_hash:
      value = this->Value_.aEventBlock[0].diAngle;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type int32_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int32_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int64_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "usiMonth"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.usiMonth;
      ret = SSBL_SUCCESS;
      break;
    case "aTimeBlock[0].DateTime.usiMonth"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.usiMonth;
      ret = SSBL_SUCCESS;
      break;
    case "usiDay"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.usiDay;
      ret = SSBL_SUCCESS;
      break;
    case "aTimeBlock[0].DateTime.usiDay"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.usiDay;
      ret = SSBL_SUCCESS;
      break;
    case "usiHour"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.usiHour;
      ret = SSBL_SUCCESS;
      break;
    case "aTimeBlock[0].DateTime.usiHour"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.usiHour;
      ret = SSBL_SUCCESS;
      break;
    case "usiMinute"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.usiMinute;
      ret = SSBL_SUCCESS;
      break;
    case "aTimeBlock[0].DateTime.usiMinute"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.usiMinute;
      ret = SSBL_SUCCESS;
      break;
    case "usiSec"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.usiSec;
      ret = SSBL_SUCCESS;
      break;
    case "aTimeBlock[0].DateTime.usiSec"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.usiSec;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint8_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint8_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "uiVersionNo"_hash:
      value = this->Value_.uiVersionNo;
      ret = SSBL_SUCCESS;
      break;
    case "uiIdent"_hash:
      value = this->Value_.DeviceBlock.uiIdent;
      ret = SSBL_SUCCESS;
      break;
    case "DeviceBlock.uiIdent"_hash:
      value = this->Value_.DeviceBlock.uiIdent;
      ret = SSBL_SUCCESS;
      break;
    case "uiTelegranCount"_hash:
      value = this->Value_.StatusBlock.uiTelegranCount;
      ret = SSBL_SUCCESS;
      break;
    case "StatusBlock.uiTelegranCount"_hash:
      value = this->Value_.StatusBlock.uiTelegranCount;
      ret = SSBL_SUCCESS;
      break;
    case "uiScanCount"_hash:
      value = this->Value_.StatusBlock.uiScanCount;
      ret = SSBL_SUCCESS;
      break;
    case "StatusBlock.uiScanCount"_hash:
      value = this->Value_.StatusBlock.uiScanCount;
      ret = SSBL_SUCCESS;
      break;
    case "uiReserved"_hash:
      value = this->Value_.StatusBlock.uiReserved;
      ret = SSBL_SUCCESS;
      break;
    case "StatusBlock.uiReserved"_hash:
      value = this->Value_.StatusBlock.uiReserved;
      ret = SSBL_SUCCESS;
      break;
    case "uiLengthaEncoderBlock"_hash:
      value = this->Value_.uiLengthaEncoderBlock;
      ret = SSBL_SUCCESS;
      break;
    case "uiLengthaDataChannel16"_hash:
      value = this->Value_.uiLengthaDataChannel16;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[0].DataChannelHdr.uiAngleRes"_hash:
      value = this->Value_.aDataChannel16[0].DataChannelHdr.uiAngleRes;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[0].uiLengthaData"_hash:
      value = this->Value_.aDataChannel16[0].uiLengthaData;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[1].DataChannelHdr.uiAngleRes"_hash:
      value = this->Value_.aDataChannel16[1].DataChannelHdr.uiAngleRes;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[1].uiLengthaData"_hash:
      value = this->Value_.aDataChannel16[1].uiLengthaData;
      ret = SSBL_SUCCESS;
      break;
    case "uiLengthaDataChannel8"_hash:
      value = this->Value_.uiLengthaDataChannel8;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[0].DataChannelHdr.uiAngleRes"_hash:
      value = this->Value_.aDataChannel8[0].DataChannelHdr.uiAngleRes;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[0].uiLengthaData"_hash:
      value = this->Value_.aDataChannel8[0].uiLengthaData;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[1].DataChannelHdr.uiAngleRes"_hash:
      value = this->Value_.aDataChannel8[1].DataChannelHdr.uiAngleRes;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[1].uiLengthaData"_hash:
      value = this->Value_.aDataChannel8[1].uiLengthaData;
      ret = SSBL_SUCCESS;
      break;
    case "uiLengthaPositionBlock"_hash:
      value = this->Value_.uiLengthaPositionBlock;
      ret = SSBL_SUCCESS;
      break;
    case "uiLengthaDeviceName"_hash:
      value = this->Value_.uiLengthaDeviceName;
      ret = SSBL_SUCCESS;
      break;
    case "uiLengthaCommentBlock"_hash:
      value = this->Value_.uiLengthaCommentBlock;
      ret = SSBL_SUCCESS;
      break;
    case "uiLengthaTimeBlock"_hash:
      value = this->Value_.uiLengthaTimeBlock;
      ret = SSBL_SUCCESS;
      break;
    case "uiYear"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.uiYear;
      ret = SSBL_SUCCESS;
      break;
    case "aTimeBlock[0].DateTime.uiYear"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.uiYear;
      ret = SSBL_SUCCESS;
      break;
    case "uiLengthaEventBlock"_hash:
      value = this->Value_.uiLengthaEventBlock;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint16_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint16_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "udiSerialNo"_hash:
      value = this->Value_.DeviceBlock.udiSerialNo;
      ret = SSBL_SUCCESS;
      break;
    case "DeviceBlock.udiSerialNo"_hash:
      value = this->Value_.DeviceBlock.udiSerialNo;
      ret = SSBL_SUCCESS;
      break;
    case "udiSystemCountScan"_hash:
      value = this->Value_.StatusBlock.udiSystemCountScan;
      ret = SSBL_SUCCESS;
      break;
    case "StatusBlock.udiSystemCountScan"_hash:
      value = this->Value_.StatusBlock.udiSystemCountScan;
      ret = SSBL_SUCCESS;
      break;
    case "udiSystemCountTransmit"_hash:
      value = this->Value_.StatusBlock.udiSystemCountTransmit;
      ret = SSBL_SUCCESS;
      break;
    case "StatusBlock.udiSystemCountTransmit"_hash:
      value = this->Value_.StatusBlock.udiSystemCountTransmit;
      ret = SSBL_SUCCESS;
      break;
    case "udiScanFreq"_hash:
      value = this->Value_.MeasurementParam1Block.udiScanFreq;
      ret = SSBL_SUCCESS;
      break;
    case "MeasurementParam1Block.udiScanFreq"_hash:
      value = this->Value_.MeasurementParam1Block.udiScanFreq;
      ret = SSBL_SUCCESS;
      break;
    case "udiMeasFreq"_hash:
      value = this->Value_.MeasurementParam1Block.udiMeasFreq;
      ret = SSBL_SUCCESS;
      break;
    case "MeasurementParam1Block.udiMeasFreq"_hash:
      value = this->Value_.MeasurementParam1Block.udiMeasFreq;
      ret = SSBL_SUCCESS;
      break;
    case "aEncoderBlock[0].udiEncoderPos"_hash:
      value = this->Value_.aEncoderBlock[0].udiEncoderPos;
      ret = SSBL_SUCCESS;
      break;
    case "udiUSec"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.udiUSec;
      ret = SSBL_SUCCESS;
      break;
    case "aTimeBlock[0].DateTime.udiUSec"_hash:
      value = this->Value_.aTimeBlock[0].DateTime.udiUSec;
      ret = SSBL_SUCCESS;
      break;
    case "aEventBlock[0].udiEncoderPos"_hash:
      value = this->Value_.aEventBlock[0].udiEncoderPos;
      ret = SSBL_SUCCESS;
      break;
    case "udiSystemCount"_hash:
      value = this->Value_.aEventBlock[0].udiSystemCount;
      ret = SSBL_SUCCESS;
      break;
    case "aEventBlock[0].udiSystemCount"_hash:
      value = this->Value_.aEventBlock[0].udiSystemCount;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint32_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint32_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint64_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "aDataChannel16[0].DataChannelHdr.dScaleFactor"_hash:
      value = this->Value_.aDataChannel16[0].DataChannelHdr.dScaleFactor;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[0].DataChannelHdr.dScaleOffset"_hash:
      value = this->Value_.aDataChannel16[0].DataChannelHdr.dScaleOffset;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[1].DataChannelHdr.dScaleFactor"_hash:
      value = this->Value_.aDataChannel16[1].DataChannelHdr.dScaleFactor;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[1].DataChannelHdr.dScaleOffset"_hash:
      value = this->Value_.aDataChannel16[1].DataChannelHdr.dScaleOffset;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[0].DataChannelHdr.dScaleFactor"_hash:
      value = this->Value_.aDataChannel8[0].DataChannelHdr.dScaleFactor;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[0].DataChannelHdr.dScaleOffset"_hash:
      value = this->Value_.aDataChannel8[0].DataChannelHdr.dScaleOffset;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[1].DataChannelHdr.dScaleFactor"_hash:
      value = this->Value_.aDataChannel8[1].DataChannelHdr.dScaleFactor;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[1].DataChannelHdr.dScaleOffset"_hash:
      value = this->Value_.aDataChannel8[1].DataChannelHdr.dScaleOffset;
      ret = SSBL_SUCCESS;
      break;
    case "dXpos"_hash:
      value = this->Value_.aPositionBlock[0].dXpos;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dXpos"_hash:
      value = this->Value_.aPositionBlock[0].dXpos;
      ret = SSBL_SUCCESS;
      break;
    case "dYpos"_hash:
      value = this->Value_.aPositionBlock[0].dYpos;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dYpos"_hash:
      value = this->Value_.aPositionBlock[0].dYpos;
      ret = SSBL_SUCCESS;
      break;
    case "dZpos"_hash:
      value = this->Value_.aPositionBlock[0].dZpos;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dZpos"_hash:
      value = this->Value_.aPositionBlock[0].dZpos;
      ret = SSBL_SUCCESS;
      break;
    case "dXrot"_hash:
      value = this->Value_.aPositionBlock[0].dXrot;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dXrot"_hash:
      value = this->Value_.aPositionBlock[0].dXrot;
      ret = SSBL_SUCCESS;
      break;
    case "dYrot"_hash:
      value = this->Value_.aPositionBlock[0].dYrot;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dYrot"_hash:
      value = this->Value_.aPositionBlock[0].dYrot;
      ret = SSBL_SUCCESS;
      break;
    case "dZrot"_hash:
      value = this->Value_.aPositionBlock[0].dZrot;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dZrot"_hash:
      value = this->Value_.aPositionBlock[0].dZrot;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type float, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type float");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::GetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type double");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "iEncoderSpeed"_hash:
      this->Value_.aEncoderBlock[0].iEncoderSpeed = value;
      ret = SSBL_SUCCESS;
      break;
    case "aEncoderBlock[0].iEncoderSpeed"_hash:
      this->Value_.aEncoderBlock[0].iEncoderSpeed = value;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type int16_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "aDataChannel16[0].DataChannelHdr.diStartAngle"_hash:
      this->Value_.aDataChannel16[0].DataChannelHdr.diStartAngle = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[1].DataChannelHdr.diStartAngle"_hash:
      this->Value_.aDataChannel16[1].DataChannelHdr.diStartAngle = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[0].DataChannelHdr.diStartAngle"_hash:
      this->Value_.aDataChannel8[0].DataChannelHdr.diStartAngle = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[1].DataChannelHdr.diStartAngle"_hash:
      this->Value_.aDataChannel8[1].DataChannelHdr.diStartAngle = value;
      ret = SSBL_SUCCESS;
      break;
    case "diAngle"_hash:
      this->Value_.aEventBlock[0].diAngle = value;
      ret = SSBL_SUCCESS;
      break;
    case "aEventBlock[0].diAngle"_hash:
      this->Value_.aEventBlock[0].diAngle = value;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type int32_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "usiMonth"_hash:
      if ((value >= 1) && (value <= 12)) {
        this->Value_.aTimeBlock[0].DateTime.usiMonth = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 12");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aTimeBlock[0].DateTime.usiMonth"_hash:
      if ((value >= 1) && (value <= 12)) {
        this->Value_.aTimeBlock[0].DateTime.usiMonth = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 12");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "usiDay"_hash:
      if ((value >= 1) && (value <= 31)) {
        this->Value_.aTimeBlock[0].DateTime.usiDay = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 31");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aTimeBlock[0].DateTime.usiDay"_hash:
      if ((value >= 1) && (value <= 31)) {
        this->Value_.aTimeBlock[0].DateTime.usiDay = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 31");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "usiHour"_hash:
      if ((value >= 0) && (value <= 23)) {
        this->Value_.aTimeBlock[0].DateTime.usiHour = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 23");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aTimeBlock[0].DateTime.usiHour"_hash:
      if ((value >= 0) && (value <= 23)) {
        this->Value_.aTimeBlock[0].DateTime.usiHour = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 23");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "usiMinute"_hash:
      if ((value >= 0) && (value <= 59)) {
        this->Value_.aTimeBlock[0].DateTime.usiMinute = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 59");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aTimeBlock[0].DateTime.usiMinute"_hash:
      if ((value >= 0) && (value <= 59)) {
        this->Value_.aTimeBlock[0].DateTime.usiMinute = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 59");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "usiSec"_hash:
      if ((value >= 0) && (value <= 59)) {
        this->Value_.aTimeBlock[0].DateTime.usiSec = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 59");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aTimeBlock[0].DateTime.usiSec"_hash:
      if ((value >= 0) && (value <= 59)) {
        this->Value_.aTimeBlock[0].DateTime.usiSec = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 59");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint8_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "uiVersionNo"_hash:
      this->Value_.uiVersionNo = value;
      ret = SSBL_SUCCESS;
      break;
    case "uiIdent"_hash:
      this->Value_.DeviceBlock.uiIdent = value;
      ret = SSBL_SUCCESS;
      break;
    case "DeviceBlock.uiIdent"_hash:
      this->Value_.DeviceBlock.uiIdent = value;
      ret = SSBL_SUCCESS;
      break;
    case "uiTelegranCount"_hash:
      this->Value_.StatusBlock.uiTelegranCount = value;
      ret = SSBL_SUCCESS;
      break;
    case "StatusBlock.uiTelegranCount"_hash:
      this->Value_.StatusBlock.uiTelegranCount = value;
      ret = SSBL_SUCCESS;
      break;
    case "uiScanCount"_hash:
      this->Value_.StatusBlock.uiScanCount = value;
      ret = SSBL_SUCCESS;
      break;
    case "StatusBlock.uiScanCount"_hash:
      this->Value_.StatusBlock.uiScanCount = value;
      ret = SSBL_SUCCESS;
      break;
    case "uiReserved"_hash:
      this->Value_.StatusBlock.uiReserved = value;
      ret = SSBL_SUCCESS;
      break;
    case "StatusBlock.uiReserved"_hash:
      this->Value_.StatusBlock.uiReserved = value;
      ret = SSBL_SUCCESS;
      break;
    case "uiLengthaEncoderBlock"_hash:
      if ((value >= 1) && (value <= 1)) {
        this->Value_.uiLengthaEncoderBlock = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "uiLengthaDataChannel16"_hash:
      if ((value >= 2) && (value <= 2)) {
        this->Value_.uiLengthaDataChannel16 = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 2 Max: 2");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aDataChannel16[0].DataChannelHdr.uiAngleRes"_hash:
      this->Value_.aDataChannel16[0].DataChannelHdr.uiAngleRes = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[0].uiLengthaData"_hash:
      if ((value >= 811) && (value <= 811)) {
        this->Value_.aDataChannel16[0].uiLengthaData = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 811 Max: 811");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aDataChannel16[1].DataChannelHdr.uiAngleRes"_hash:
      this->Value_.aDataChannel16[1].DataChannelHdr.uiAngleRes = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[1].uiLengthaData"_hash:
      if ((value >= 811) && (value <= 811)) {
        this->Value_.aDataChannel16[1].uiLengthaData = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 811 Max: 811");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "uiLengthaDataChannel8"_hash:
      if ((value >= 2) && (value <= 2)) {
        this->Value_.uiLengthaDataChannel8 = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 2 Max: 2");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aDataChannel8[0].DataChannelHdr.uiAngleRes"_hash:
      this->Value_.aDataChannel8[0].DataChannelHdr.uiAngleRes = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[0].uiLengthaData"_hash:
      if ((value >= 811) && (value <= 811)) {
        this->Value_.aDataChannel8[0].uiLengthaData = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 811 Max: 811");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aDataChannel8[1].DataChannelHdr.uiAngleRes"_hash:
      this->Value_.aDataChannel8[1].DataChannelHdr.uiAngleRes = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[1].uiLengthaData"_hash:
      if ((value >= 811) && (value <= 811)) {
        this->Value_.aDataChannel8[1].uiLengthaData = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 811 Max: 811");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "uiLengthaPositionBlock"_hash:
      if ((value >= 1) && (value <= 1)) {
        this->Value_.uiLengthaPositionBlock = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "uiLengthaDeviceName"_hash:
      if ((value >= 1) && (value <= 1)) {
        this->Value_.uiLengthaDeviceName = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "uiLengthaCommentBlock"_hash:
      if ((value >= 1) && (value <= 1)) {
        this->Value_.uiLengthaCommentBlock = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "uiLengthaTimeBlock"_hash:
      if ((value >= 1) && (value <= 1)) {
        this->Value_.uiLengthaTimeBlock = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "uiYear"_hash:
      if ((value >= 0) && (value <= 9999)) {
        this->Value_.aTimeBlock[0].DateTime.uiYear = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 9999");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aTimeBlock[0].DateTime.uiYear"_hash:
      if ((value >= 0) && (value <= 9999)) {
        this->Value_.aTimeBlock[0].DateTime.uiYear = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 9999");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "uiLengthaEventBlock"_hash:
      if ((value >= 1) && (value <= 1)) {
        this->Value_.uiLengthaEventBlock = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint16_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "udiSerialNo"_hash:
      this->Value_.DeviceBlock.udiSerialNo = value;
      ret = SSBL_SUCCESS;
      break;
    case "DeviceBlock.udiSerialNo"_hash:
      this->Value_.DeviceBlock.udiSerialNo = value;
      ret = SSBL_SUCCESS;
      break;
    case "udiSystemCountScan"_hash:
      this->Value_.StatusBlock.udiSystemCountScan = value;
      ret = SSBL_SUCCESS;
      break;
    case "StatusBlock.udiSystemCountScan"_hash:
      this->Value_.StatusBlock.udiSystemCountScan = value;
      ret = SSBL_SUCCESS;
      break;
    case "udiSystemCountTransmit"_hash:
      this->Value_.StatusBlock.udiSystemCountTransmit = value;
      ret = SSBL_SUCCESS;
      break;
    case "StatusBlock.udiSystemCountTransmit"_hash:
      this->Value_.StatusBlock.udiSystemCountTransmit = value;
      ret = SSBL_SUCCESS;
      break;
    case "udiScanFreq"_hash:
      this->Value_.MeasurementParam1Block.udiScanFreq = value;
      ret = SSBL_SUCCESS;
      break;
    case "MeasurementParam1Block.udiScanFreq"_hash:
      this->Value_.MeasurementParam1Block.udiScanFreq = value;
      ret = SSBL_SUCCESS;
      break;
    case "udiMeasFreq"_hash:
      this->Value_.MeasurementParam1Block.udiMeasFreq = value;
      ret = SSBL_SUCCESS;
      break;
    case "MeasurementParam1Block.udiMeasFreq"_hash:
      this->Value_.MeasurementParam1Block.udiMeasFreq = value;
      ret = SSBL_SUCCESS;
      break;
    case "aEncoderBlock[0].udiEncoderPos"_hash:
      this->Value_.aEncoderBlock[0].udiEncoderPos = value;
      ret = SSBL_SUCCESS;
      break;
    case "udiUSec"_hash:
      if ((value >= 0) && (value <= 999999)) {
        this->Value_.aTimeBlock[0].DateTime.udiUSec = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 999999");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aTimeBlock[0].DateTime.udiUSec"_hash:
      if ((value >= 0) && (value <= 999999)) {
        this->Value_.aTimeBlock[0].DateTime.udiUSec = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 999999");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    case "aEventBlock[0].udiEncoderPos"_hash:
      this->Value_.aEventBlock[0].udiEncoderPos = value;
      ret = SSBL_SUCCESS;
      break;
    case "udiSystemCount"_hash:
      this->Value_.aEventBlock[0].udiSystemCount = value;
      ret = SSBL_SUCCESS;
      break;
    case "aEventBlock[0].udiSystemCount"_hash:
      this->Value_.aEventBlock[0].udiSystemCount = value;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint32_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "aDataChannel16[0].DataChannelHdr.dScaleFactor"_hash:
      this->Value_.aDataChannel16[0].DataChannelHdr.dScaleFactor = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[0].DataChannelHdr.dScaleOffset"_hash:
      this->Value_.aDataChannel16[0].DataChannelHdr.dScaleOffset = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[1].DataChannelHdr.dScaleFactor"_hash:
      this->Value_.aDataChannel16[1].DataChannelHdr.dScaleFactor = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel16[1].DataChannelHdr.dScaleOffset"_hash:
      this->Value_.aDataChannel16[1].DataChannelHdr.dScaleOffset = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[0].DataChannelHdr.dScaleFactor"_hash:
      this->Value_.aDataChannel8[0].DataChannelHdr.dScaleFactor = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[0].DataChannelHdr.dScaleOffset"_hash:
      this->Value_.aDataChannel8[0].DataChannelHdr.dScaleOffset = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[1].DataChannelHdr.dScaleFactor"_hash:
      this->Value_.aDataChannel8[1].DataChannelHdr.dScaleFactor = value;
      ret = SSBL_SUCCESS;
      break;
    case "aDataChannel8[1].DataChannelHdr.dScaleOffset"_hash:
      this->Value_.aDataChannel8[1].DataChannelHdr.dScaleOffset = value;
      ret = SSBL_SUCCESS;
      break;
    case "dXpos"_hash:
      this->Value_.aPositionBlock[0].dXpos = value;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dXpos"_hash:
      this->Value_.aPositionBlock[0].dXpos = value;
      ret = SSBL_SUCCESS;
      break;
    case "dYpos"_hash:
      this->Value_.aPositionBlock[0].dYpos = value;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dYpos"_hash:
      this->Value_.aPositionBlock[0].dYpos = value;
      ret = SSBL_SUCCESS;
      break;
    case "dZpos"_hash:
      this->Value_.aPositionBlock[0].dZpos = value;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dZpos"_hash:
      this->Value_.aPositionBlock[0].dZpos = value;
      ret = SSBL_SUCCESS;
      break;
    case "dXrot"_hash:
      this->Value_.aPositionBlock[0].dXrot = value;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dXrot"_hash:
      this->Value_.aPositionBlock[0].dXrot = value;
      ret = SSBL_SUCCESS;
      break;
    case "dYrot"_hash:
      this->Value_.aPositionBlock[0].dYrot = value;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dYrot"_hash:
      this->Value_.aPositionBlock[0].dYrot = value;
      ret = SSBL_SUCCESS;
      break;
    case "dZrot"_hash:
      this->Value_.aPositionBlock[0].dZrot = value;
      ret = SSBL_SUCCESS;
      break;
    case "aPositionBlock[0].dZrot"_hash:
      this->Value_.aPositionBlock[0].dZrot = value;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type float, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of float");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of double");
  return ret;
}

SensorResult ScanData_TiM5xxSkeleton_Var::SetBasicFromString(
    std::string value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type");
  return ret;
}

ScanDataConfig_TiM5xxSkeleton_Var::ScanDataConfig_TiM5xxSkeleton_Var()
    : TiM5xxSkeleton_Var("ScanDataConfig", "LMDscandatacfg", 212, READ_WRITE,
                         LEVEL_RUN, LEVEL_AUTHORIZED_CLIENT, -1) {}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int8_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int16_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int32_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int64_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "bEnable"_hash:
      value = this->Value_.RemDataConfig.bEnable;
      ret = SSBL_SUCCESS;
      break;
    case "RemDataConfig.bEnable"_hash:
      value = this->Value_.RemDataConfig.bEnable;
      ret = SSBL_SUCCESS;
      break;
    case "eDataType"_hash:
      value = this->Value_.RemDataConfig.eDataType;
      ret = SSBL_SUCCESS;
      break;
    case "RemDataConfig.eDataType"_hash:
      value = this->Value_.RemDataConfig.eDataType;
      ret = SSBL_SUCCESS;
      break;
    case "eContentType"_hash:
      value = this->Value_.RemDataConfig.eContentType;
      ret = SSBL_SUCCESS;
      break;
    case "RemDataConfig.eContentType"_hash:
      value = this->Value_.RemDataConfig.eContentType;
      ret = SSBL_SUCCESS;
      break;
    case "bEnablePositionBlock"_hash:
      value = this->Value_.bEnablePositionBlock;
      ret = SSBL_SUCCESS;
      break;
    case "bEnableDeviceName"_hash:
      value = this->Value_.bEnableDeviceName;
      ret = SSBL_SUCCESS;
      break;
    case "bEnableCommentBlock"_hash:
      value = this->Value_.bEnableCommentBlock;
      ret = SSBL_SUCCESS;
      break;
    case "bEnableTimeBlock"_hash:
      value = this->Value_.bEnableTimeBlock;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint8_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint8_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "uiOutputInterval"_hash:
      value = this->Value_.uiOutputInterval;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint16_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint16_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint32_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint64_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type float");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::GetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type double");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "bEnable"_hash:
      this->Value_.RemDataConfig.bEnable = value;
      ret = SSBL_SUCCESS;
      break;
    case "RemDataConfig.bEnable"_hash:
      this->Value_.RemDataConfig.bEnable = value;
      ret = SSBL_SUCCESS;
      break;
    case "eDataType"_hash:
      this->Value_.RemDataConfig.eDataType = value;
      ret = SSBL_SUCCESS;
      break;
    case "RemDataConfig.eDataType"_hash:
      this->Value_.RemDataConfig.eDataType = value;
      ret = SSBL_SUCCESS;
      break;
    case "eContentType"_hash:
      this->Value_.RemDataConfig.eContentType = value;
      ret = SSBL_SUCCESS;
      break;
    case "RemDataConfig.eContentType"_hash:
      this->Value_.RemDataConfig.eContentType = value;
      ret = SSBL_SUCCESS;
      break;
    case "bEnablePositionBlock"_hash:
      this->Value_.bEnablePositionBlock = value;
      ret = SSBL_SUCCESS;
      break;
    case "bEnableDeviceName"_hash:
      this->Value_.bEnableDeviceName = value;
      ret = SSBL_SUCCESS;
      break;
    case "bEnableCommentBlock"_hash:
      this->Value_.bEnableCommentBlock = value;
      ret = SSBL_SUCCESS;
      break;
    case "bEnableTimeBlock"_hash:
      this->Value_.bEnableTimeBlock = value;
      ret = SSBL_SUCCESS;
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint8_t, or the "
          "address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
  switch (test) {
    case "uiOutputInterval"_hash:
      if ((value >= 1) && (value <= 50000)) {
        this->Value_.uiOutputInterval = value;
        ret = SSBL_SUCCESS;
      } else {
        SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 50000");
        ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
      }
      break;
    default:
      SSBL_LOG_WARNING(
          "Variable does either not contain element %s of type uint16_t, or "
          "the address string does not yield an unique element.",
          elementName.c_str());
      ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
      break;
  }
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of float");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of double");
  return ret;
}

SensorResult ScanDataConfig_TiM5xxSkeleton_Var::SetBasicFromString(
    std::string value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type");
  return ret;
}

SCdevicestate_TiM5xxSkeleton_Var::SCdevicestate_TiM5xxSkeleton_Var()
    : TiM5xxSkeleton_Var("SCdevicestate", "SCdevicestate", 10, READ_ONLY,
                         LEVEL_RUN, LEVEL_INVALID, 1) {}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int8_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int16_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int32_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int64_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  ret = SSBL_SUCCESS;
  value = this->Value_;
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint16_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint32_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint64_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type float");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::GetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type double");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  this->Value_ = value;
  ret = SSBL_SUCCESS;
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of float");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of double");
  return ret;
}

SensorResult SCdevicestate_TiM5xxSkeleton_Var::SetBasicFromString(
    std::string value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  bool isNegative = false;
  std::string help = value;
  if ('+' == value[0]) {
    help = value.substr(1);
  } else if ('-' == value[0]) {
    isNegative = true;
    help = value.substr(1);
  } else {
    help = value;
  }
  int8_t helpInt = (int8_t)std::stoi(help);
  if (isNegative) helpInt *= -1;
  memcpy(&this->Value_, &helpInt, 1);
  ret = SSBL_SUCCESS;
  return ret;
}

OrderNumber_TiM5xxSkeleton_Var::OrderNumber_TiM5xxSkeleton_Var()
    : TiM5xxSkeleton_Var("OrderNumber", "DIornr", 371, READ_WRITE, LEVEL_RUN,
                         LEVEL_INVALID, -1) {}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int8_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int16_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int32_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type int64_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint8_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint16_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint32_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type uint64_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type float");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::GetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable not of type double");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasic(int8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasic(int16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasic(int32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type int64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasic(int64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint8_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasic(uint8_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint16_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasic(uint16_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint32_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasic(uint32_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type uint64_t, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasic(uint64_t& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type float, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasic(float& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of float");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicElement(
    const std::string& elementName, double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(elementName);
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING(
      "Variable does either not contain element %s of type double, or the "
      "address string does not yield an unique element.",
      elementName.c_str());
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasic(double& value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type of double");
  return ret;
}

SensorResult OrderNumber_TiM5xxSkeleton_Var::SetBasicFromString(
    std::string value) {
  SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
  SSBL_UNUSED(value);
  SSBL_LOG_WARNING("Variable is not a simple type");
  return ret;
}
}  // namespace DevTiM5xxSkeleton
}  // namespace ssbl
