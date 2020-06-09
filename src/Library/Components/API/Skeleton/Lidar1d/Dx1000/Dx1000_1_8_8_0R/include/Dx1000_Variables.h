//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include <cstring>
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_Types.h"
#include "Base/Core/Sensor/include/Common/SensorVariable.h"
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_CoLa_Extension.h"

namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
template <class T>
class Dx1000_Var : public SensorVariable
{
public:
	Dx1000_Var(		std::string name,
		std::string comName,
		uint16_t idx,
		VariableDirection rwDir,
		AccessLevel readAccessLvl,
		AccessLevel writeAccessLvl,
		int32_t eventIdx) : SensorVariable(name, comName, idx, rwDir, readAccessLvl, writeAccessLvl, eventIdx) {};
	~Dx1000_Var(){};
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<Dx1000_CoLaBSerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
			break;
		case COLA_A:
			(reinterpret_cast<Dx1000_CoLaASerializer*> (pSer))->Serialize(pDest, this->Value_, pOffset);
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
			(reinterpret_cast<Dx1000_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
			break;
		case COLA_A:
			(reinterpret_cast<Dx1000_CoLaADeserializer*> (pDes))->Deserialize(pSrc, this->Value_, &offset);
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

class Distance_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	Distance_Dx1000_Var();
	~Distance_Dx1000_Var(){};
	ComObj* Clone() { return new Distance_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new Distance_Dx1000_Var; }
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

class Velocity_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	Velocity_Dx1000_Var();
	~Velocity_Dx1000_Var(){};
	ComObj* Clone() { return new Velocity_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new Velocity_Dx1000_Var; }
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

class RSSI_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	RSSI_Dx1000_Var();
	~RSSI_Dx1000_Var(){};
	ComObj* Clone() { return new RSSI_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new RSSI_Dx1000_Var; }
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

class BridgingActive_Dx1000_Var : public Dx1000_Var<uint8_t>
{
public:
	BridgingActive_Dx1000_Var();
	~BridgingActive_Dx1000_Var(){};
	ComObj* Clone() { return new BridgingActive_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new BridgingActive_Dx1000_Var; }
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

class SCdevicestate_Dx1000_Var : public Dx1000_Var<Enum8_t>
{
public:
	SCdevicestate_Dx1000_Var();
	~SCdevicestate_Dx1000_Var(){};
	ComObj* Clone() { return new SCdevicestate_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new SCdevicestate_Dx1000_Var; }
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

class OrderNumber_Dx1000_Var : public Dx1000_Var<FlexString32>
{
public:
	OrderNumber_Dx1000_Var();
	~OrderNumber_Dx1000_Var(){};
	ComObj* Clone() { return new OrderNumber_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new OrderNumber_Dx1000_Var; }
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

class roiStart_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	roiStart_Dx1000_Var();
	~roiStart_Dx1000_Var(){};
	ComObj* Clone() { return new roiStart_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new roiStart_Dx1000_Var; }
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

class roiEnd_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	roiEnd_Dx1000_Var();
	~roiEnd_Dx1000_Var(){};
	ComObj* Clone() { return new roiEnd_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new roiEnd_Dx1000_Var; }
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

class roiMinLevel_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	roiMinLevel_Dx1000_Var();
	~roiMinLevel_Dx1000_Var(){};
	ComObj* Clone() { return new roiMinLevel_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new roiMinLevel_Dx1000_Var; }
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

class roiMaxLevel_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	roiMaxLevel_Dx1000_Var();
	~roiMaxLevel_Dx1000_Var(){};
	ComObj* Clone() { return new roiMaxLevel_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new roiMaxLevel_Dx1000_Var; }
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

class rainSnowFilterSetting_Dx1000_Var : public Dx1000_Var<Enum8_t>
{
public:
	rainSnowFilterSetting_Dx1000_Var();
	~rainSnowFilterSetting_Dx1000_Var(){};
	ComObj* Clone() { return new rainSnowFilterSetting_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new rainSnowFilterSetting_Dx1000_Var; }
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

class echoSeletionMode_Dx1000_Var : public Dx1000_Var<Enum8_t>
{
public:
	echoSeletionMode_Dx1000_Var();
	~echoSeletionMode_Dx1000_Var(){};
	ComObj* Clone() { return new echoSeletionMode_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new echoSeletionMode_Dx1000_Var; }
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

class filterSelection_Dx1000_Var : public Dx1000_Var<Enum8_t>
{
public:
	filterSelection_Dx1000_Var();
	~filterSelection_Dx1000_Var(){};
	ComObj* Clone() { return new filterSelection_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new filterSelection_Dx1000_Var; }
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

class filterDepth_Dx1000_Var : public Dx1000_Var<uint32_t>
{
public:
	filterDepth_Dx1000_Var();
	~filterDepth_Dx1000_Var(){};
	ComObj* Clone() { return new filterDepth_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new filterDepth_Dx1000_Var; }
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

class noEchoOutputMode_Dx1000_Var : public Dx1000_Var<Enum8_t>
{
public:
	noEchoOutputMode_Dx1000_Var();
	~noEchoOutputMode_Dx1000_Var(){};
	ComObj* Clone() { return new noEchoOutputMode_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new noEchoOutputMode_Dx1000_Var; }
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

class offset_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	offset_Dx1000_Var();
	~offset_Dx1000_Var(){};
	ComObj* Clone() { return new offset_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new offset_Dx1000_Var; }
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

class noEchoOutputDistance_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	noEchoOutputDistance_Dx1000_Var();
	~noEchoOutputDistance_Dx1000_Var(){};
	ComObj* Clone() { return new noEchoOutputDistance_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new noEchoOutputDistance_Dx1000_Var; }
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

class noEchoOutputVelocity_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	noEchoOutputVelocity_Dx1000_Var();
	~noEchoOutputVelocity_Dx1000_Var(){};
	ComObj* Clone() { return new noEchoOutputVelocity_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new noEchoOutputVelocity_Dx1000_Var; }
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

class errorOutputDistance_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	errorOutputDistance_Dx1000_Var();
	~errorOutputDistance_Dx1000_Var(){};
	ComObj* Clone() { return new errorOutputDistance_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new errorOutputDistance_Dx1000_Var; }
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

class errorOutputVelocity_Dx1000_Var : public Dx1000_Var<int32_t>
{
public:
	errorOutputVelocity_Dx1000_Var();
	~errorOutputVelocity_Dx1000_Var(){};
	ComObj* Clone() { return new errorOutputVelocity_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new errorOutputVelocity_Dx1000_Var; }
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

class acquisitionTime_Dx1000_Var : public Dx1000_Var<Enum8_t>
{
public:
	acquisitionTime_Dx1000_Var();
	~acquisitionTime_Dx1000_Var(){};
	ComObj* Clone() { return new acquisitionTime_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new acquisitionTime_Dx1000_Var; }
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

class fogFilter_Dx1000_Var : public Dx1000_Var<Enum8_t>
{
public:
	fogFilter_Dx1000_Var();
	~fogFilter_Dx1000_Var(){};
	ComObj* Clone() { return new fogFilter_Dx1000_Var(*this); }
	static SensorVariable* Create() { return new fogFilter_Dx1000_Var; }
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

} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl

