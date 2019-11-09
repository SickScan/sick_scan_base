// Copyright 2019, SICK AG, Waldkirch
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License
#pragma once
#include "Base/Core/Sensor/include/Common/SensorSkeleton.h"
#include "Base/Core/Sensor/private/CoLa/DefaultCoLaFunctions.h"

namespace ssbl {

class CoLaDeviceTimeoutMonitor;
class MsgQueue;

class CoLaSensorSkeleton : public SensorSkeleton {
 public:
  CoLaSensorSkeleton(const std::string& localName, size_t txBufSize,
                     size_t rxBufSize);
  ~CoLaSensorSkeleton();

  SensorResult Connect(void);
  SensorResult Disconnect(bool force = false);
  SensorResult ReadVariable(SensorVariable& rVar);
  SensorResult WriteVariable(SensorVariable& rVar);
  SensorResult RegisterEvent(SensorVariable& rVar,
                             std::function<void(uint64_t*)> OnEventCb,
                             uint64_t cbParam);
  SensorResult RegisterEvent(const std::string& varName,
                             std::function<void(uint64_t*)> OnEventCb,
                             uint64_t cbParam);

  SensorResult RegisterEvent(SensorVariable& rVar, VariableEventQueue** ppQueue,
                             uint32_t nQueueElem);

  SensorResult RegisterEvent(const std::string& varName,
                             VariableEventQueue** ppQueue, uint32_t nQueueElem);

  SensorResult DeregisterEvent(SensorVariable& rVar,
                               bool isDisconneted = false);
  SensorResult DeregisterEvent(const std::string& varName,
                               bool isDisconneted = false);
  SensorResult DeregisterAllEvents(bool isDisconneted = false);

  SensorResult CallFunction(SensorFunction& rFunc);

  SensorResult GetDeviceName(std::string& DeviceName);

  SensorResult DeviceSpecificTestProtocol();

 private:
  friend class CoLaDeviceTimeoutMonitor;

  void NotifyDeviceLost();
  SensorResult LogOn(AccessLevel userLevel);
  SensorResult LogOff(AccessLevel userLevel);

  Mutex reqLock;
  CoLaDeviceTimeoutMonitor* pTimoutMonior;
  MethSetAccessMode mSetAccessMode_;
};

}  // namespace ssbl
