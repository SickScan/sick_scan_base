//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar2d/TiM7x1/TiM7x1_V3_17_17_09_19/include/TiM7x1_Types.h"
#include "API/Skeleton/Lidar2d/TiM7x1/TiM7x1_V3_17_17_09_19/include/TiM7x1_CoLa_Extension.h"
#include "Base/Core/Sensor/include/Common/SensorFunction.h"

namespace ssbl
{
namespace TiM7x1_V3_17_17_09_19_Skeleton
{
class TiM7x1_Func_NANR : public SensorFunction
{
public:
	TiM7x1_Func_NANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, false,false) {};
	~TiM7x1_Func_NANR(){};
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
class TiM7x1_Func_ANR : public SensorFunction
{
public:
	TiM7x1_Func_ANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, true,false) {};
	~TiM7x1_Func_ANR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_A:
			(reinterpret_cast<TiM7x1_CoLaASerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM7x1_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
class TiM7x1_Func_NAR : public SensorFunction
{
public:
	TiM7x1_Func_NAR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, false,true) {};
	~TiM7x1_Func_NAR(){};
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
		case COLA_A:
			(reinterpret_cast<TiM7x1_CoLaADeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM7x1_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Return Return_;
};

template <class Args, class Return>
class TiM7x1_Func_AR : public SensorFunction
{
public:
	TiM7x1_Func_AR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SensorFunction(name,comname, idx, accessLevel, true,true) {};
	~TiM7x1_Func_AR(){};
	virtual ComObj* Clone() const = 0;
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_A:
			(reinterpret_cast<TiM7x1_CoLaASerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM7x1_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
			(reinterpret_cast<TiM7x1_CoLaADeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM7x1_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Args Args_;
	Return Return_;
};

class SetScanConfig_TiM7x1_Func : public TiM7x1_Func_AR<SetScanConfig_t,SetScanConfig_t>
{
public:
	SetScanConfig_TiM7x1_Func();
	~SetScanConfig_TiM7x1_Func(){};
	ComObj* Clone() const override { return new SetScanConfig_TiM7x1_Func(*this);}
	static SensorFunction* Create() { return new SetScanConfig_TiM7x1_Func; }
};

class mStartMeasure_TiM7x1_Func : public TiM7x1_Func_NAR<mStartMeasure_t>
{
public:
	mStartMeasure_TiM7x1_Func();
	~mStartMeasure_TiM7x1_Func(){};
	ComObj* Clone() const override { return new mStartMeasure_TiM7x1_Func(*this);}
	static SensorFunction* Create() { return new mStartMeasure_TiM7x1_Func; }
};

class mStopMeasure_TiM7x1_Func : public TiM7x1_Func_NAR<mStopMeasure_t>
{
public:
	mStopMeasure_TiM7x1_Func();
	~mStopMeasure_TiM7x1_Func(){};
	ComObj* Clone() const override { return new mStopMeasure_TiM7x1_Func(*this);}
	static SensorFunction* Create() { return new mStopMeasure_TiM7x1_Func; }
};

class mSetDateTime_TiM7x1_Func : public TiM7x1_Func_AR<mSetDateTime_t,mSetDateTime_t>
{
public:
	mSetDateTime_TiM7x1_Func();
	~mSetDateTime_TiM7x1_Func(){};
	ComObj* Clone() const override { return new mSetDateTime_TiM7x1_Func(*this);}
	static SensorFunction* Create() { return new mSetDateTime_TiM7x1_Func; }
};

class Run_TiM7x1_Func : public TiM7x1_Func_NAR<Run_t>
{
public:
	Run_TiM7x1_Func();
	~Run_TiM7x1_Func(){};
	ComObj* Clone() const override { return new Run_TiM7x1_Func(*this);}
	static SensorFunction* Create() { return new Run_TiM7x1_Func; }
};

class WriteEeprom_TiM7x1_Func : public TiM7x1_Func_NAR<WriteEeprom_t>
{
public:
	WriteEeprom_TiM7x1_Func();
	~WriteEeprom_TiM7x1_Func(){};
	ComObj* Clone() const override { return new WriteEeprom_TiM7x1_Func(*this);}
	static SensorFunction* Create() { return new WriteEeprom_TiM7x1_Func; }
};

class RebootDevice_TiM7x1_Func : public TiM7x1_Func_NANR
{
public:
	RebootDevice_TiM7x1_Func();
	~RebootDevice_TiM7x1_Func(){};
	ComObj* Clone() const override { return new RebootDevice_TiM7x1_Func(*this);}
	static SensorFunction* Create() { return new RebootDevice_TiM7x1_Func; }
};

class LoadFactoryDefaults_TiM7x1_Func : public TiM7x1_Func_NANR
{
public:
	LoadFactoryDefaults_TiM7x1_Func();
	~LoadFactoryDefaults_TiM7x1_Func(){};
	ComObj* Clone() const override { return new LoadFactoryDefaults_TiM7x1_Func(*this);}
	static SensorFunction* Create() { return new LoadFactoryDefaults_TiM7x1_Func; }
};

class LoadApplicationDefaults_TiM7x1_Func : public TiM7x1_Func_NANR
{
public:
	LoadApplicationDefaults_TiM7x1_Func();
	~LoadApplicationDefaults_TiM7x1_Func(){};
	ComObj* Clone() const override { return new LoadApplicationDefaults_TiM7x1_Func(*this);}
	static SensorFunction* Create() { return new LoadApplicationDefaults_TiM7x1_Func; }
};

} // namespace TiM7x1_V3_17_17_09_19_Skeleton
} // namespace ssbl

