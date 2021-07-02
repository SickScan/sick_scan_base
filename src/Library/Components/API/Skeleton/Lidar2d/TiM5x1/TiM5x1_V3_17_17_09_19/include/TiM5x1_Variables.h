//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include <cstring>
#include "API/Skeleton/Lidar2d/TiM5x1/TiM5x1_V3_17_17_09_19/include/TiM5x1_Types.h"
#include "Base/Core/Sensor/include/Common/SensorVariable.h"
#include "API/Skeleton/Lidar2d/TiM5x1/TiM5x1_V3_17_17_09_19/include/TiM5x1_CoLa_Extension.h"

namespace ssbl
{
namespace TiM5x1_V3_17_17_09_19_Skeleton
{
template <class T>
class TiM5x1_Var : public SensorVariable
{
public:
	TiM5x1_Var(		std::string name,
		std::string comName,
		uint16_t idx,
		VariableDirection rwDir,
		AccessLevel readAccessLvl,
		AccessLevel writeAccessLvl,
		int32_t eventIdx) : SensorVariable(name, comName, idx, rwDir, readAccessLvl, writeAccessLvl, eventIdx) {};
	~TiM5x1_Var(){};
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_A:
			(reinterpret_cast<TiM5x1_CoLaASerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM5x1_CoLaBSerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
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
		case COLA_A:
			(reinterpret_cast<TiM5x1_CoLaADeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM5x1_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
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

class DataOutputRange_TiM5x1_Var : public TiM5x1_Var<DataOutputRange_t>
{
public:
	DataOutputRange_TiM5x1_Var();
	~DataOutputRange_TiM5x1_Var(){};
	ComObj* Clone() const override { return new DataOutputRange_TiM5x1_Var(*this);}
	static SensorVariable* Create() { return new DataOutputRange_TiM5x1_Var; }
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

class ScanData_TiM5x1_Var : public TiM5x1_Var<ScanData_t>
{
public:
	ScanData_TiM5x1_Var();
	~ScanData_TiM5x1_Var(){};
	ComObj* Clone() const override { return new ScanData_TiM5x1_Var(*this);}
	static SensorVariable* Create() { return new ScanData_TiM5x1_Var; }
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

class EtherHostCoLaDialect_TiM5x1_Var : public TiM5x1_Var<Enum8_t>
{
public:
	EtherHostCoLaDialect_TiM5x1_Var();
	~EtherHostCoLaDialect_TiM5x1_Var(){};
	ComObj* Clone() const override { return new EtherHostCoLaDialect_TiM5x1_Var(*this);}
	static SensorVariable* Create() { return new EtherHostCoLaDialect_TiM5x1_Var; }
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

class ScanConfig_TiM5x1_Var : public TiM5x1_Var<ScanConfig_t>
{
public:
	ScanConfig_TiM5x1_Var();
	~ScanConfig_TiM5x1_Var(){};
	ComObj* Clone() const override { return new ScanConfig_TiM5x1_Var(*this);}
	static SensorVariable* Create() { return new ScanConfig_TiM5x1_Var; }
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

class ScanDataConfig_TiM5x1_Var : public TiM5x1_Var<ScanDataConfig_t>
{
public:
	ScanDataConfig_TiM5x1_Var();
	~ScanDataConfig_TiM5x1_Var(){};
	ComObj* Clone() const override { return new ScanDataConfig_TiM5x1_Var(*this);}
	static SensorVariable* Create() { return new ScanDataConfig_TiM5x1_Var; }
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

class SCdevicestate_TiM5x1_Var : public TiM5x1_Var<Enum8_t>
{
public:
	SCdevicestate_TiM5x1_Var();
	~SCdevicestate_TiM5x1_Var(){};
	ComObj* Clone() const override { return new SCdevicestate_TiM5x1_Var(*this);}
	static SensorVariable* Create() { return new SCdevicestate_TiM5x1_Var; }
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

class OrderNumber_TiM5x1_Var : public TiM5x1_Var<FixString7>
{
public:
	OrderNumber_TiM5x1_Var();
	~OrderNumber_TiM5x1_Var(){};
	ComObj* Clone() const override { return new OrderNumber_TiM5x1_Var(*this);}
	static SensorVariable* Create() { return new OrderNumber_TiM5x1_Var; }
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

} // namespace TiM5x1_V3_17_17_09_19_Skeleton
} // namespace ssbl

