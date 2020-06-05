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
	ComObj* Clone() { return new WriteEeprom_Dx1000_Func(*this); }
	static SensorFunction* Create() { return new WriteEeprom_Dx1000_Func; }
};

class RebootDevice_Dx1000_Func : public Dx1000_Func_NANR
{
public:
	RebootDevice_Dx1000_Func();
	~RebootDevice_Dx1000_Func(){};
	ComObj* Clone() { return new RebootDevice_Dx1000_Func(*this); }
	static SensorFunction* Create() { return new RebootDevice_Dx1000_Func; }
};

class LoadFactoryDefaults_Dx1000_Func : public Dx1000_Func_NANR
{
public:
	LoadFactoryDefaults_Dx1000_Func();
	~LoadFactoryDefaults_Dx1000_Func(){};
	ComObj* Clone() { return new LoadFactoryDefaults_Dx1000_Func(*this); }
	static SensorFunction* Create() { return new LoadFactoryDefaults_Dx1000_Func; }
};

class LoadApplicationDefaults_Dx1000_Func : public Dx1000_Func_NANR
{
public:
	LoadApplicationDefaults_Dx1000_Func();
	~LoadApplicationDefaults_Dx1000_Func(){};
	ComObj* Clone() { return new LoadApplicationDefaults_Dx1000_Func(*this); }
	static SensorFunction* Create() { return new LoadApplicationDefaults_Dx1000_Func; }
};

} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl

