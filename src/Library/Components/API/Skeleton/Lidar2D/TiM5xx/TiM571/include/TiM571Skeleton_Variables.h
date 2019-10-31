//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include <cstring>
#include "API/Skeleton/Lidar2D/TiM5xx/TiM571/include/TiM571Skeleton_Types.h"
#include "Base/Core/Sensor/include/Common/SickSensorVariable.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM571/include/TiM571Skeleton_CoLa_Extension.h"

namespace ssbl
{
namespace DevTiM571Skeleton
{
template <class T>
class TiM571Skeleton_Var : public SickSensorVariable
{
public:
	TiM571Skeleton_Var(		std::string name,
		std::string comName,
		uint16_t idx,
		VariableDirection rwDir,
		AccessLevel readAccessLvl,
		AccessLevel writeAccessLvl,
		int32_t eventIdx) : SickSensorVariable(name, comName, idx, rwDir, readAccessLvl, writeAccessLvl, eventIdx) {};
	~TiM571Skeleton_Var(){};
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_A:
			(reinterpret_cast<TiM571Skeleton_CoLaASerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM571Skeleton_CoLaBSerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
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
			(reinterpret_cast<TiM571Skeleton_CoLaADeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM571Skeleton_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
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

class ScanConfig_TiM571Skeleton_Var : public TiM571Skeleton_Var<ScanConfig_t>
{
public:
	ScanConfig_TiM571Skeleton_Var();
	~ScanConfig_TiM571Skeleton_Var(){};
	ComObj* Clone() { return new ScanConfig_TiM571Skeleton_Var(*this); }
	static SickSensorVariable* Create() { return new ScanConfig_TiM571Skeleton_Var; }
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

class EtherHostCoLaDialect_TiM571Skeleton_Var : public TiM571Skeleton_Var<Enum8_t>
{
public:
	EtherHostCoLaDialect_TiM571Skeleton_Var();
	~EtherHostCoLaDialect_TiM571Skeleton_Var(){};
	ComObj* Clone() { return new EtherHostCoLaDialect_TiM571Skeleton_Var(*this); }
	static SickSensorVariable* Create() { return new EtherHostCoLaDialect_TiM571Skeleton_Var; }
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

class DataOutputRange_TiM571Skeleton_Var : public TiM571Skeleton_Var<DataOutputRange_t>
{
public:
	DataOutputRange_TiM571Skeleton_Var();
	~DataOutputRange_TiM571Skeleton_Var(){};
	ComObj* Clone() { return new DataOutputRange_TiM571Skeleton_Var(*this); }
	static SickSensorVariable* Create() { return new DataOutputRange_TiM571Skeleton_Var; }
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

class ScanData_TiM571Skeleton_Var : public TiM571Skeleton_Var<ScanData_t>
{
public:
	ScanData_TiM571Skeleton_Var();
	~ScanData_TiM571Skeleton_Var(){};
	ComObj* Clone() { return new ScanData_TiM571Skeleton_Var(*this); }
	static SickSensorVariable* Create() { return new ScanData_TiM571Skeleton_Var; }
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

class ScanDataConfig_TiM571Skeleton_Var : public TiM571Skeleton_Var<ScanDataConfig_t>
{
public:
	ScanDataConfig_TiM571Skeleton_Var();
	~ScanDataConfig_TiM571Skeleton_Var(){};
	ComObj* Clone() { return new ScanDataConfig_TiM571Skeleton_Var(*this); }
	static SickSensorVariable* Create() { return new ScanDataConfig_TiM571Skeleton_Var; }
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

class SCdevicestate_TiM571Skeleton_Var : public TiM571Skeleton_Var<Enum8_t>
{
public:
	SCdevicestate_TiM571Skeleton_Var();
	~SCdevicestate_TiM571Skeleton_Var(){};
	ComObj* Clone() { return new SCdevicestate_TiM571Skeleton_Var(*this); }
	static SickSensorVariable* Create() { return new SCdevicestate_TiM571Skeleton_Var; }
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

class OrderNumber_TiM571Skeleton_Var : public TiM571Skeleton_Var<FixString7>
{
public:
	OrderNumber_TiM571Skeleton_Var();
	~OrderNumber_TiM571Skeleton_Var(){};
	ComObj* Clone() { return new OrderNumber_TiM571Skeleton_Var(*this); }
	static SickSensorVariable* Create() { return new OrderNumber_TiM571Skeleton_Var; }
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

} // namespace DevTiM571Skeleton
} // namespace ssbl

