//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_Variables.h"
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_Functions.h"
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_Factory.h"
#include "Base/Core/Sensor/include/CoLa/CoLaSensorSkeleton.h"
#include "Base/Core/OS/include/VariableEventQueue.h"

namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{

class Dx1000 : public CoLaSensorSkeleton
{
public:
	Dx1000(const std::string& Ip, const std::string& interfaceName = std::string("CoLaB Port"),const std::string& localName = std::string("Dx1000"));
	~Dx1000();
	template <class T>
	SensorResult ReadVariable(Dx1000_Var<T> & rVar)
	{
		return CoLaSensorSkeleton::ReadVariable(rVar);
	}

	Protocol * DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode);

	SensorResult DeviceSpecificProtocolSwitch(ProtocolType Protocol);

	template <class T>
	SensorResult WriteVariable(Dx1000_Var<T> & rVar)
	{
		return CoLaSensorSkeleton::WriteVariable(rVar);
	}

	
	#if defined(__clang__)
		#pragma clang diagnostic push
		#pragma clang diagnostic ignored "-Woverloaded-virtual"
	#endif
	SensorResult CallFunction(Dx1000_Func_NANR & rFunc)
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
	SensorResult CallFunction(Dx1000_Func_ANR<Args> & rFunc)
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
	SensorResult CallFunction(Dx1000_Func_NAR<Return> & rFunc)
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
	SensorResult CallFunction(Dx1000_Func_AR<Args, Return> & rFunc)
	{
		return CoLaSensorSkeleton::CallFunction(rFunc);
	}
	#if defined(__clang__)
		#pragma clang diagnostic pop
	#endif

	template <class T>
	SensorResult RegisterEvent(Dx1000_Var<T>& rVar, std::function<void(uint64_t*)> OnEventCb, uint64_t cbParam)
	{
		return CoLaSensorSkeleton::RegisterEvent(rVar,OnEventCb,cbParam);
	}

	SensorResult RegisterEvent(const std::string & varName, std::function<void(uint64_t*)> OnEventCb, uint64_t cbParam)
	{
		return CoLaSensorSkeleton::RegisterEvent(varName,OnEventCb,cbParam);
	}

	template <class T>
	SensorResult RegisterEvent(Dx1000_Var<T>& rVar, VariableEventQueue** ppQueue, uint32_t nQueueElem)
	{
		return CoLaSensorSkeleton::RegisterEvent(rVar,ppQueue,nQueueElem);
	}

	SensorResult RegisterEvent(const std::string & varName,VariableEventQueue** ppQueue, uint32_t nQueueElem)
	{
		return CoLaSensorSkeleton::RegisterEvent(varName,ppQueue,nQueueElem);
	}

	template <class T>
	SensorResult DeregisterEvent(Dx1000_Var<T>& rVar, bool isDisconneted = false)
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

} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl

