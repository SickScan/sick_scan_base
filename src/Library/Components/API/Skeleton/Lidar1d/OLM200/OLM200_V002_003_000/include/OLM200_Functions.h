//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar1d/OLM200/OLM200_V002_003_000/include/OLM200_Types.h"
#include "API/Skeleton/Lidar1d/OLM200/OLM200_V002_003_000/include/OLM200_CoLa_Extension.h"
#include "Base/Core/Sensor/include/Common/SensorFunction.h"

namespace ssbl
{
namespace OLM200_V002_003_000_Skeleton
{
class OLM200_Func_NANR : public SensorFunction
{
public:
	OLM200_Func_NANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, false,false) {};
	~OLM200_Func_NANR(){};
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
class OLM200_Func_ANR : public SensorFunction
{
public:
	OLM200_Func_ANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, true,false) {};
	~OLM200_Func_ANR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<OLM200_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
class OLM200_Func_NAR : public SensorFunction
{
public:
	OLM200_Func_NAR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, false,true) {};
	~OLM200_Func_NAR(){};
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
			(reinterpret_cast<OLM200_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Return Return_;
};

template <class Args, class Return>
class OLM200_Func_AR : public SensorFunction
{
public:
	OLM200_Func_AR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, true,true) {};
	~OLM200_Func_AR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<OLM200_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
			(reinterpret_cast<OLM200_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Args Args_;
	Return Return_;
};

class StoreParameterPage_OLM200_Func : public OLM200_Func_NAR<StoreParameterPage_t>
{
public:
	StoreParameterPage_OLM200_Func();
	~StoreParameterPage_OLM200_Func(){};
	ComObj* Clone() const override { return new StoreParameterPage_OLM200_Func(*this);}
	static SensorFunction* Create() { return new StoreParameterPage_OLM200_Func; }
};

class ResetParameter_OLM200_Func : public OLM200_Func_NANR
{
public:
	ResetParameter_OLM200_Func();
	~ResetParameter_OLM200_Func(){};
	ComObj* Clone() const override { return new ResetParameter_OLM200_Func(*this);}
	static SensorFunction* Create() { return new ResetParameter_OLM200_Func; }
};

class SetColdstart_OLM200_Func : public OLM200_Func_NANR
{
public:
	SetColdstart_OLM200_Func();
	~SetColdstart_OLM200_Func(){};
	ComObj* Clone() const override { return new SetColdstart_OLM200_Func(*this);}
	static SensorFunction* Create() { return new SetColdstart_OLM200_Func; }
};

class IlluminationOn_OLM200_Func : public OLM200_Func_NANR
{
public:
	IlluminationOn_OLM200_Func();
	~IlluminationOn_OLM200_Func(){};
	ComObj* Clone() const override { return new IlluminationOn_OLM200_Func(*this);}
	static SensorFunction* Create() { return new IlluminationOn_OLM200_Func; }
};

class IlluminationOff_OLM200_Func : public OLM200_Func_NANR
{
public:
	IlluminationOff_OLM200_Func();
	~IlluminationOff_OLM200_Func(){};
	ComObj* Clone() const override { return new IlluminationOff_OLM200_Func(*this);}
	static SensorFunction* Create() { return new IlluminationOff_OLM200_Func; }
};

} // namespace OLM200_V002_003_000_Skeleton
} // namespace ssbl

