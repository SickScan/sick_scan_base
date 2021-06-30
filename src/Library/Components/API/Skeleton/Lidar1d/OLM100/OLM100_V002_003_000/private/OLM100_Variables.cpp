//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_003_000/include/OLM100_Variables.h"
#include <sstream>
#include "Base/Core/Common/include/Hash.h"
#include "Base/Logger/include/Logger.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl
{
namespace OLM100_V002_003_000_Skeleton
{
#define SSBL_LONG_MIN  (-2147483647L - 1)
#define SSBL_LLONG_MIN  (-9223372036854775807i64 - 1)


PositionData_OLM100_Var::PositionData_OLM100_Var()
	: OLM100_Var("PositionData","PositionData",5,READ_ONLY,LEVEL_MAINTENANCE,LEVEL_INVALID,0)
{
}

SensorResult PositionData_OLM100_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult PositionData_OLM100_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

Speed_OLM100_Var::Speed_OLM100_Var()
	: OLM100_Var("Speed","Speed",8,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,2)
{
}

SensorResult Speed_OLM100_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult Speed_OLM100_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

Acceleration_OLM100_Var::Acceleration_OLM100_Var()
	: OLM100_Var("Acceleration","Acceleration",12,READ_ONLY,LEVEL_PRODUCTION,LEVEL_INVALID,3)
{
}

SensorResult Acceleration_OLM100_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult Acceleration_OLM100_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

GeneralReadability_OLM100_Var::GeneralReadability_OLM100_Var()
	: OLM100_Var("GeneralReadability","GeneralReadability",38,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,30)
{
}

SensorResult GeneralReadability_OLM100_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult GeneralReadability_OLM100_Var::SetBasicFromString(std::string value)
{
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
	if (isNegative)
		helpInt *= -1;
	memcpy(&this->Value_, &helpInt,1);
	ret = SSBL_SUCCESS;
	return ret;
}

LocalReadability_OLM100_Var::LocalReadability_OLM100_Var()
	: OLM100_Var("LocalReadability","LocalReadability",39,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,31)
{
}

SensorResult LocalReadability_OLM100_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult LocalReadability_OLM100_Var::SetBasicFromString(std::string value)
{
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
	if (isNegative)
		helpInt *= -1;
	memcpy(&this->Value_, &helpInt,1);
	ret = SSBL_SUCCESS;
	return ret;
}

Temperature_OLM100_Var::Temperature_OLM100_Var()
	: OLM100_Var("Temperature","Temperature",36,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,28)
{
}

SensorResult Temperature_OLM100_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult Temperature_OLM100_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}
} // namespace OLM100_V002_003_000_Skeleton
} // namespace ssbl

