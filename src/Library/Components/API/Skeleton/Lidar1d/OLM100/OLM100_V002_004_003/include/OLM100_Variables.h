//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include <cstring>
#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_004_003/include/OLM100_Types.h"
#include "Base/Core/Sensor/include/Common/SensorVariable.h"
#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_004_003/include/OLM100_CoLa_Extension.h"

namespace ssbl
{
namespace OLM100_V002_004_003_Skeleton
{
template <class T>
class OLM100_Var : public SensorVariable
{
public:
	OLM100_Var(		std::string name,
		std::string comName,
		uint16_t idx,
		VariableDirection rwDir,
		AccessLevel readAccessLvl,
		AccessLevel writeAccessLvl,
		int32_t eventIdx) : SensorVariable(name, comName, idx, rwDir, readAccessLvl, writeAccessLvl, eventIdx) {};
	~OLM100_Var(){};
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<OLM100_CoLaBSerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
			break;
		default:
			break;
		}
		return *pOffset;
	}
	uint32_t DeserializeContent(Deserializer* pDes, uint8_t* pSrc)
	{
		uint32_t offset=0;
		switch (pDes->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<OLM100_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	size_t Size(void){return sizeof(T);};
	SensorResult		GetRaw(uint8_t * pDest)
	{
		if(NULL == pDest)
			return SSBL_ERR_INVALID_ARGUMENT;
		memcpy(pDest, &this->Value_,sizeof(T) );
		return SSBL_SUCCESS;
	}
	template <class C>
	SensorResult CopyElement(C & src, C & dest) {
		std::memcpy(&dest, &src, sizeof(C));
		return SSBL_SUCCESS;
	}
	virtual SensorResult GetBasicElement(const std::string& elementName, int8_t& value) = 0;
	virtual SensorResult GetBasicElement(const std::string& elementName, int16_t& value) = 0;
	virtual SensorResult GetBasicElement(const std::string& elementName, int32_t& value) = 0;
	virtual SensorResult GetBasicElement(const std::string& elementName, int64_t& value) = 0;
	virtual SensorResult GetBasicElement(const std::string& elementName, uint8_t& value) = 0;
	virtual SensorResult GetBasicElement(const std::string& elementName, uint16_t& value) = 0;
	virtual SensorResult GetBasicElement(const std::string& elementName, uint32_t& value) = 0;
	virtual SensorResult GetBasicElement(const std::string& elementName, uint64_t& value) = 0;
	virtual SensorResult GetBasicElement(const std::string& elementName, float& value) = 0;
	virtual SensorResult GetBasicElement(const std::string& elementName, double& value) = 0;
	T Value_;
};

class PositionData_OLM100_Var : public OLM100_Var<int32_t>
{
public:
	PositionData_OLM100_Var();
	~PositionData_OLM100_Var(){};
	ComObj* Clone() { return new PositionData_OLM100_Var(*this); }
	static SensorVariable* Create() { return new PositionData_OLM100_Var; }
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
	SensorResult SetBasicFromString(std::string value);	SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
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

class Speed_OLM100_Var : public OLM100_Var<int16_t>
{
public:
	Speed_OLM100_Var();
	~Speed_OLM100_Var(){};
	ComObj* Clone() { return new Speed_OLM100_Var(*this); }
	static SensorVariable* Create() { return new Speed_OLM100_Var; }
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
	SensorResult SetBasicFromString(std::string value);	SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
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

class Acceleration_OLM100_Var : public OLM100_Var<int16_t>
{
public:
	Acceleration_OLM100_Var();
	~Acceleration_OLM100_Var(){};
	ComObj* Clone() { return new Acceleration_OLM100_Var(*this); }
	static SensorVariable* Create() { return new Acceleration_OLM100_Var; }
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
	SensorResult SetBasicFromString(std::string value);	SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
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

class GeneralReadability_OLM100_Var : public OLM100_Var<uint8_t>
{
public:
	GeneralReadability_OLM100_Var();
	~GeneralReadability_OLM100_Var(){};
	ComObj* Clone() { return new GeneralReadability_OLM100_Var(*this); }
	static SensorVariable* Create() { return new GeneralReadability_OLM100_Var; }
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
	SensorResult SetBasicFromString(std::string value);	SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
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

class LocalReadability_OLM100_Var : public OLM100_Var<uint8_t>
{
public:
	LocalReadability_OLM100_Var();
	~LocalReadability_OLM100_Var(){};
	ComObj* Clone() { return new LocalReadability_OLM100_Var(*this); }
	static SensorVariable* Create() { return new LocalReadability_OLM100_Var; }
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
	SensorResult SetBasicFromString(std::string value);	SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
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

class Temperature_OLM100_Var : public OLM100_Var<int16_t>
{
public:
	Temperature_OLM100_Var();
	~Temperature_OLM100_Var(){};
	ComObj* Clone() { return new Temperature_OLM100_Var(*this); }
	static SensorVariable* Create() { return new Temperature_OLM100_Var; }
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
	SensorResult SetBasicFromString(std::string value);	SensorResult SetBasicElement(const std::string& elementName, int8_t& value);
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

} // namespace OLM100_V002_004_003_Skeleton
} // namespace ssbl

