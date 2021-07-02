//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include <cstring>
#include "API/Skeleton/Lidar2d/TiM7x1/TiM7x1_V3_17_17_09_19/include/TiM7x1_Types.h"
#include "Base/Core/Sensor/include/Common/SensorVariable.h"
#include "API/Skeleton/Lidar2d/TiM7x1/TiM7x1_V3_17_17_09_19/include/TiM7x1_CoLa_Extension.h"

namespace ssbl
{
namespace TiM7x1_V3_17_17_09_19_Skeleton
{
template <class T>
class TiM7x1_Var : public SensorVariable
{
public:
	TiM7x1_Var(		std::string name,
		std::string comName,
		uint16_t idx,
		VariableDirection rwDir,
		AccessLevel readAccessLvl,
		AccessLevel writeAccessLvl,
		int32_t eventIdx) : SensorVariable(name, comName, idx, rwDir, readAccessLvl, writeAccessLvl, eventIdx) {};
	~TiM7x1_Var(){};
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_A:
			(reinterpret_cast<TiM7x1_CoLaASerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM7x1_CoLaBSerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
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
			(reinterpret_cast<TiM7x1_CoLaADeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM7x1_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
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
	virtual std::unique_ptr<ComObj> Clone() const = 0;
	T Value_;
};

class DataOutputRange_TiM7x1_Var : public TiM7x1_Var<DataOutputRange_t>
{
public:
	DataOutputRange_TiM7x1_Var();
	~DataOutputRange_TiM7x1_Var(){};
	virtual std::unique_ptr<ComObj> Clone() const override { return ssbl::make_unique<DataOutputRange_TiM7x1_Var>(*this); }
	static SensorVariable* Create() { return new DataOutputRange_TiM7x1_Var; }
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

class ScanData_TiM7x1_Var : public TiM7x1_Var<ScanData_t>
{
public:
	ScanData_TiM7x1_Var();
	~ScanData_TiM7x1_Var(){};
	virtual std::unique_ptr<ComObj> Clone() const override { return ssbl::make_unique<ScanData_TiM7x1_Var>(*this); }
	static SensorVariable* Create() { return new ScanData_TiM7x1_Var; }
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

class EtherHostCoLaDialect_TiM7x1_Var : public TiM7x1_Var<Enum8_t>
{
public:
	EtherHostCoLaDialect_TiM7x1_Var();
	~EtherHostCoLaDialect_TiM7x1_Var(){};
	virtual std::unique_ptr<ComObj> Clone() const override { return ssbl::make_unique<EtherHostCoLaDialect_TiM7x1_Var>(*this); }
	static SensorVariable* Create() { return new EtherHostCoLaDialect_TiM7x1_Var; }
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

class ScanConfig_TiM7x1_Var : public TiM7x1_Var<ScanConfig_t>
{
public:
	ScanConfig_TiM7x1_Var();
	~ScanConfig_TiM7x1_Var(){};
	virtual std::unique_ptr<ComObj> Clone() const override { return ssbl::make_unique<ScanConfig_TiM7x1_Var>(*this); }
	static SensorVariable* Create() { return new ScanConfig_TiM7x1_Var; }
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

class ScanDataConfig_TiM7x1_Var : public TiM7x1_Var<ScanDataConfig_t>
{
public:
	ScanDataConfig_TiM7x1_Var();
	~ScanDataConfig_TiM7x1_Var(){};
	virtual std::unique_ptr<ComObj> Clone() const override { return ssbl::make_unique<ScanDataConfig_TiM7x1_Var>(*this); }
	static SensorVariable* Create() { return new ScanDataConfig_TiM7x1_Var; }
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

class SCdevicestate_TiM7x1_Var : public TiM7x1_Var<Enum8_t>
{
public:
	SCdevicestate_TiM7x1_Var();
	~SCdevicestate_TiM7x1_Var(){};
	virtual std::unique_ptr<ComObj> Clone() const override { return ssbl::make_unique<SCdevicestate_TiM7x1_Var>(*this); }
	static SensorVariable* Create() { return new SCdevicestate_TiM7x1_Var; }
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

class OrderNumber_TiM7x1_Var : public TiM7x1_Var<FixString7>
{
public:
	OrderNumber_TiM7x1_Var();
	~OrderNumber_TiM7x1_Var(){};
	virtual std::unique_ptr<ComObj> Clone() const override { return ssbl::make_unique<OrderNumber_TiM7x1_Var>(*this); }
	static SensorVariable* Create() { return new OrderNumber_TiM7x1_Var; }
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

} // namespace TiM7x1_V3_17_17_09_19_Skeleton
} // namespace ssbl

