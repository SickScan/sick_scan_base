//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_004_001/include/OLM100_Types.h"
#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_004_001/include/OLM100_CoLa_Extension.h"
#include "Base/Core/Sensor/include/Common/SensorFunction.h"

namespace ssbl
{
namespace OLM100_V002_004_001_Skeleton
{
class OLM100_Func_NANR : public SensorFunction
{
public:
	OLM100_Func_NANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, false,false) {};
	~OLM100_Func_NANR(){};
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
class OLM100_Func_ANR : public SensorFunction
{
public:
	OLM100_Func_ANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, true,false) {};
	~OLM100_Func_ANR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<OLM100_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
class OLM100_Func_NAR : public SensorFunction
{
public:
	OLM100_Func_NAR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, false,true) {};
	~OLM100_Func_NAR(){};
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
			(reinterpret_cast<OLM100_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Return Return_;
};

template <class Args, class Return>
class OLM100_Func_AR : public SensorFunction
{
public:
	OLM100_Func_AR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, true,true) {};
	~OLM100_Func_AR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<OLM100_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
			(reinterpret_cast<OLM100_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Args Args_;
	Return Return_;
};

class StoreParameterPage_OLM100_Func : public OLM100_Func_NAR<StoreParameterPage_t>
{
public:
	StoreParameterPage_OLM100_Func();
	~StoreParameterPage_OLM100_Func(){};
	ComObj* Clone() const override { return new StoreParameterPage_OLM100_Func(*this);}
	static SensorFunction* Create() { return new StoreParameterPage_OLM100_Func; }
};

class ResetParameter_OLM100_Func : public OLM100_Func_NANR
{
public:
	ResetParameter_OLM100_Func();
	~ResetParameter_OLM100_Func(){};
	ComObj* Clone() const override { return new ResetParameter_OLM100_Func(*this);}
	static SensorFunction* Create() { return new ResetParameter_OLM100_Func; }
};

class SetColdstart_OLM100_Func : public OLM100_Func_NANR
{
public:
	SetColdstart_OLM100_Func();
	~SetColdstart_OLM100_Func(){};
	ComObj* Clone() const override { return new SetColdstart_OLM100_Func(*this);}
	static SensorFunction* Create() { return new SetColdstart_OLM100_Func; }
};

class IlluminationOn_OLM100_Func : public OLM100_Func_NANR
{
public:
	IlluminationOn_OLM100_Func();
	~IlluminationOn_OLM100_Func(){};
	ComObj* Clone() const override { return new IlluminationOn_OLM100_Func(*this);}
	static SensorFunction* Create() { return new IlluminationOn_OLM100_Func; }
};

class IlluminationOff_OLM100_Func : public OLM100_Func_NANR
{
public:
	IlluminationOff_OLM100_Func();
	~IlluminationOff_OLM100_Func(){};
	ComObj* Clone() const override { return new IlluminationOff_OLM100_Func(*this);}
	static SensorFunction* Create() { return new IlluminationOff_OLM100_Func; }
};

} // namespace OLM100_V002_004_001_Skeleton
} // namespace ssbl

