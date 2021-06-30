//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar1d/DL100/DL100_2_1_0_6R/include/DL100_Variables.h"
#include "API/Skeleton/Lidar1d/DL100/DL100_2_1_0_6R/include/DL100_Functions.h"
#include "API/Skeleton/Lidar1d/DL100/DL100_2_1_0_6R/include/DL100_Factory.h"
#include "Base/Core/Sensor/include/CoLa/CoLaSensorSkeleton.h"
#include "Base/Core/OS/include/VariableEventQueue.h"

namespace ssbl
{
namespace DL100_2_1_0_6R_Skeleton
{

class DL100 : public CoLaSensorSkeleton
{
public:
	DL100(const std::string& Ip, const std::string& interfaceName = std::string("CoLaB Port"),const std::string& localName = std::string("DL100"));
	~DL100();
	template <class T>
	SensorResult ReadVariable(DL100_Var<T> & rVar)
	{
		return CoLaSensorSkeleton::ReadVariable(rVar);
	}

	Protocol * DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode);

	SensorResult DeviceSpecificProtocolSwitch(ProtocolType Protocol);

	template <class T>
	SensorResult WriteVariable(DL100_Var<T> & rVar)
	{
		return CoLaSensorSkeleton::WriteVariable(rVar);
	}

	
	#if defined(__clang__)
		#pragma clang diagnostic push
		#pragma clang diagnostic ignored "-Woverloaded-virtual"
	#endif
	SensorResult CallFunction(DL100_Func_NANR & rFunc)
	{
		return CoLaSensorSkeleton::CallFunction(rFunc);
	}
	#if defined(__clang__)
		#pragma clang diagnostic pop
	#endif

	template<class Args>
	#if defined(__clang__)
		#pragma clang diagnostic push
		#pragma clang diagnostic ignored "-Woverloaded-virtual"
	#endif
	SensorResult CallFunction(DL100_Func_ANR<Args> & rFunc)
	{
		return CoLaSensorSkeleton::CallFunction(rFunc);
	}
	#if defined(__clang__)
		#pragma clang diagnostic pop
	#endif

	template<class Return>
	#if defined(__clang__)
		#pragma clang diagnostic push
		#pragma clang diagnostic ignored "-Woverloaded-virtual"
	#endif
	SensorResult CallFunction(DL100_Func_NAR<Return> & rFunc)
	{
		return CoLaSensorSkeleton::CallFunction(rFunc);
	}
	#if defined(__clang__)
		#pragma clang diagnostic pop
	#endif

	template <class Args, class Return>
	#if defined(__clang__)
		#pragma clang diagnostic push
		#pragma clang diagnostic ignored "-Woverloaded-virtual"
	#endif
	SensorResult CallFunction(DL100_Func_AR<Args, Return> & rFunc)
	{
		return CoLaSensorSkeleton::CallFunction(rFunc);
	}
	#if defined(__clang__)
		#pragma clang diagnostic pop
	#endif

	template <class T>
	SensorResult RegisterEvent(DL100_Var<T>& rVar, std::function<void(uint64_t*)> OnEventCb, uint64_t cbParam)
	{
		return CoLaSensorSkeleton::RegisterEvent(rVar,OnEventCb,cbParam);
	}

	SensorResult RegisterEvent(const std::string & varName, std::function<void(uint64_t*)> OnEventCb, uint64_t cbParam)
	{
		return CoLaSensorSkeleton::RegisterEvent(varName,OnEventCb,cbParam);
	}

	template <class T>
	SensorResult RegisterEvent(DL100_Var<T>& rVar, VariableEventQueue** ppQueue, uint32_t nQueueElem)
	{
		return CoLaSensorSkeleton::RegisterEvent(rVar,ppQueue,nQueueElem);
	}

	SensorResult RegisterEvent(const std::string & varName,VariableEventQueue** ppQueue, uint32_t nQueueElem)
	{
		return CoLaSensorSkeleton::RegisterEvent(varName,ppQueue,nQueueElem);
	}

	template <class T>
	SensorResult DeregisterEvent(DL100_Var<T>& rVar, bool isDisconneted = false)
	{
		return CoLaSensorSkeleton::DeregisterEvent(rVar, isDisconneted);
	}

	SensorResult DeregisterEvent(const std::string & varName, bool isDisconneted = false)
	{
		return CoLaSensorSkeleton::DeregisterEvent(varName, isDisconneted);
	}

	SensorResult StoreParameter();
	SensorResult RebootSensor();
};

} // namespace DL100_2_1_0_6R_Skeleton
} // namespace ssbl

