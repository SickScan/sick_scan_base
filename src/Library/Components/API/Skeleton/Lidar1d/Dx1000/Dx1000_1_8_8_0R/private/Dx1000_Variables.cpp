//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_Variables.h"
#include <sstream>
#include "Base/Core/Common/include/Hash.h"
#include "Base/Logger/include/Logger.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
#define SSBL_LONG_MIN  (-2147483647L - 1)
#define SSBL_LLONG_MIN  (-9223372036854775807i64 - 1)


Distance_Dx1000_Var::Distance_Dx1000_Var()
	: Dx1000_Var("Distance","Distance",428,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,-1)
{
}

SensorResult Distance_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult Distance_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

Velocity_Dx1000_Var::Velocity_Dx1000_Var()
	: Dx1000_Var("Velocity","Velocity",430,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,-1)
{
}

SensorResult Velocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult Velocity_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

RSSI_Dx1000_Var::RSSI_Dx1000_Var()
	: Dx1000_Var("RSSI","RSSI",431,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,182)
{
}

SensorResult RSSI_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult RSSI_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

BridgingActive_Dx1000_Var::BridgingActive_Dx1000_Var()
	: Dx1000_Var("BridgingActive","BridgingActive",432,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,-1)
{
}

SensorResult BridgingActive_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult BridgingActive_Dx1000_Var::SetBasicFromString(std::string value)
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

SCdevicestate_Dx1000_Var::SCdevicestate_Dx1000_Var()
	: Dx1000_Var("SCdevicestate","SCdevicestate",17,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,1)
{
}

SensorResult SCdevicestate_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult SCdevicestate_Dx1000_Var::SetBasicFromString(std::string value)
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

OrderNumber_Dx1000_Var::OrderNumber_Dx1000_Var()
	: Dx1000_Var("OrderNumber","OrdNum",11,READ_WRITE,LEVEL_RUN,LEVEL_PRODUCTION,-1)
{
}

SensorResult OrderNumber_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult OrderNumber_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type");
	return ret;
}

roiStart_Dx1000_Var::roiStart_Dx1000_Var()
	: Dx1000_Var("roiStart","roiStart",406,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,163)
{
}

SensorResult roiStart_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	if((value >= 100) &&  (value <= 1500000)){
		this->Value_ = value;
		ret = SSBL_SUCCESS;
	}
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult roiStart_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

roiEnd_Dx1000_Var::roiEnd_Dx1000_Var()
	: Dx1000_Var("roiEnd","roiEnd",407,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,164)
{
}

SensorResult roiEnd_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	if((value >= 100) &&  (value <= 1500000)){
		this->Value_ = value;
		ret = SSBL_SUCCESS;
	}
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult roiEnd_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

roiMinLevel_Dx1000_Var::roiMinLevel_Dx1000_Var()
	: Dx1000_Var("roiMinLevel","roiMinLevel",408,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,165)
{
}

SensorResult roiMinLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	if((value >= 0) &&  (value <= 16383)){
		this->Value_ = value;
		ret = SSBL_SUCCESS;
	}
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult roiMinLevel_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

