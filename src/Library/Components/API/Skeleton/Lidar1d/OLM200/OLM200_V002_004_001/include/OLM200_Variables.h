//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include <cstring>
#include "API/Skeleton/Lidar1d/OLM200/OLM200_V002_004_001/include/OLM200_Types.h"
#include "Base/Core/Sensor/include/Common/SensorVariable.h"
#include "API/Skeleton/Lidar1d/OLM200/OLM200_V002_004_001/include/OLM200_CoLa_Extension.h"

namespace ssbl
{
namespace OLM200_V002_004_001_Skeleton
{
template <class T>
class OLM200_Var : public SensorVariable
{
public:
	OLM200_Var(		std::string name,
		std::string comName,
		uint16_t idx,
		VariableDirection rwDir,
		AccessLevel readAccessLvl,
		AccessLevel writeAccessLvl,
		int32_t eventIdx) : SensorVariable(name, comName, idx, rwDir, readAccessLvl, writeAccessLvl, eventIdx) {};
	~OLM200_Var(){};
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<OLM200_CoLaBSerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
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
			(reinterpret_cast<OLM200_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
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
	virtual ComObj* Clone() const = 0;
	T Value_;
};

class PositionData_OLM200_Var : public OLM200_Var<int32_t>
{
public:
	PositionData_OLM200_Var();
	~PositionData_OLM200_Var(){};
	ComObj* Clone() const override { return new PositionData_OLM200_Var(*this);}
	static SensorVariable* Create() { return new PositionData_OLM200_Var; }
	SensorResult GetBasic(int8_t& value) override;
	SensorResult GetBasic(int16_t& value) override;
	SensorResult GetBasic(int32_t& value) override;
	SensorResult GetBasic(int64_t& value) override;
	SensorResult GetBasic(uint8_t& value) override;
	SensorResult GetBasic(uint16_t& value) override;
	SensorResult GetBasic(uint32_t& value) override;
	SensorResult GetBasic(uint64_t& value) override;
	SensorResult GetBasic(float& value) override;
	SensorResult GetBasic(double& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, float& value) override;
	SensorResult GetBasicElement(const std::string& elementName, double& value) override;
	SensorResult SetBasic(int8_t& value) override;
	SensorResult SetBasic(int16_t& value) override;
	SensorResult SetBasic(int32_t& value) override;
	SensorResult SetBasic(int64_t& value) override;
	SensorResult SetBasic(uint8_t& value) override;
	SensorResult SetBasic(uint16_t& value) override;
	SensorResult SetBasic(uint32_t& value) override;
	SensorResult SetBasic(uint64_t& value) override;
	SensorResult SetBasic(float& value) override;
	SensorResult SetBasic(double& value) override;
	SensorResult SetBasicFromString(std::string value) override;
	SensorResult SetBasicElement(const std::string& elementName, int8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, float& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, double& value)  override;
};

class Speed_OLM200_Var : public OLM200_Var<int32_t>
{
public:
	Speed_OLM200_Var();
	~Speed_OLM200_Var(){};
	ComObj* Clone() const override { return new Speed_OLM200_Var(*this);}
	static SensorVariable* Create() { return new Speed_OLM200_Var; }
	SensorResult GetBasic(int8_t& value) override;
	SensorResult GetBasic(int16_t& value) override;
	SensorResult GetBasic(int32_t& value) override;
	SensorResult GetBasic(int64_t& value) override;
	SensorResult GetBasic(uint8_t& value) override;
	SensorResult GetBasic(uint16_t& value) override;
	SensorResult GetBasic(uint32_t& value) override;
	SensorResult GetBasic(uint64_t& value) override;
	SensorResult GetBasic(float& value) override;
	SensorResult GetBasic(double& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, float& value) override;
	SensorResult GetBasicElement(const std::string& elementName, double& value) override;
	SensorResult SetBasic(int8_t& value) override;
	SensorResult SetBasic(int16_t& value) override;
	SensorResult SetBasic(int32_t& value) override;
	SensorResult SetBasic(int64_t& value) override;
	SensorResult SetBasic(uint8_t& value) override;
	SensorResult SetBasic(uint16_t& value) override;
	SensorResult SetBasic(uint32_t& value) override;
	SensorResult SetBasic(uint64_t& value) override;
	SensorResult SetBasic(float& value) override;
	SensorResult SetBasic(double& value) override;
	SensorResult SetBasicFromString(std::string value) override;
	SensorResult SetBasicElement(const std::string& elementName, int8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, float& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, double& value)  override;
};

class Acceleration_OLM200_Var : public OLM200_Var<int32_t>
{
public:
	Acceleration_OLM200_Var();
	~Acceleration_OLM200_Var(){};
	ComObj* Clone() const override { return new Acceleration_OLM200_Var(*this);}
	static SensorVariable* Create() { return new Acceleration_OLM200_Var; }
	SensorResult GetBasic(int8_t& value) override;
	SensorResult GetBasic(int16_t& value) override;
	SensorResult GetBasic(int32_t& value) override;
	SensorResult GetBasic(int64_t& value) override;
	SensorResult GetBasic(uint8_t& value) override;
	SensorResult GetBasic(uint16_t& value) override;
	SensorResult GetBasic(uint32_t& value) override;
	SensorResult GetBasic(uint64_t& value) override;
	SensorResult GetBasic(float& value) override;
	SensorResult GetBasic(double& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, float& value) override;
	SensorResult GetBasicElement(const std::string& elementName, double& value) override;
	SensorResult SetBasic(int8_t& value) override;
	SensorResult SetBasic(int16_t& value) override;
	SensorResult SetBasic(int32_t& value) override;
	SensorResult SetBasic(int64_t& value) override;
	SensorResult SetBasic(uint8_t& value) override;
	SensorResult SetBasic(uint16_t& value) override;
	SensorResult SetBasic(uint32_t& value) override;
	SensorResult SetBasic(uint64_t& value) override;
	SensorResult SetBasic(float& value) override;
	SensorResult SetBasic(double& value) override;
	SensorResult SetBasicFromString(std::string value) override;
	SensorResult SetBasicElement(const std::string& elementName, int8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, float& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, double& value)  override;
};

class GeneralReadability_OLM200_Var : public OLM200_Var<uint8_t>
{
public:
	GeneralReadability_OLM200_Var();
	~GeneralReadability_OLM200_Var(){};
	ComObj* Clone() const override { return new GeneralReadability_OLM200_Var(*this);}
	static SensorVariable* Create() { return new GeneralReadability_OLM200_Var; }
	SensorResult GetBasic(int8_t& value) override;
	SensorResult GetBasic(int16_t& value) override;
	SensorResult GetBasic(int32_t& value) override;
	SensorResult GetBasic(int64_t& value) override;
	SensorResult GetBasic(uint8_t& value) override;
	SensorResult GetBasic(uint16_t& value) override;
	SensorResult GetBasic(uint32_t& value) override;
	SensorResult GetBasic(uint64_t& value) override;
	SensorResult GetBasic(float& value) override;
	SensorResult GetBasic(double& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, float& value) override;
	SensorResult GetBasicElement(const std::string& elementName, double& value) override;
	SensorResult SetBasic(int8_t& value) override;
	SensorResult SetBasic(int16_t& value) override;
	SensorResult SetBasic(int32_t& value) override;
	SensorResult SetBasic(int64_t& value) override;
	SensorResult SetBasic(uint8_t& value) override;
	SensorResult SetBasic(uint16_t& value) override;
	SensorResult SetBasic(uint32_t& value) override;
	SensorResult SetBasic(uint64_t& value) override;
	SensorResult SetBasic(float& value) override;
	SensorResult SetBasic(double& value) override;
	SensorResult SetBasicFromString(std::string value) override;
	SensorResult SetBasicElement(const std::string& elementName, int8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, float& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, double& value)  override;
};

class LocalReadability_OLM200_Var : public OLM200_Var<uint8_t>
{
public:
	LocalReadability_OLM200_Var();
	~LocalReadability_OLM200_Var(){};
	ComObj* Clone() const override { return new LocalReadability_OLM200_Var(*this);}
	static SensorVariable* Create() { return new LocalReadability_OLM200_Var; }
	SensorResult GetBasic(int8_t& value) override;
	SensorResult GetBasic(int16_t& value) override;
	SensorResult GetBasic(int32_t& value) override;
	SensorResult GetBasic(int64_t& value) override;
	SensorResult GetBasic(uint8_t& value) override;
	SensorResult GetBasic(uint16_t& value) override;
	SensorResult GetBasic(uint32_t& value) override;
	SensorResult GetBasic(uint64_t& value) override;
	SensorResult GetBasic(float& value) override;
	SensorResult GetBasic(double& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, float& value) override;
	SensorResult GetBasicElement(const std::string& elementName, double& value) override;
	SensorResult SetBasic(int8_t& value) override;
	SensorResult SetBasic(int16_t& value) override;
	SensorResult SetBasic(int32_t& value) override;
	SensorResult SetBasic(int64_t& value) override;
	SensorResult SetBasic(uint8_t& value) override;
	SensorResult SetBasic(uint16_t& value) override;
	SensorResult SetBasic(uint32_t& value) override;
	SensorResult SetBasic(uint64_t& value) override;
	SensorResult SetBasic(float& value) override;
	SensorResult SetBasic(double& value) override;
	SensorResult SetBasicFromString(std::string value) override;
	SensorResult SetBasicElement(const std::string& elementName, int8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, float& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, double& value)  override;
};

class Temperature_OLM200_Var : public OLM200_Var<int16_t>
{
public:
	Temperature_OLM200_Var();
	~Temperature_OLM200_Var(){};
	ComObj* Clone() const override { return new Temperature_OLM200_Var(*this);}
	static SensorVariable* Create() { return new Temperature_OLM200_Var; }
	SensorResult GetBasic(int8_t& value) override;
	SensorResult GetBasic(int16_t& value) override;
	SensorResult GetBasic(int32_t& value) override;
	SensorResult GetBasic(int64_t& value) override;
	SensorResult GetBasic(uint8_t& value) override;
	SensorResult GetBasic(uint16_t& value) override;
	SensorResult GetBasic(uint32_t& value) override;
	SensorResult GetBasic(uint64_t& value) override;
	SensorResult GetBasic(float& value) override;
	SensorResult GetBasic(double& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, int64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint8_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint16_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint32_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, uint64_t& value) override;
	SensorResult GetBasicElement(const std::string& elementName, float& value) override;
	SensorResult GetBasicElement(const std::string& elementName, double& value) override;
	SensorResult SetBasic(int8_t& value) override;
	SensorResult SetBasic(int16_t& value) override;
	SensorResult SetBasic(int32_t& value) override;
	SensorResult SetBasic(int64_t& value) override;
	SensorResult SetBasic(uint8_t& value) override;
	SensorResult SetBasic(uint16_t& value) override;
	SensorResult SetBasic(uint32_t& value) override;
	SensorResult SetBasic(uint64_t& value) override;
	SensorResult SetBasic(float& value) override;
	SensorResult SetBasic(double& value) override;
	SensorResult SetBasicFromString(std::string value) override;
	SensorResult SetBasicElement(const std::string& elementName, int8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, int64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint8_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint16_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint32_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, uint64_t& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, float& value)  override;
	SensorResult SetBasicElement(const std::string& elementName, double& value)  override;
};

} // namespace OLM200_V002_004_001_Skeleton
} // namespace ssbl

