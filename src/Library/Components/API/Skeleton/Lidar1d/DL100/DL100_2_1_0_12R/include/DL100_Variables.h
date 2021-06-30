//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include <cstring>
#include "API/Skeleton/Lidar1d/DL100/DL100_2_1_0_12R/include/DL100_Types.h"
#include "Base/Core/Sensor/include/Common/SensorVariable.h"
#include "API/Skeleton/Lidar1d/DL100/DL100_2_1_0_12R/include/DL100_CoLa_Extension.h"

namespace ssbl
{
namespace DL100_2_1_0_12R_Skeleton
{
template <class T>
class DL100_Var : public SensorVariable
{
public:
	DL100_Var(		std::string name,
		std::string comName,
		uint16_t idx,
		VariableDirection rwDir,
		AccessLevel readAccessLvl,
		AccessLevel writeAccessLvl,
		int32_t eventIdx) : SensorVariable(name, comName, idx, rwDir, readAccessLvl, writeAccessLvl, eventIdx) {};
	~DL100_Var(){};
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<DL100_CoLaBSerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
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
			(reinterpret_cast<DL100_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
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

class distance_DL100_Var : public DL100_Var<float>
{
public:
	distance_DL100_Var();
	~distance_DL100_Var(){};
	ComObj* Clone() const override { return new distance_DL100_Var(*this);}
	static SensorVariable* Create() { return new distance_DL100_Var; }
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

class velocity_DL100_Var : public DL100_Var<float>
{
public:
	velocity_DL100_Var();
	~velocity_DL100_Var(){};
	ComObj* Clone() const override { return new velocity_DL100_Var(*this);}
	static SensorVariable* Create() { return new velocity_DL100_Var; }
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

class averagedVelocity_DL100_Var : public DL100_Var<float>
{
public:
	averagedVelocity_DL100_Var();
	~averagedVelocity_DL100_Var(){};
	ComObj* Clone() const override { return new averagedVelocity_DL100_Var(*this);}
	static SensorVariable* Create() { return new averagedVelocity_DL100_Var; }
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

class acceleration_DL100_Var : public DL100_Var<float>
{
public:
	acceleration_DL100_Var();
	~acceleration_DL100_Var(){};
	ComObj* Clone() const override { return new acceleration_DL100_Var(*this);}
	static SensorVariable* Create() { return new acceleration_DL100_Var; }
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

class dbLevelComm_DL100_Var : public DL100_Var<int16_t>
{
public:
	dbLevelComm_DL100_Var();
	~dbLevelComm_DL100_Var(){};
	ComObj* Clone() const override { return new dbLevelComm_DL100_Var(*this);}
	static SensorVariable* Create() { return new dbLevelComm_DL100_Var; }
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

class temperature_DL100_Var : public DL100_Var<int8_t>
{
public:
	temperature_DL100_Var();
	~temperature_DL100_Var(){};
	ComObj* Clone() const override { return new temperature_DL100_Var(*this);}
	static SensorVariable* Create() { return new temperature_DL100_Var; }
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

class distanceOffset_DL100_Var : public DL100_Var<int32_t>
{
public:
	distanceOffset_DL100_Var();
	~distanceOffset_DL100_Var(){};
	ComObj* Clone() const override { return new distanceOffset_DL100_Var(*this);}
	static SensorVariable* Create() { return new distanceOffset_DL100_Var; }
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

class laserError_DL100_Var : public DL100_Var<uint8_t>
{
public:
	laserError_DL100_Var();
	~laserError_DL100_Var(){};
	ComObj* Clone() const override { return new laserError_DL100_Var(*this);}
	static SensorVariable* Create() { return new laserError_DL100_Var; }
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

class temperatureError_DL100_Var : public DL100_Var<uint8_t>
{
public:
	temperatureError_DL100_Var();
	~temperatureError_DL100_Var(){};
	ComObj* Clone() const override { return new temperatureError_DL100_Var(*this);}
	static SensorVariable* Create() { return new temperatureError_DL100_Var; }
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

class levelError_DL100_Var : public DL100_Var<uint8_t>
{
public:
	levelError_DL100_Var();
	~levelError_DL100_Var(){};
	ComObj* Clone() const override { return new levelError_DL100_Var(*this);}
	static SensorVariable* Create() { return new levelError_DL100_Var; }
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

class plausiblityError_DL100_Var : public DL100_Var<uint8_t>
{
public:
	plausiblityError_DL100_Var();
	~plausiblityError_DL100_Var(){};
	ComObj* Clone() const override { return new plausiblityError_DL100_Var(*this);}
	static SensorVariable* Create() { return new plausiblityError_DL100_Var; }
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

class laserPrefailWarning_DL100_Var : public DL100_Var<uint8_t>
{
public:
	laserPrefailWarning_DL100_Var();
	~laserPrefailWarning_DL100_Var(){};
	ComObj* Clone() const override { return new laserPrefailWarning_DL100_Var(*this);}
	static SensorVariable* Create() { return new laserPrefailWarning_DL100_Var; }
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

class temperaturePrefailWarning_DL100_Var : public DL100_Var<uint8_t>
{
public:
	temperaturePrefailWarning_DL100_Var();
	~temperaturePrefailWarning_DL100_Var(){};
	ComObj* Clone() const override { return new temperaturePrefailWarning_DL100_Var(*this);}
	static SensorVariable* Create() { return new temperaturePrefailWarning_DL100_Var; }
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

class levelPrefailWarning_DL100_Var : public DL100_Var<uint8_t>
{
public:
	levelPrefailWarning_DL100_Var();
	~levelPrefailWarning_DL100_Var(){};
	ComObj* Clone() const override { return new levelPrefailWarning_DL100_Var(*this);}
	static SensorVariable* Create() { return new levelPrefailWarning_DL100_Var; }
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

class plausiblityPrefailWarning_DL100_Var : public DL100_Var<uint8_t>
{
public:
	plausiblityPrefailWarning_DL100_Var();
	~plausiblityPrefailWarning_DL100_Var(){};
	ComObj* Clone() const override { return new plausiblityPrefailWarning_DL100_Var(*this);}
	static SensorVariable* Create() { return new plausiblityPrefailWarning_DL100_Var; }
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

class operatingHours_DL100_Var : public DL100_Var<uint32_t>
{
public:
	operatingHours_DL100_Var();
	~operatingHours_DL100_Var(){};
	ComObj* Clone() const override { return new operatingHours_DL100_Var(*this);}
	static SensorVariable* Create() { return new operatingHours_DL100_Var; }
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

class mf1switchCounter_DL100_Var : public DL100_Var<int32_t>
{
public:
	mf1switchCounter_DL100_Var();
	~mf1switchCounter_DL100_Var(){};
	ComObj* Clone() const override { return new mf1switchCounter_DL100_Var(*this);}
	static SensorVariable* Create() { return new mf1switchCounter_DL100_Var; }
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

class mf2switchCounter_DL100_Var : public DL100_Var<int32_t>
{
public:
	mf2switchCounter_DL100_Var();
	~mf2switchCounter_DL100_Var(){};
	ComObj* Clone() const override { return new mf2switchCounter_DL100_Var(*this);}
	static SensorVariable* Create() { return new mf2switchCounter_DL100_Var; }
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

class DebugOutputSelect_DL100_Var : public DL100_Var<Enum8_t>
{
public:
	DebugOutputSelect_DL100_Var();
	~DebugOutputSelect_DL100_Var(){};
	ComObj* Clone() const override { return new DebugOutputSelect_DL100_Var(*this);}
	static SensorVariable* Create() { return new DebugOutputSelect_DL100_Var; }
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

class OnOff_DL100_Var : public DL100_Var<uint8_t>
{
public:
	OnOff_DL100_Var();
	~OnOff_DL100_Var(){};
	ComObj* Clone() const override { return new OnOff_DL100_Var(*this);}
	static SensorVariable* Create() { return new OnOff_DL100_Var; }
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

} // namespace DL100_2_1_0_12R_Skeleton
} // namespace ssbl

