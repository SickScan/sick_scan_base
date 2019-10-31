//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar2D/TiM5xx/TiM571/include/TiM571Skeleton_Types.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM571/include/TiM571Skeleton_CoLa_Extension.h"
#include "Base/Core/Sensor/include/Common/SickSensorFunction.h"

namespace ssbl
{
namespace DevTiM571Skeleton
{
class TiM571Skeleton_Func_NANR : public SickSensorFunction
{
public:
	TiM571Skeleton_Func_NANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SickSensorFunction(name,comname, idx, accessLevel, false,false) {};
	~TiM571Skeleton_Func_NANR(){};
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
class TiM571Skeleton_Func_ANR : public SickSensorFunction
{
public:
	TiM571Skeleton_Func_ANR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SickSensorFunction(name,comname, idx, accessLevel, true,false) {};
	~TiM571Skeleton_Func_ANR(){};
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_A:
			(reinterpret_cast<TiM571Skeleton_CoLaASerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM571Skeleton_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
class TiM571Skeleton_Func_NAR : public SickSensorFunction
{
public:
	TiM571Skeleton_Func_NAR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SickSensorFunction(name,comname, idx, accessLevel, false,true) {};
	~TiM571Skeleton_Func_NAR(){};
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
			(reinterpret_cast<TiM571Skeleton_CoLaADeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM571Skeleton_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Return Return_;
};

template <class Args, class Return>
class TiM571Skeleton_Func_AR : public SickSensorFunction
{
public:
	TiM571Skeleton_Func_AR(		std::string name,
		std::string comname,
		uint16_t idx,
		AccessLevel accessLevel)
			: SickSensorFunction(name,comname, idx, accessLevel, true,true) {};
	~TiM571Skeleton_Func_AR(){};
	uint32_t SerializeContent(Serializer * pSer, uint8_t * pDest, uint32_t * pOffset)
	{
		switch (pSer->GetProtocolType())
		{
		case COLA_A:
			(reinterpret_cast<TiM571Skeleton_CoLaASerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM571Skeleton_CoLaBSerializer*> (pSer))->Serialize(pDest, Args_, pOffset);
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
			(reinterpret_cast<TiM571Skeleton_CoLaADeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		case COLA_B:
			(reinterpret_cast<TiM571Skeleton_CoLaBDeserializer*> (pDes))->Deserialize(pSrc, Return_, &offset);
			break;
		default:
			break;
		}
		return offset;
	}
	Args Args_;
	Return Return_;
};

class SetScanConfig_TiM571Skeleton_Func : public TiM571Skeleton_Func_AR<SetScanConfig_t,SetScanConfig_t>
{
public:
	SetScanConfig_TiM571Skeleton_Func();
	~SetScanConfig_TiM571Skeleton_Func(){};
	ComObj* Clone() { return new SetScanConfig_TiM571Skeleton_Func(*this); }
	static SickSensorFunction* Create() { return new SetScanConfig_TiM571Skeleton_Func; }
};

class mStartMeasure_TiM571Skeleton_Func : public TiM571Skeleton_Func_NAR<mStartMeasure_t>
{
public:
	mStartMeasure_TiM571Skeleton_Func();
	~mStartMeasure_TiM571Skeleton_Func(){};
	ComObj* Clone() { return new mStartMeasure_TiM571Skeleton_Func(*this); }
	static SickSensorFunction* Create() { return new mStartMeasure_TiM571Skeleton_Func; }
};

class mStopMeasure_TiM571Skeleton_Func : public TiM571Skeleton_Func_NAR<mStopMeasure_t>
{
public:
	mStopMeasure_TiM571Skeleton_Func();
	~mStopMeasure_TiM571Skeleton_Func(){};
	ComObj* Clone() { return new mStopMeasure_TiM571Skeleton_Func(*this); }
	static SickSensorFunction* Create() { return new mStopMeasure_TiM571Skeleton_Func; }
};

class mSetDateTime_TiM571Skeleton_Func : public TiM571Skeleton_Func_AR<mSetDateTime_t,mSetDateTime_t>
{
public:
	mSetDateTime_TiM571Skeleton_Func();
	~mSetDateTime_TiM571Skeleton_Func(){};
	ComObj* Clone() { return new mSetDateTime_TiM571Skeleton_Func(*this); }
	static SickSensorFunction* Create() { return new mSetDateTime_TiM571Skeleton_Func; }
};

class Run_TiM571Skeleton_Func : public TiM571Skeleton_Func_NAR<Run_t>
{
public:
	Run_TiM571Skeleton_Func();
	~Run_TiM571Skeleton_Func(){};
	ComObj* Clone() { return new Run_TiM571Skeleton_Func(*this); }
	static SickSensorFunction* Create() { return new Run_TiM571Skeleton_Func; }
};

class WriteEeprom_TiM571Skeleton_Func : public TiM571Skeleton_Func_NAR<WriteEeprom_t>
{
public:
	WriteEeprom_TiM571Skeleton_Func();
	~WriteEeprom_TiM571Skeleton_Func(){};
	ComObj* Clone() { return new WriteEeprom_TiM571Skeleton_Func(*this); }
	static SickSensorFunction* Create() { return new WriteEeprom_TiM571Skeleton_Func; }
};

class RebootDevice_TiM571Skeleton_Func : public TiM571Skeleton_Func_NANR
{
public:
	RebootDevice_TiM571Skeleton_Func();
	~RebootDevice_TiM571Skeleton_Func(){};
	ComObj* Clone() { return new RebootDevice_TiM571Skeleton_Func(*this); }
	static SickSensorFunction* Create() { return new RebootDevice_TiM571Skeleton_Func; }
};

class LoadFactoryDefaults_TiM571Skeleton_Func : public TiM571Skeleton_Func_NANR
{
public:
	LoadFactoryDefaults_TiM571Skeleton_Func();
	~LoadFactoryDefaults_TiM571Skeleton_Func(){};
	ComObj* Clone() { return new LoadFactoryDefaults_TiM571Skeleton_Func(*this); }
	static SickSensorFunction* Create() { return new LoadFactoryDefaults_TiM571Skeleton_Func; }
};

class LoadApplicationDefaults_TiM571Skeleton_Func : public TiM571Skeleton_Func_NANR
{
public:
	LoadApplicationDefaults_TiM571Skeleton_Func();
	~LoadApplicationDefaults_TiM571Skeleton_Func(){};
	ComObj* Clone() { return new LoadApplicationDefaults_TiM571Skeleton_Func(*this); }
	static SickSensorFunction* Create() { return new LoadApplicationDefaults_TiM571Skeleton_Func; }
};

} // namespace DevTiM571Skeleton
} // namespace ssbl

