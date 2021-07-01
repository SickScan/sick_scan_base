//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2d/TiM5x1/TiM5x1_V3_17_17_09_19/include/TiM5x1_Variables.h"
#include <sstream>
#include "Base/Core/Common/include/Hash.h"
#include "Base/Logger/include/Logger.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl
{
namespace TiM5x1_V3_17_17_09_19_Skeleton
{
#define SSBL_LONG_MIN  (-2147483647L - 1)
#define SSBL_LLONG_MIN  (-9223372036854775807i64 - 1)


DataOutputRange_TiM5x1_Var::DataOutputRange_TiM5x1_Var()
	: TiM5x1_Var("DataOutputRange","LMPoutputRange",217,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,87)
{
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("diStartAngle"):
			value = this->Value_.aRange[0].diStartAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aRange[0].diStartAngle"):
			value = this->Value_.aRange[0].diStartAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("diStopAngle"):
			value = this->Value_.aRange[0].diStopAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aRange[0].diStopAngle"):
			value = this->Value_.aRange[0].diStopAngle;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("uiLength"):
			value = this->Value_.uiLength;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("udiAngleRes"):
			value = this->Value_.aRange[0].udiAngleRes;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aRange[0].udiAngleRes"):
			value = this->Value_.aRange[0].udiAngleRes;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("diStartAngle"):
			if((value >= -450000) &&  (value <= 2250000)){
				this->Value_.aRange[0].diStartAngle = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aRange[0].diStartAngle"):
			if((value >= -450000) &&  (value <= 2250000)){
				this->Value_.aRange[0].diStartAngle = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("diStopAngle"):
			if((value >= -450000) &&  (value <= 2250000)){
				this->Value_.aRange[0].diStopAngle = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aRange[0].diStopAngle"):
			if((value >= -450000) &&  (value <= 2250000)){
				this->Value_.aRange[0].diStopAngle = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("uiLength"):
			if((value >= 1) &&  (value <= 1)){
				this->Value_.uiLength = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("udiAngleRes"):
			if((value >= 3333) &&  (value <= 10000)){
				this->Value_.aRange[0].udiAngleRes = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 3333 Max: 10000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aRange[0].udiAngleRes"):
			if((value >= 3333) &&  (value <= 10000)){
				this->Value_.aRange[0].udiAngleRes = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 3333 Max: 10000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult DataOutputRange_TiM5x1_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type");
	return ret;
}

ScanData_TiM5x1_Var::ScanData_TiM5x1_Var()
	: TiM5x1_Var("ScanData","LMDscandata",230,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,90)
{
}

SensorResult ScanData_TiM5x1_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("iEncoderSpeed"):
			value = this->Value_.aEncoderBlock[0].iEncoderSpeed;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aEncoderBlock[0].iEncoderSpeed"):
			value = this->Value_.aEncoderBlock[0].iEncoderSpeed;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("aDataChannel16[0].DataChannelHdr.diStartAngle"):
			value = this->Value_.aDataChannel16[0].DataChannelHdr.diStartAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[1].DataChannelHdr.diStartAngle"):
			value = this->Value_.aDataChannel16[1].DataChannelHdr.diStartAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[0].DataChannelHdr.diStartAngle"):
			value = this->Value_.aDataChannel8[0].DataChannelHdr.diStartAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[1].DataChannelHdr.diStartAngle"):
			value = this->Value_.aDataChannel8[1].DataChannelHdr.diStartAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("diAngle"):
			value = this->Value_.aEventBlock[0].diAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aEventBlock[0].diAngle"):
			value = this->Value_.aEventBlock[0].diAngle;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("usiMonth"):
			value = this->Value_.aTimeBlock[0].DateTime.usiMonth;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.usiMonth"):
			value = this->Value_.aTimeBlock[0].DateTime.usiMonth;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("usiDay"):
			value = this->Value_.aTimeBlock[0].DateTime.usiDay;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.usiDay"):
			value = this->Value_.aTimeBlock[0].DateTime.usiDay;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("usiHour"):
			value = this->Value_.aTimeBlock[0].DateTime.usiHour;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.usiHour"):
			value = this->Value_.aTimeBlock[0].DateTime.usiHour;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("usiMinute"):
			value = this->Value_.aTimeBlock[0].DateTime.usiMinute;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.usiMinute"):
			value = this->Value_.aTimeBlock[0].DateTime.usiMinute;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("usiSec"):
			value = this->Value_.aTimeBlock[0].DateTime.usiSec;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.usiSec"):
			value = this->Value_.aTimeBlock[0].DateTime.usiSec;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("uiVersionNo"):
			value = this->Value_.uiVersionNo;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiIdent"):
			value = this->Value_.DeviceBlock.uiIdent;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("DeviceBlock.uiIdent"):
			value = this->Value_.DeviceBlock.uiIdent;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiTelegranCount"):
			value = this->Value_.StatusBlock.uiTelegranCount;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("StatusBlock.uiTelegranCount"):
			value = this->Value_.StatusBlock.uiTelegranCount;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiScanCount"):
			value = this->Value_.StatusBlock.uiScanCount;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("StatusBlock.uiScanCount"):
			value = this->Value_.StatusBlock.uiScanCount;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiReserved"):
			value = this->Value_.StatusBlock.uiReserved;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("StatusBlock.uiReserved"):
			value = this->Value_.StatusBlock.uiReserved;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiLengthaEncoderBlock"):
			value = this->Value_.uiLengthaEncoderBlock;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiLengthaDataChannel16"):
			value = this->Value_.uiLengthaDataChannel16;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[0].DataChannelHdr.uiAngleRes"):
			value = this->Value_.aDataChannel16[0].DataChannelHdr.uiAngleRes;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[0].uiLengthaData"):
			value = this->Value_.aDataChannel16[0].uiLengthaData;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[1].DataChannelHdr.uiAngleRes"):
			value = this->Value_.aDataChannel16[1].DataChannelHdr.uiAngleRes;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[1].uiLengthaData"):
			value = this->Value_.aDataChannel16[1].uiLengthaData;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiLengthaDataChannel8"):
			value = this->Value_.uiLengthaDataChannel8;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[0].DataChannelHdr.uiAngleRes"):
			value = this->Value_.aDataChannel8[0].DataChannelHdr.uiAngleRes;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[0].uiLengthaData"):
			value = this->Value_.aDataChannel8[0].uiLengthaData;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[1].DataChannelHdr.uiAngleRes"):
			value = this->Value_.aDataChannel8[1].DataChannelHdr.uiAngleRes;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[1].uiLengthaData"):
			value = this->Value_.aDataChannel8[1].uiLengthaData;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiLengthaPositionBlock"):
			value = this->Value_.uiLengthaPositionBlock;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiLengthaDeviceName"):
			value = this->Value_.uiLengthaDeviceName;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiLengthaCommentBlock"):
			value = this->Value_.uiLengthaCommentBlock;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiLengthaTimeBlock"):
			value = this->Value_.uiLengthaTimeBlock;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiYear"):
			value = this->Value_.aTimeBlock[0].DateTime.uiYear;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.uiYear"):
			value = this->Value_.aTimeBlock[0].DateTime.uiYear;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiLengthaEventBlock"):
			value = this->Value_.uiLengthaEventBlock;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("udiSerialNo"):
			value = this->Value_.DeviceBlock.udiSerialNo;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("DeviceBlock.udiSerialNo"):
			value = this->Value_.DeviceBlock.udiSerialNo;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiSystemCountScan"):
			value = this->Value_.StatusBlock.udiSystemCountScan;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("StatusBlock.udiSystemCountScan"):
			value = this->Value_.StatusBlock.udiSystemCountScan;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiSystemCountTransmit"):
			value = this->Value_.StatusBlock.udiSystemCountTransmit;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("StatusBlock.udiSystemCountTransmit"):
			value = this->Value_.StatusBlock.udiSystemCountTransmit;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiScanFreq"):
			value = this->Value_.MeasurementParam1Block.udiScanFreq;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("MeasurementParam1Block.udiScanFreq"):
			value = this->Value_.MeasurementParam1Block.udiScanFreq;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiMeasFreq"):
			value = this->Value_.MeasurementParam1Block.udiMeasFreq;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("MeasurementParam1Block.udiMeasFreq"):
			value = this->Value_.MeasurementParam1Block.udiMeasFreq;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aEncoderBlock[0].udiEncoderPos"):
			value = this->Value_.aEncoderBlock[0].udiEncoderPos;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiUSec"):
			value = this->Value_.aTimeBlock[0].DateTime.udiUSec;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.udiUSec"):
			value = this->Value_.aTimeBlock[0].DateTime.udiUSec;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aEventBlock[0].udiEncoderPos"):
			value = this->Value_.aEventBlock[0].udiEncoderPos;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiSystemCount"):
			value = this->Value_.aEventBlock[0].udiSystemCount;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aEventBlock[0].udiSystemCount"):
			value = this->Value_.aEventBlock[0].udiSystemCount;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("aDataChannel16[0].DataChannelHdr.dScaleFactor"):
			value = this->Value_.aDataChannel16[0].DataChannelHdr.dScaleFactor;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[0].DataChannelHdr.dScaleOffset"):
			value = this->Value_.aDataChannel16[0].DataChannelHdr.dScaleOffset;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[1].DataChannelHdr.dScaleFactor"):
			value = this->Value_.aDataChannel16[1].DataChannelHdr.dScaleFactor;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[1].DataChannelHdr.dScaleOffset"):
			value = this->Value_.aDataChannel16[1].DataChannelHdr.dScaleOffset;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[0].DataChannelHdr.dScaleFactor"):
			value = this->Value_.aDataChannel8[0].DataChannelHdr.dScaleFactor;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[0].DataChannelHdr.dScaleOffset"):
			value = this->Value_.aDataChannel8[0].DataChannelHdr.dScaleOffset;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[1].DataChannelHdr.dScaleFactor"):
			value = this->Value_.aDataChannel8[1].DataChannelHdr.dScaleFactor;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[1].DataChannelHdr.dScaleOffset"):
			value = this->Value_.aDataChannel8[1].DataChannelHdr.dScaleOffset;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dXpos"):
			value = this->Value_.aPositionBlock[0].dXpos;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dXpos"):
			value = this->Value_.aPositionBlock[0].dXpos;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dYpos"):
			value = this->Value_.aPositionBlock[0].dYpos;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dYpos"):
			value = this->Value_.aPositionBlock[0].dYpos;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dZpos"):
			value = this->Value_.aPositionBlock[0].dZpos;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dZpos"):
			value = this->Value_.aPositionBlock[0].dZpos;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dXrot"):
			value = this->Value_.aPositionBlock[0].dXrot;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dXrot"):
			value = this->Value_.aPositionBlock[0].dXrot;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dYrot"):
			value = this->Value_.aPositionBlock[0].dYrot;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dYrot"):
			value = this->Value_.aPositionBlock[0].dYrot;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dZrot"):
			value = this->Value_.aPositionBlock[0].dZrot;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dZrot"):
			value = this->Value_.aPositionBlock[0].dZrot;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanData_TiM5x1_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("iEncoderSpeed"):
			this->Value_.aEncoderBlock[0].iEncoderSpeed = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aEncoderBlock[0].iEncoderSpeed"):
			this->Value_.aEncoderBlock[0].iEncoderSpeed = value;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("aDataChannel16[0].DataChannelHdr.diStartAngle"):
			this->Value_.aDataChannel16[0].DataChannelHdr.diStartAngle = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[1].DataChannelHdr.diStartAngle"):
			this->Value_.aDataChannel16[1].DataChannelHdr.diStartAngle = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[0].DataChannelHdr.diStartAngle"):
			this->Value_.aDataChannel8[0].DataChannelHdr.diStartAngle = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[1].DataChannelHdr.diStartAngle"):
			this->Value_.aDataChannel8[1].DataChannelHdr.diStartAngle = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("diAngle"):
			this->Value_.aEventBlock[0].diAngle = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aEventBlock[0].diAngle"):
			this->Value_.aEventBlock[0].diAngle = value;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("usiMonth"):
			if((value >= 1) &&  (value <= 12)){
				this->Value_.aTimeBlock[0].DateTime.usiMonth = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 12");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.usiMonth"):
			if((value >= 1) &&  (value <= 12)){
				this->Value_.aTimeBlock[0].DateTime.usiMonth = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 12");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("usiDay"):
			if((value >= 1) &&  (value <= 31)){
				this->Value_.aTimeBlock[0].DateTime.usiDay = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 31");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.usiDay"):
			if((value >= 1) &&  (value <= 31)){
				this->Value_.aTimeBlock[0].DateTime.usiDay = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 31");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("usiHour"):
			if((value >= 0) &&  (value <= 23)){
				this->Value_.aTimeBlock[0].DateTime.usiHour = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 23");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.usiHour"):
			if((value >= 0) &&  (value <= 23)){
				this->Value_.aTimeBlock[0].DateTime.usiHour = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 23");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("usiMinute"):
			if((value >= 0) &&  (value <= 59)){
				this->Value_.aTimeBlock[0].DateTime.usiMinute = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 59");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.usiMinute"):
			if((value >= 0) &&  (value <= 59)){
				this->Value_.aTimeBlock[0].DateTime.usiMinute = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 59");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("usiSec"):
			if((value >= 0) &&  (value <= 59)){
				this->Value_.aTimeBlock[0].DateTime.usiSec = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 59");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.usiSec"):
			if((value >= 0) &&  (value <= 59)){
				this->Value_.aTimeBlock[0].DateTime.usiSec = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 59");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("uiVersionNo"):
			this->Value_.uiVersionNo = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiIdent"):
			this->Value_.DeviceBlock.uiIdent = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("DeviceBlock.uiIdent"):
			this->Value_.DeviceBlock.uiIdent = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiTelegranCount"):
			this->Value_.StatusBlock.uiTelegranCount = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("StatusBlock.uiTelegranCount"):
			this->Value_.StatusBlock.uiTelegranCount = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiScanCount"):
			this->Value_.StatusBlock.uiScanCount = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("StatusBlock.uiScanCount"):
			this->Value_.StatusBlock.uiScanCount = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiReserved"):
			this->Value_.StatusBlock.uiReserved = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("StatusBlock.uiReserved"):
			this->Value_.StatusBlock.uiReserved = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("uiLengthaEncoderBlock"):
			if((value >= 1) &&  (value <= 1)){
				this->Value_.uiLengthaEncoderBlock = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("uiLengthaDataChannel16"):
			if((value >= 2) &&  (value <= 2)){
				this->Value_.uiLengthaDataChannel16 = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 2 Max: 2");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aDataChannel16[0].DataChannelHdr.uiAngleRes"):
			this->Value_.aDataChannel16[0].DataChannelHdr.uiAngleRes = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[0].uiLengthaData"):
			if((value >= 811) &&  (value <= 811)){
				this->Value_.aDataChannel16[0].uiLengthaData = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 811 Max: 811");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aDataChannel16[1].DataChannelHdr.uiAngleRes"):
			this->Value_.aDataChannel16[1].DataChannelHdr.uiAngleRes = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[1].uiLengthaData"):
			if((value >= 811) &&  (value <= 811)){
				this->Value_.aDataChannel16[1].uiLengthaData = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 811 Max: 811");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("uiLengthaDataChannel8"):
			if((value >= 2) &&  (value <= 2)){
				this->Value_.uiLengthaDataChannel8 = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 2 Max: 2");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aDataChannel8[0].DataChannelHdr.uiAngleRes"):
			this->Value_.aDataChannel8[0].DataChannelHdr.uiAngleRes = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[0].uiLengthaData"):
			if((value >= 811) &&  (value <= 811)){
				this->Value_.aDataChannel8[0].uiLengthaData = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 811 Max: 811");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aDataChannel8[1].DataChannelHdr.uiAngleRes"):
			this->Value_.aDataChannel8[1].DataChannelHdr.uiAngleRes = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[1].uiLengthaData"):
			if((value >= 811) &&  (value <= 811)){
				this->Value_.aDataChannel8[1].uiLengthaData = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 811 Max: 811");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("uiLengthaPositionBlock"):
			if((value >= 1) &&  (value <= 1)){
				this->Value_.uiLengthaPositionBlock = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("uiLengthaDeviceName"):
			if((value >= 1) &&  (value <= 1)){
				this->Value_.uiLengthaDeviceName = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("uiLengthaCommentBlock"):
			if((value >= 1) &&  (value <= 1)){
				this->Value_.uiLengthaCommentBlock = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("uiLengthaTimeBlock"):
			if((value >= 1) &&  (value <= 1)){
				this->Value_.uiLengthaTimeBlock = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("uiYear"):
			if((value >= 0) &&  (value <= 9999)){
				this->Value_.aTimeBlock[0].DateTime.uiYear = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 9999");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.uiYear"):
			if((value >= 0) &&  (value <= 9999)){
				this->Value_.aTimeBlock[0].DateTime.uiYear = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 9999");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("uiLengthaEventBlock"):
			if((value >= 1) &&  (value <= 1)){
				this->Value_.uiLengthaEventBlock = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("udiSerialNo"):
			this->Value_.DeviceBlock.udiSerialNo = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("DeviceBlock.udiSerialNo"):
			this->Value_.DeviceBlock.udiSerialNo = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiSystemCountScan"):
			this->Value_.StatusBlock.udiSystemCountScan = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("StatusBlock.udiSystemCountScan"):
			this->Value_.StatusBlock.udiSystemCountScan = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiSystemCountTransmit"):
			this->Value_.StatusBlock.udiSystemCountTransmit = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("StatusBlock.udiSystemCountTransmit"):
			this->Value_.StatusBlock.udiSystemCountTransmit = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiScanFreq"):
			this->Value_.MeasurementParam1Block.udiScanFreq = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("MeasurementParam1Block.udiScanFreq"):
			this->Value_.MeasurementParam1Block.udiScanFreq = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiMeasFreq"):
			this->Value_.MeasurementParam1Block.udiMeasFreq = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("MeasurementParam1Block.udiMeasFreq"):
			this->Value_.MeasurementParam1Block.udiMeasFreq = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aEncoderBlock[0].udiEncoderPos"):
			this->Value_.aEncoderBlock[0].udiEncoderPos = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiUSec"):
			if((value >= 0) &&  (value <= 999999)){
				this->Value_.aTimeBlock[0].DateTime.udiUSec = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 999999");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aTimeBlock[0].DateTime.udiUSec"):
			if((value >= 0) &&  (value <= 999999)){
				this->Value_.aTimeBlock[0].DateTime.udiUSec = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 0 Max: 999999");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("aEventBlock[0].udiEncoderPos"):
			this->Value_.aEventBlock[0].udiEncoderPos = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiSystemCount"):
			this->Value_.aEventBlock[0].udiSystemCount = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aEventBlock[0].udiSystemCount"):
			this->Value_.aEventBlock[0].udiSystemCount = value;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("aDataChannel16[0].DataChannelHdr.dScaleFactor"):
			this->Value_.aDataChannel16[0].DataChannelHdr.dScaleFactor = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[0].DataChannelHdr.dScaleOffset"):
			this->Value_.aDataChannel16[0].DataChannelHdr.dScaleOffset = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[1].DataChannelHdr.dScaleFactor"):
			this->Value_.aDataChannel16[1].DataChannelHdr.dScaleFactor = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel16[1].DataChannelHdr.dScaleOffset"):
			this->Value_.aDataChannel16[1].DataChannelHdr.dScaleOffset = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[0].DataChannelHdr.dScaleFactor"):
			this->Value_.aDataChannel8[0].DataChannelHdr.dScaleFactor = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[0].DataChannelHdr.dScaleOffset"):
			this->Value_.aDataChannel8[0].DataChannelHdr.dScaleOffset = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[1].DataChannelHdr.dScaleFactor"):
			this->Value_.aDataChannel8[1].DataChannelHdr.dScaleFactor = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aDataChannel8[1].DataChannelHdr.dScaleOffset"):
			this->Value_.aDataChannel8[1].DataChannelHdr.dScaleOffset = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dXpos"):
			this->Value_.aPositionBlock[0].dXpos = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dXpos"):
			this->Value_.aPositionBlock[0].dXpos = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dYpos"):
			this->Value_.aPositionBlock[0].dYpos = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dYpos"):
			this->Value_.aPositionBlock[0].dYpos = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dZpos"):
			this->Value_.aPositionBlock[0].dZpos = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dZpos"):
			this->Value_.aPositionBlock[0].dZpos = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dXrot"):
			this->Value_.aPositionBlock[0].dXrot = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dXrot"):
			this->Value_.aPositionBlock[0].dXrot = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dYrot"):
			this->Value_.aPositionBlock[0].dYrot = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dYrot"):
			this->Value_.aPositionBlock[0].dYrot = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("dZrot"):
			this->Value_.aPositionBlock[0].dZrot = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("aPositionBlock[0].dZrot"):
			this->Value_.aPositionBlock[0].dZrot = value;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult ScanData_TiM5x1_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type");
	return ret;
}

EtherHostCoLaDialect_TiM5x1_Var::EtherHostCoLaDialect_TiM5x1_Var()
	: TiM5x1_Var("EtherHostCoLaDialect","EIHstCola",110,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,-1)
{
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult EtherHostCoLaDialect_TiM5x1_Var::SetBasicFromString(std::string value)
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

ScanConfig_TiM5x1_Var::ScanConfig_TiM5x1_Var()
	: TiM5x1_Var("ScanConfig","LMPscancfg",215,READ_WRITE,LEVEL_RUN,LEVEL_DEVELOPER,85)
{
}

SensorResult ScanConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("diStartAngle"):
			value = this->Value_.ScanRange.aRange[0].diStartAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("ScanRange.aRange[0].diStartAngle"):
			value = this->Value_.ScanRange.aRange[0].diStartAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("diStopAngle"):
			value = this->Value_.ScanRange.aRange[0].diStopAngle;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("ScanRange.aRange[0].diStopAngle"):
			value = this->Value_.ScanRange.aRange[0].diStopAngle;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("uiLength"):
			value = this->Value_.ScanRange.uiLength;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("ScanRange.uiLength"):
			value = this->Value_.ScanRange.uiLength;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("udiScanFreq"):
			value = this->Value_.udiScanFreq;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("udiAngleRes"):
			value = this->Value_.ScanRange.aRange[0].udiAngleRes;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("ScanRange.aRange[0].udiAngleRes"):
			value = this->Value_.ScanRange.aRange[0].udiAngleRes;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("diStartAngle"):
			if((value >= -450000) &&  (value <= 2250000)){
				this->Value_.ScanRange.aRange[0].diStartAngle = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("ScanRange.aRange[0].diStartAngle"):
			if((value >= -450000) &&  (value <= 2250000)){
				this->Value_.ScanRange.aRange[0].diStartAngle = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("diStopAngle"):
			if((value >= -450000) &&  (value <= 2250000)){
				this->Value_.ScanRange.aRange[0].diStopAngle = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("ScanRange.aRange[0].diStopAngle"):
			if((value >= -450000) &&  (value <= 2250000)){
				this->Value_.ScanRange.aRange[0].diStopAngle = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: -450000 Max: 2250000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("uiLength"):
			if((value >= 1) &&  (value <= 1)){
				this->Value_.ScanRange.uiLength = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("ScanRange.uiLength"):
			if((value >= 1) &&  (value <= 1)){
				this->Value_.ScanRange.uiLength = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 1");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("udiScanFreq"):
			if((value >= 1500) &&  (value <= 1500)){
				this->Value_.udiScanFreq = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1500 Max: 1500");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("udiAngleRes"):
			if((value >= 3333) &&  (value <= 10000)){
				this->Value_.ScanRange.aRange[0].udiAngleRes = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 3333 Max: 10000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		case hash_64_fnv1a_const("ScanRange.aRange[0].udiAngleRes"):
			if((value >= 3333) &&  (value <= 10000)){
				this->Value_.ScanRange.aRange[0].udiAngleRes = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 3333 Max: 10000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult ScanConfig_TiM5x1_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type");
	return ret;
}

ScanDataConfig_TiM5x1_Var::ScanDataConfig_TiM5x1_Var()
	: TiM5x1_Var("ScanDataConfig","LMDscandatacfg",212,READ_WRITE,LEVEL_RUN,LEVEL_AUTHORIZED_CLIENT,-1)
{
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("bEnable"):
			value = this->Value_.RemDataConfig.bEnable;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("RemDataConfig.bEnable"):
			value = this->Value_.RemDataConfig.bEnable;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("eDataType"):
			value = this->Value_.RemDataConfig.eDataType;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("RemDataConfig.eDataType"):
			value = this->Value_.RemDataConfig.eDataType;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("eContentType"):
			value = this->Value_.RemDataConfig.eContentType;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("RemDataConfig.eContentType"):
			value = this->Value_.RemDataConfig.eContentType;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("bEnablePositionBlock"):
			value = this->Value_.bEnablePositionBlock;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("bEnableDeviceName"):
			value = this->Value_.bEnableDeviceName;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("bEnableCommentBlock"):
			value = this->Value_.bEnableCommentBlock;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("bEnableTimeBlock"):
			value = this->Value_.bEnableTimeBlock;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("uiOutputInterval"):
			value = this->Value_.uiOutputInterval;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("bEnable"):
			this->Value_.RemDataConfig.bEnable = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("RemDataConfig.bEnable"):
			this->Value_.RemDataConfig.bEnable = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("eDataType"):
			this->Value_.RemDataConfig.eDataType = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("RemDataConfig.eDataType"):
			this->Value_.RemDataConfig.eDataType = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("eContentType"):
			this->Value_.RemDataConfig.eContentType = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("RemDataConfig.eContentType"):
			this->Value_.RemDataConfig.eContentType = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("bEnablePositionBlock"):
			this->Value_.bEnablePositionBlock = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("bEnableDeviceName"):
			this->Value_.bEnableDeviceName = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("bEnableCommentBlock"):
			this->Value_.bEnableCommentBlock = value;
			ret = SSBL_SUCCESS;
			break;
		case hash_64_fnv1a_const("bEnableTimeBlock"):
			this->Value_.bEnableTimeBlock = value;
			ret = SSBL_SUCCESS;
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	uint64_t test = hash_64_fnv1a(elementName.c_str(), elementName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("uiOutputInterval"):
			if((value >= 1) &&  (value <= 50000)){
				this->Value_.uiOutputInterval = value;
				ret = SSBL_SUCCESS;
			} else {
				SSBL_LOG_WARNING("Value is out of range. Min: 1 Max: 50000");
				ret = SSBL_ERR_VALUE_OUT_OF_RANGE;
			}
			break;
		default:
			SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
			ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
			break;
	}
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult ScanDataConfig_TiM5x1_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type");
	return ret;
}

SCdevicestate_TiM5x1_Var::SCdevicestate_TiM5x1_Var()
	: TiM5x1_Var("SCdevicestate","SCdevicestate",10,READ_ONLY,LEVEL_RUN,LEVEL_INVALID,1)
{
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	ret = SSBL_SUCCESS;
	value = this->Value_;
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	this->Value_ = value;
	ret = SSBL_SUCCESS;
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult SCdevicestate_TiM5x1_Var::SetBasicFromString(std::string value)
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

OrderNumber_TiM5x1_Var::OrderNumber_TiM5x1_Var()
	: TiM5x1_Var("OrderNumber","DIornr",371,READ_WRITE,LEVEL_RUN,LEVEL_PRODUCTION,-1)
{
}

SensorResult OrderNumber_TiM5x1_Var::GetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int8_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int16_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int32_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type int64_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint8_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint16_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint32_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type uint64_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type float");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::GetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable not of type double");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicElement(const std::string& elementName, int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasic(int8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int8_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicElement(const std::string& elementName, int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasic(int16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int16_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicElement(const std::string& elementName, int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasic(int32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int32_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicElement(const std::string& elementName, int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type int64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasic(int64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of int64_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint8_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasic(uint8_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint8_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint16_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasic(uint16_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint16_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint32_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasic(uint32_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint32_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicElement(const std::string& elementName, uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type uint64_t, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasic(uint64_t& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of uint64_t");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicElement(const std::string& elementName, float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type float, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasic(float& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of float");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicElement(const std::string& elementName, double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(elementName);
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable does either not contain element %s of type double, or the address string does not yield an unique element.", elementName.c_str());
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasic(double& value) 
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type of double");
	return ret;
}

SensorResult OrderNumber_TiM5x1_Var::SetBasicFromString(std::string value)
{
	SensorResult ret = SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND;
	SSBL_UNUSED(value);
	SSBL_LOG_WARNING("Variable is not a simple type");
	return ret;
}
} // namespace TiM5x1_V3_17_17_09_19_Skeleton
} // namespace ssbl

