//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/include/TiM571Skeleton/TiM571Skeleton_Variables.h"
#include "API/Skeleton/include/TiM571Skeleton/TiM571Skeleton_Functions.h"
#include "Base/Core/Sensor/include/CoLa/CoLaSensorSkeleton.h"
#include "Base/Core/OS/include/VariableEventQueue.h"

namespace ssbl
{
namespace DevTiM571Skeleton
{

class TiM571Skeleton : public CoLaSensorSkeleton
{
public:
	TiM571Skeleton(const std::string& Ip, const std::string& interfaceName = std::string("CoLa Port"),const std::string& localName = std::string("TiM571"));
	~TiM571Skeleton();
	template <class T>
	SensorResult ReadVariable(TiM571Skeleton_Var<T> & rVar)
	{
		return CoLaSensorSkeleton::ReadVariable(rVar);
	}

	Protocol * DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode);

	SensorResult DeviceSpecificProtocolSwitch(ProtocolType Protocol);

	template <class T>
	SensorResult WriteVariable(TiM571Skeleton_Var<T> & rVar)
	{
		return CoLaSensorSkeleton::WriteVariable(rVar);
	}

	
	SensorResult CallFunction(TiM571Skeleton_Func_NANR & rFunc)
	{
		return CoLaSensorSkeleton::CallFunction(rFunc);
	}

	template<class Args>
	SensorResult CallFunction(TiM571Skeleton_Func_ANR<Args> & rFunc)
	{
		return CoLaSensorSkeleton::CallFunction(rFunc);
	}

	template<class Return>
	SensorResult CallFunction(TiM571Skeleton_Func_NAR<Return> & rFunc)
	{
		return CoLaSensorSkeleton::CallFunction(rFunc);
	}

	template <class Args, class Return>
	SensorResult CallFunction(TiM571Skeleton_Func_AR<Args, Return> & rFunc)
	{
		return CoLaSensorSkeleton::CallFunction(rFunc);
	}

	template <class T>
	SensorResult RegisterEvent(TiM571Skeleton_Var<T>& rVar, std::function<void(uint64_t*)> OnEventCb, uint64_t cbParam)
	{
		return CoLaSensorSkeleton::RegisterEvent(rVar,OnEventCb,cbParam);
	}

	SensorResult RegisterEvent(const std::string & varName, std::function<void(uint64_t*)> OnEventCb, uint64_t cbParam)
	{
		return CoLaSensorSkeleton::RegisterEvent(varName,OnEventCb,cbParam);
	}

	template <class T>
	SensorResult RegisterEvent(TiM571Skeleton_Var<T>& rVar, VariableEventQueue** ppQueue, uint32_t nQueueElem)
	{
		return CoLaSensorSkeleton::RegisterEvent(rVar,ppQueue,nQueueElem);
	}

	SensorResult RegisterEvent(const std::string & varName,VariableEventQueue** ppQueue, uint32_t nQueueElem)
	{
		return CoLaSensorSkeleton::RegisterEvent(varName,ppQueue,nQueueElem);
	}

	template <class T>
	SensorResult DeregisterEvent(TiM571Skeleton_Var<T>& rVar)
	{
		return CoLaSensorSkeleton::DeregisterEvent(rVar);
	}

	SensorResult DeregisterEvent(const std::string & varName)
	{
		return CoLaSensorSkeleton::DeregisterEvent(varName);
	}

	SensorResult StoreParameter();
	SensorResult RebootSensor();
};

} // namespace DevTiM571Skeleton
} // namespace ssbl

