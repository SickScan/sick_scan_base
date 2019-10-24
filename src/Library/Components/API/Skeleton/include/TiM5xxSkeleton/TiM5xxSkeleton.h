//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Functions.h"
#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_Variables.h"
#include "Core/OS/include/VariableEventQueue.h"
#include "Core/Sensor/include/CoLa/CoLaSensorSkeleton.h"

namespace ssbl {
namespace DevTiM5xxSkeleton {

class TiM5xxSkeleton : public CoLaSensorSkeleton {
 public:
  TiM5xxSkeleton(const std::string& Ip,
                 const std::string& interfaceName = std::string("CoLa Port"),
                 const std::string& localName = std::string("TiM5xx"));
  ~TiM5xxSkeleton();
  template <class T>
  SensorResult ReadVariable(TiM5xxSkeleton_Var<T>& rVar) {
    return CoLaSensorSkeleton::ReadVariable(rVar);
  }

  Protocol* DeviceSpecificProtocolInit(ProtocolType Protocol,
                                       AddressingMode AddrMode);

  SensorResult DeviceSpecificProtocolSwitch(ProtocolType Protocol);

  template <class T>
  SensorResult WriteVariable(TiM5xxSkeleton_Var<T>& rVar) {
    return CoLaSensorSkeleton::WriteVariable(rVar);
  }

  SensorResult CallFunction(TiM5xxSkeleton_Func_NANR& rFunc) {
    return CoLaSensorSkeleton::CallFunction(rFunc);
  }

  template <class Args>
  SensorResult CallFunction(TiM5xxSkeleton_Func_ANR<Args>& rFunc) {
    return CoLaSensorSkeleton::CallFunction(rFunc);
  }

  template <class Return>
  SensorResult CallFunction(TiM5xxSkeleton_Func_NAR<Return>& rFunc) {
    return CoLaSensorSkeleton::CallFunction(rFunc);
  }

  template <class Args, class Return>
  SensorResult CallFunction(TiM5xxSkeleton_Func_AR<Args, Return>& rFunc) {
    return CoLaSensorSkeleton::CallFunction(rFunc);
  }

  template <class T>
  SensorResult RegisterEvent(TiM5xxSkeleton_Var<T>& rVar,
                             std::function<void(uint64_t*)> OnEventCb,
                             uint64_t cbParam) {
    return CoLaSensorSkeleton::RegisterEvent(rVar, OnEventCb, cbParam);
  }

  SensorResult RegisterEvent(const std::string& varName,
                             std::function<void(uint64_t*)> OnEventCb,
                             uint64_t cbParam) {
    return CoLaSensorSkeleton::RegisterEvent(varName, OnEventCb, cbParam);
  }

  template <class T>
  SensorResult RegisterEvent(TiM5xxSkeleton_Var<T>& rVar,
                             VariableEventQueue** ppQueue,
                             uint32_t nQueueElem) {
    return CoLaSensorSkeleton::RegisterEvent(rVar, ppQueue, nQueueElem);
  }

  SensorResult RegisterEvent(const std::string& varName,
                             VariableEventQueue** ppQueue,
                             uint32_t nQueueElem) {
    return CoLaSensorSkeleton::RegisterEvent(varName, ppQueue, nQueueElem);
  }

  template <class T>
  SensorResult DeregisterEvent(TiM5xxSkeleton_Var<T>& rVar) {
    return CoLaSensorSkeleton::DeregisterEvent(rVar);
  }

  SensorResult DeregisterEvent(const std::string& varName) {
    return CoLaSensorSkeleton::DeregisterEvent(varName);
  }

  SensorResult StoreParameter();
  SensorResult RebootSensor();
};

}  // namespace DevTiM5xxSkeleton
}  // namespace ssbl