roiMaxLevel_Dx1000_Var::roiMaxLevel_Dx1000_Var()
	: Dx1000_Var("roiMaxLevel","roiMaxLevel",409,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,166)
{
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	if((value >= 0) &&  (value <= 16383)){
		this->Value_ = value;
		ret = SSBL_SUCCESS;
	}
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult roiMaxLevel_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

rainSnowFilterSetting_Dx1000_Var::rainSnowFilterSetting_Dx1000_Var()
	: Dx1000_Var("rainSnowFilterSetting","rainSnowFilterSetting",410,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,167)
{
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult rainSnowFilterSetting_Dx1000_Var::SetBasicFromString(std::string value)
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

echoSeletionMode_Dx1000_Var::echoSeletionMode_Dx1000_Var()
	: Dx1000_Var("echoSeletionMode","echoSeletionMode",411,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,168)
{
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult echoSeletionMode_Dx1000_Var::SetBasicFromString(std::string value)
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

filterSelection_Dx1000_Var::filterSelection_Dx1000_Var()
	: Dx1000_Var("filterSelection","filterSelection",413,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,170)
{
}

SensorResult filterSelection_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult filterSelection_Dx1000_Var::SetBasicFromString(std::string value)
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

filterDepth_Dx1000_Var::filterDepth_Dx1000_Var()
	: Dx1000_Var("filterDepth","filterDepth",414,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,171)
{
}

SensorResult filterDepth_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	if((value >= 1) &&  (value <= 1023)){
		this->Value_ = value;
		ret = SSBL_SUCCESS;
	}
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult filterDepth_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

noEchoOutputMode_Dx1000_Var::noEchoOutputMode_Dx1000_Var()
	: Dx1000_Var("noEchoOutputMode","noEchoOutputMode",416,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,173)
{
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult noEchoOutputMode_Dx1000_Var::SetBasicFromString(std::string value)
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

offset_Dx1000_Var::offset_Dx1000_Var()
	: Dx1000_Var("offset","offset",419,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,176)
{
}

SensorResult offset_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	if((value >= -4500000) &&  (value <= 4500000)){
		this->Value_ = value;
		ret = SSBL_SUCCESS;
	}
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult offset_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

noEchoOutputDistance_Dx1000_Var::noEchoOutputDistance_Dx1000_Var()
	: Dx1000_Var("noEchoOutputDistance","noEchoOutputDistance",420,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,177)
{
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	if((value >= -6096000) &&  (value <= 6096000)){
		this->Value_ = value;
		ret = SSBL_SUCCESS;
	}
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult noEchoOutputDistance_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

noEchoOutputVelocity_Dx1000_Var::noEchoOutputVelocity_Dx1000_Var()
	: Dx1000_Var("noEchoOutputVelocity","noEchoOutputVelocity",421,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,178)
{
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	if((value >= -20000) &&  (value <= 20000)){
		this->Value_ = value;
		ret = SSBL_SUCCESS;
	}
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult noEchoOutputVelocity_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

errorOutputDistance_Dx1000_Var::errorOutputDistance_Dx1000_Var()
	: Dx1000_Var("errorOutputDistance","errorOutputDistance",422,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,179)
{
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	if((value >= -6096000) &&  (value <= 6096000)){
		this->Value_ = value;
		ret = SSBL_SUCCESS;
	}
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult errorOutputDistance_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

errorOutputVelocity_Dx1000_Var::errorOutputVelocity_Dx1000_Var()
	: Dx1000_Var("errorOutputVelocity","errorOutputVelocity",423,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,180)
{
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	if((value >= -20000) &&  (value <= 20000)){
		this->Value_ = value;
		ret = SSBL_SUCCESS;
	}
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult errorOutputVelocity_Dx1000_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	std::stringstream s(value);
	s>> this->Value_;
	ret = SSBL_SUCCESS;
	return ret;
}

acquisitionTime_Dx1000_Var::acquisitionTime_Dx1000_Var()
	: Dx1000_Var("acquisitionTime","acquisitionTime",215,READ_WRITE,LEVEL_AUTHORIZED_CLIENT,LEVEL_AUTHORIZED_CLIENT,110)
{
}

SensorResult acquisitionTime_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult acquisitionTime_Dx1000_Var::SetBasicFromString(std::string value)
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

fogFilter_Dx1000_Var::fogFilter_Dx1000_Var()
	: Dx1000_Var("fogFilter","fogFilter",217,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,111)
{
}

SensorResult fogFilter_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult fogFilter_Dx1000_Var::SetBasicFromString(std::string value)
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

laserState_Dx1000_Var::laserState_Dx1000_Var()
	: Dx1000_Var("laserState","laserState",196,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,96)
{
}

SensorResult laserState_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult laserState_Dx1000_Var::SetBasicFromString(std::string value)
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

pilotState_Dx1000_Var::pilotState_Dx1000_Var()
	: Dx1000_Var("pilotState","pilotState",197,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,97)
{
}

SensorResult pilotState_Dx1000_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult pilotState_Dx1000_Var::SetBasicFromString(std::string value)
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
} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl

