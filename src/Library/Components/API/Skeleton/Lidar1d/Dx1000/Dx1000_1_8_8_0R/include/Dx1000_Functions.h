//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_Types.h"
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_CoLa_Extension.h"
#include "Base/Core/Sensor/include/Common/SensorFunction.h"

namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
class Dx1000_Func_NANR : public SensorFunction
{
public:
	Dx1000_Func_NANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, false,false) {};
	~Dx1000_Func_NANR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		SSBL_UNUSED(pSer);
		SSBL_UNUSED(pDest);
	 return *pOffset;
	}
	uint32_t DeserializeContent(Deserializer* pDes, uint8_t* pSrc)
	{
		SSBL_UNUSED(pDes);
		SSBL_UNUSED(pSrc);
		return 0;
	}
	
};

template <class Args>
class Dx1000_Func_ANR : public SensorFunction
{
public:
	Dx1000_Func_ANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, true,false) {};
	~Dx1000_Func_ANR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<Dx1000_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
			break;
		case COLA_A:
			(reinterpret_cast<Dx1000_CoLaASerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
			break;
		default:
			break;
		}
		return *pOffset;
	}
	uint32_t DeserializeContent(Deserializer* pDes, uint8_t* pSrc)
	{
		SSBL_UNUSED(pDes);
		SSBL_UNUSED(pSrc);
		return 0;
	}
	Args Args_;
};

template <class Return>
class Dx1000_Func_NAR : public SensorFunction
{
public:
	Dx1000_Func_NAR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, false,true) {};
	~Dx1000_Func_NAR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		SSBL_UNUSED(pSer);
		SSBL_UNUSED(pDest);
	 return *pOffset;
	}
	uint32_t DeserializeContent(Deserializer* pDes, uint8_t* pSrc)
	{
		uint32_t offset=0;
		switch (pDes->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<Dx1000_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		case COLA_A:
			(reinterpret_cast<Dx1000_CoLaADeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Return Return_;
};

template <class Args, class Return>
class Dx1000_Func_AR : public SensorFunction
{
public:
	Dx1000_Func_AR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, true,true) {};
	~Dx1000_Func_AR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<Dx1000_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
			break;
		case COLA_A:
			(reinterpret_cast<Dx1000_CoLaASerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
			(reinterpret_cast<Dx1000_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		case COLA_A:
			(reinterpret_cast<Dx1000_CoLaADeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Args Args_;
	Return Return_;
};

class WriteEeprom_Dx1000_Func : public Dx1000_Func_NAR<WriteEeprom_t>
{
public:
	WriteEeprom_Dx1000_Func();
	~WriteEeprom_Dx1000_Func(){};
	ComObj* Clone() const override { return new WriteEeprom_Dx1000_Func(*this);}
	static SensorFunction* Create() { return new WriteEeprom_Dx1000_Func; }
};

class RebootDevice_Dx1000_Func : public Dx1000_Func_NANR
{
public:
	RebootDevice_Dx1000_Func();
	~RebootDevice_Dx1000_Func(){};
	ComObj* Clone() const override { return new RebootDevice_Dx1000_Func(*this);}
	static SensorFunction* Create() { return new RebootDevice_Dx1000_Func; }
};

class LoadFactoryDefaults_Dx1000_Func : public Dx1000_Func_NANR
{
public:
	LoadFactoryDefaults_Dx1000_Func();
	~LoadFactoryDefaults_Dx1000_Func(){};
	ComObj* Clone() const override { return new LoadFactoryDefaults_Dx1000_Func(*this);}
	static SensorFunction* Create() { return new LoadFactoryDefaults_Dx1000_Func; }
};

class LoadApplicationDefaults_Dx1000_Func : public Dx1000_Func_NANR
{
public:
	LoadApplicationDefaults_Dx1000_Func();
	~LoadApplicationDefaults_Dx1000_Func(){};
	ComObj* Clone() const override { return new LoadApplicationDefaults_Dx1000_Func(*this);}
	static SensorFunction* Create() { return new LoadApplicationDefaults_Dx1000_Func; }
};

class enableMeasurementLaser_Dx1000_Func : public Dx1000_Func_NAR<enableMeasurementLaser_t>
{
public:
	enableMeasurementLaser_Dx1000_Func();
	~enableMeasurementLaser_Dx1000_Func(){};
	ComObj* Clone() const override { return new enableMeasurementLaser_Dx1000_Func(*this);}
	static SensorFunction* Create() { return new enableMeasurementLaser_Dx1000_Func; }
};

class disableMeasurementLaser_Dx1000_Func : public Dx1000_Func_NAR<disableMeasurementLaser_t>
{
public:
	disableMeasurementLaser_Dx1000_Func();
	~disableMeasurementLaser_Dx1000_Func(){};
	ComObj* Clone() const override { return new disableMeasurementLaser_Dx1000_Func(*this);}
	static SensorFunction* Create() { return new disableMeasurementLaser_Dx1000_Func; }
};

class enablePilotLaser_Dx1000_Func : public Dx1000_Func_NAR<enablePilotLaser_t>
{
public:
	enablePilotLaser_Dx1000_Func();
	~enablePilotLaser_Dx1000_Func(){};
	ComObj* Clone() const override { return new enablePilotLaser_Dx1000_Func(*this);}
	static SensorFunction* Create() { return new enablePilotLaser_Dx1000_Func; }
};

class disablePilotLaser_Dx1000_Func : public Dx1000_Func_NAR<disablePilotLaser_t>
{
public:
	disablePilotLaser_Dx1000_Func();
	~disablePilotLaser_Dx1000_Func(){};
	ComObj* Clone() const override { return new disablePilotLaser_Dx1000_Func(*this);}
	static SensorFunction* Create() { return new disablePilotLaser_Dx1000_Func; }
};

} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl

