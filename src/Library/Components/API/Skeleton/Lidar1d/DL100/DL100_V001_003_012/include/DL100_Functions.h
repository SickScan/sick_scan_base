//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar1d/DL100/DL100_V001_003_012/include/DL100_Types.h"
#include "API/Skeleton/Lidar1d/DL100/DL100_V001_003_012/include/DL100_CoLa_Extension.h"
#include "Base/Core/Sensor/include/Common/SensorFunction.h"

namespace ssbl
{
namespace DL100_V001_003_012_Skeleton
{
class DL100_Func_NANR : public SensorFunction
{
public:
	DL100_Func_NANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, false,false) {};
	~DL100_Func_NANR(){};
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
class DL100_Func_ANR : public SensorFunction
{
public:
	DL100_Func_ANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, true,false) {};
	~DL100_Func_ANR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<DL100_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
class DL100_Func_NAR : public SensorFunction
{
public:
	DL100_Func_NAR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, false,true) {};
	~DL100_Func_NAR(){};
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
			(reinterpret_cast<DL100_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Return Return_;
};

template <class Args, class Return>
class DL100_Func_AR : public SensorFunction
{
public:
	DL100_Func_AR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, true,true) {};
	~DL100_Func_AR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_B:
			(reinterpret_cast<DL100_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
			(reinterpret_cast<DL100_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Args Args_;
	Return Return_;
};

class storeParameterPage_DL100_Func : public DL100_Func_NAR<storeParameterPage_t>
{
public:
	storeParameterPage_DL100_Func();
	~storeParameterPage_DL100_Func(){};
	ComObj* Clone() const override { return new storeParameterPage_DL100_Func(*this);}
	static SensorFunction* Create() { return new storeParameterPage_DL100_Func; }
};

class parameterReset_DL100_Func : public DL100_Func_NANR
{
public:
	parameterReset_DL100_Func();
	~parameterReset_DL100_Func(){};
	ComObj* Clone() const override { return new parameterReset_DL100_Func(*this);}
	static SensorFunction* Create() { return new parameterReset_DL100_Func; }
};

class setColdstart_DL100_Func : public DL100_Func_NANR
{
public:
	setColdstart_DL100_Func();
	~setColdstart_DL100_Func(){};
	ComObj* Clone() const override { return new setColdstart_DL100_Func(*this);}
	static SensorFunction* Create() { return new setColdstart_DL100_Func; }
};

class resetMF1switchCounter_DL100_Func : public DL100_Func_NANR
{
public:
	resetMF1switchCounter_DL100_Func();
	~resetMF1switchCounter_DL100_Func(){};
	ComObj* Clone() const override { return new resetMF1switchCounter_DL100_Func(*this);}
	static SensorFunction* Create() { return new resetMF1switchCounter_DL100_Func; }
};

class resetMF2switchCounter_DL100_Func : public DL100_Func_NANR
{
public:
	resetMF2switchCounter_DL100_Func();
	~resetMF2switchCounter_DL100_Func(){};
	ComObj* Clone() const override { return new resetMF2switchCounter_DL100_Func(*this);}
	static SensorFunction* Create() { return new resetMF2switchCounter_DL100_Func; }
};

class getDebugData_DL100_Func : public DL100_Func_NAR<getDebugData_t>
{
public:
	getDebugData_DL100_Func();
	~getDebugData_DL100_Func(){};
	ComObj* Clone() const override { return new getDebugData_DL100_Func(*this);}
	static SensorFunction* Create() { return new getDebugData_DL100_Func; }
};

} // namespace DL100_V001_003_012_Skeleton
} // namespace ssbl

