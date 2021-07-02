/**
 * \file
 * \brief CoLa Sensor Skelton
 *
 * Copyright 2019, SICK AG, Waldkirch
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "Base/Core/Sensor/include/CoLa/CoLaSensorSkeleton.h"
#include "Base/Core/OS/include/Task.h"
#include "Base/Core/OS/include/Timer.h"

namespace ssbl {

//=============================================================================
//=============================================================================
class CoLaDeviceTimeoutMonitor : public Timer, Task {
 public:
  CoLaDeviceTimeoutMonitor(CoLaSensorSkeleton *pParent)
      : Timer(10000), start_(false), pParent_(pParent){};
  virtual ~CoLaDeviceTimeoutMonitor() { Stop(); };

  void OnTimer() { trigger_.SignalEvent(); };

  bool TaskLoop(void) {
    std::string dummy;
    if (EVENT_RECEIVED == trigger_.WaitForEvent(15000)) {
      SSBL_LOG_DEBUG("Test if device is alive");
      SensorResult ret = pParent_->GetDeviceName(dummy);

      if (start_) {
        if (ret == SSBL_SUCCESS) {
          SSBL_LOG_DEBUG("Device is alive -> restart timeout monitor");
          Timer::Start();
        } else {
          SSBL_LOG_WARNING(
              "Timeout monitor timer expired and received no response from "
              "sensor, Error: %d",
              ret);
          pParent_->NotifyDeviceLost();
          // Stop();
        }
      }
    }

    return true;
  }
  void StartTimerTask() {
    start_ = true;
    Task::Run();
    Timer::Start();
  }
  void Stop() {
    start_ = false;
    Timer::Stop();
    Task::Stop();
  }

 private:
  bool start_;
  CoLaSensorSkeleton *pParent_;
  Event trigger_;
};

//=============================================================================
//=============================================================================
CoLaSensorSkeleton::CoLaSensorSkeleton(const std::string &localName,
                                       size_t txBufSize, size_t rxBufSize)
    : SensorSkeleton(localName, txBufSize, rxBufSize)

{
  pTimoutMonior = new CoLaDeviceTimeoutMonitor(this);
  ProvideCallbackEvent("DeviceLost");
}
//=============================================================================
//=============================================================================
CoLaSensorSkeleton::~CoLaSensorSkeleton() {
  pTimoutMonior->Stop();
  delete pTimoutMonior;
}

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::LogOn(AccessLevel userLevel) {
  SensorResult ret = SSBL_SUCCESS;

  if (LEVEL_RUN >= userLevel) {
    return ret;  // simply return succes if access level is not required
  }

  if (MAX_USER_LEVELS <= userLevel) {
    ret = SSBL_ERR_INVALID_USER_LEVEL;
  } else {
    mSetAccessMode_.Args.NewMode = (uint8_t)userLevel;
    mSetAccessMode_.Args.Password = GetPassword(userLevel);
    mSetAccessMode_.ReturnValue.success = 0;
    ret = pActiveProtocol_->SendRequest(REQ_INVOKE_METHOD, mSetAccessMode_);

    if (ret == SSBL_SUCCESS) {
      if (mSetAccessMode_.ReturnValue.success == 0) {
        ret = SSBL_ERR_ACCESS_DENIED;
      }
    }
  }

  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::LogOff(AccessLevel userLevel) {
  SensorResult ret = SSBL_SUCCESS;

  if (LEVEL_OPERATOR >= userLevel) {
    return ret;  // simply return success if access level is not required
  }
  mSetAccessMode_.Args.NewMode = LEVEL_OPERATOR;
  mSetAccessMode_.Args.Password = GetPassword(LEVEL_OPERATOR);
  mSetAccessMode_.ReturnValue.success = 0;
  ret = pActiveProtocol_->SendRequest(REQ_INVOKE_METHOD, mSetAccessMode_);

  if (ret == SSBL_SUCCESS) {
    if (mSetAccessMode_.ReturnValue.success == 0) {
      ret = SSBL_ERR_ACCESS_DENIED;
    }
  }

  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::Connect(void) {
  SensorResult ret = SensorSkeleton::Connect();

  if ((SSBL_SUCCESS == ret) && (READY_FOR_USER_REQUEST == stateInternal_)) {
    pTimoutMonior->StartTimerTask();
  }

  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::Disconnect(bool force) {
  SensorResult ret;
  ret = SensorSkeleton::Disconnect(force);

  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::ReadVariable(SensorVariable &rVar) {
  AccessLevel lvl;
  SensorResult ret = SSBL_ERR_SENSOR_NOT_IN_READY_FOR_REQUEST_STATE;

  // sensor is ready for request either if state is set to
  // READY_FOR_USER_REQUEST or if ConnState is set to INITIALIZING
  if (IsReadyForRequest()) {
    if (!VariableRepo.EntryExists(SensorName_ + rVar.GetName())) {
      if (0 != rVar.GetName().compare("DeviceIdent")) {
        return SSBL_ERR_VARIABLE_DOES_NOT_BELONG_TO_THIS_SENSOR;
      }
    }
    lvl = rVar.GetReadAccessLevel();
    reqLock.Lock();
    ret = LogOn(lvl);

    if (SSBL_SUCCESS == ret) {
      ret = pActiveProtocol_->SendRequest(REQ_READ_VARIABLE, rVar);

      if (SSBL_SUCCESS == ret) {
        ret = LogOff(lvl);
      } else {
        // log off without overwriting return
        LogOff(lvl);
      }
    }
    reqLock.Unlock();
  }

  return ret;
};

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::WriteVariable(SensorVariable &rVar) {
  AccessLevel lvl;
  SensorResult ret = SSBL_ERR_SENSOR_NOT_IN_READY_FOR_REQUEST_STATE;

  if (IsReadyForRequest()) {
    if (!VariableRepo.EntryExists(SensorName_ + rVar.GetName())) {
      if (0 != rVar.GetName().compare("DeviceIdent")) {
        return SSBL_ERR_VARIABLE_DOES_NOT_BELONG_TO_THIS_SENSOR;
      }
    }
    if (rVar.IsReadOnly()) {
      return SSBL_ERR_ATTEMPT_TO_WRITE_READONLY_VAR;
    }

    lvl = rVar.GetWriteAccessLevel();
    reqLock.Lock();
    ret = LogOn(lvl);

    if (SSBL_SUCCESS == ret) {
      ret = pActiveProtocol_->SendRequest(REQ_WRITE_VARIABLE, rVar);

      if (SSBL_SUCCESS == ret) {
        ret = LogOff(lvl);
      } else {
        // log off without overwriting return
        LogOff(lvl);
      }
    }
    reqLock.Unlock();
  }
  return ret;
}
//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::RegisterEvent(
    SensorVariable &rVar, std::function<void(uint64_t *)> OnEventCb,
    uint64_t cbParam) {
  AccessLevel lvl;
  SensorResult ret = SSBL_ERR_SENSOR_NOT_IN_READY_FOR_REQUEST_STATE;

  if (IsReadyForRequest()) {
    if (!VariableRepo.EntryExists(SensorName_ + rVar.GetName())) {
      if (0 != rVar.GetName().compare("DeviceIdent")) {
        return SSBL_ERR_VARIABLE_DOES_NOT_BELONG_TO_THIS_SENSOR;
      }
    }

    if (!rVar.ProvidesEvent()) {
      return SSBL_ERR_VARIABLE_DOES_NOT_PROVIDE_EVENT;
    }

    lvl = rVar.GetReadAccessLevel();
    reqLock.Lock();

    ret = LogOn(lvl);

    if (SSBL_SUCCESS == ret) {
      ret = pActiveProtocol_->RegisterEvent(rVar, OnEventCb, cbParam, NULL);

      if (SSBL_SUCCESS == ret) {
        ret = pActiveProtocol_->SendRequest(REQ_REGISTER_EVENT, rVar);
      }

      if (SSBL_SUCCESS == ret) {
        ret = LogOff(lvl);
      } else {
        // log off without overwriting return
        LogOff(lvl);
      }
    }
    reqLock.Unlock();
  }

  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::RegisterEvent(
    const std::string &varName, std::function<void(uint64_t *)> OnEventCb,
    uint64_t cbParam) {
  SensorResult ret = SSBL_ERR_VARIABLE_DOES_NOT_BELONG_TO_THIS_SENSOR;
  SensorVariable *pVar = this->CreateVariable(varName);

  if (pVar != nullptr) {
    ret = RegisterEvent(*pVar, OnEventCb, cbParam);
    delete pVar;
  }
  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::RegisterEvent(SensorVariable &rVar,
                                               VariableEventQueue **ppQueue,
                                               uint32_t nQueueElem) {
  AccessLevel lvl;
  SensorResult ret = SSBL_ERR_SENSOR_NOT_IN_READY_FOR_REQUEST_STATE;

  if (IsReadyForRequest()) {
    if (!VariableRepo.EntryExists(SensorName_ + rVar.GetName())) {
      if (0 != rVar.GetName().compare("DeviceIdent")) {
        return SSBL_ERR_VARIABLE_DOES_NOT_BELONG_TO_THIS_SENSOR;
      }
    }

    if (!rVar.ProvidesEvent()) {
      return SSBL_ERR_VARIABLE_DOES_NOT_PROVIDE_EVENT;
    }

    lvl = rVar.GetReadAccessLevel();
    reqLock.Lock();

    ret = LogOn(lvl);

    if (SSBL_SUCCESS == ret) {
      VariableEventQueue *pQueue;
      if (*ppQueue == NULL) {
        pQueue = new VariableEventQueue(rVar, nQueueElem);
        *ppQueue = pQueue;
      } else {
        pQueue = *ppQueue;
      }
      ret = pActiveProtocol_->RegisterEvent(rVar, NULL, 0, pQueue);

      if (SSBL_SUCCESS == ret) {
        ret = pActiveProtocol_->SendRequest(REQ_REGISTER_EVENT, rVar);
      }

      if (SSBL_SUCCESS == ret) {
        ret = LogOff(lvl);
      } else {
        // log off without overwriting return
        LogOff(lvl);
      }
    }
    reqLock.Unlock();
  }

  return ret;
}

SensorResult CoLaSensorSkeleton::RegisterEvent(const std::string &varName,
                                               VariableEventQueue **ppQueue,
                                               uint32_t nQueueElem) {
  SensorResult ret = SSBL_ERR_VARIABLE_DOES_NOT_BELONG_TO_THIS_SENSOR;
  SensorVariable *pVar = this->CreateVariable(varName);

  if (pVar != nullptr) {
    ret = RegisterEvent(*pVar, ppQueue, nQueueElem);
    delete pVar;
  }
  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::DeregisterEvent(SensorVariable &rVar,
                                                 bool isDisconneted) {
  AccessLevel lvl;
  SensorResult ret = SSBL_ERR_SENSOR_NOT_IN_READY_FOR_REQUEST_STATE;
  if (isDisconneted) {
    ret = pActiveProtocol_->DeregisterEvent(rVar);
  } else {
    if (IsReadyForRequest() || isDisconneted) {
      if (!VariableRepo.EntryExists(SensorName_ + rVar.GetName())) {
        if (0 != rVar.GetName().compare("DeviceIdent")) {
          return SSBL_ERR_VARIABLE_DOES_NOT_BELONG_TO_THIS_SENSOR;
        }
      }

      if (!rVar.ProvidesEvent()) {
        return SSBL_ERR_VARIABLE_DOES_NOT_PROVIDE_EVENT;
      }
      if (pActiveProtocol_->IsVarEventRegistered(rVar)) {
        reqLock.Lock();
        lvl = rVar.GetReadAccessLevel();
        ret = LogOn(lvl);
        if (SSBL_SUCCESS == ret) {
          ret = pActiveProtocol_->SendRequest(REQ_UNREGISTER_EVENT, rVar);
        }
        if (SSBL_SUCCESS == ret) {
          ret = LogOff(lvl);
        } else {
          // log off without overwriting return
          LogOff(lvl);
        }
        reqLock.Unlock();
        if (SSBL_SUCCESS == ret) {
          ret = pActiveProtocol_->DeregisterEvent(rVar);
        }
      } else {
        ret = SSBL_ERR_EVENT_ALREADY_UNREGISTERED;
      }
    }
  }
  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::DeregisterEvent(const std::string &varName,
                                                 bool isDisconneted) {
  SensorResult ret = SSBL_ERR_VARIABLE_DOES_NOT_BELONG_TO_THIS_SENSOR;
  SensorVariable *pVar = this->CreateVariable(varName);

  if (pVar != nullptr) {
    ret = DeregisterEvent(*pVar, isDisconneted);
    delete pVar;
  }
  return ret;
}
//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::DeregisterAllEvents(bool isDisconneted) {
  SensorResult ret = SSBL_ERR_SENSOR_NOT_IN_READY_FOR_REQUEST_STATE;
  if (IsReadyForRequest() || isDisconneted) {
    reqLock.Lock();
    std::vector<std::string> eventVarNames =
        pActiveProtocol_->GetRegisteredEventNames();

    for (auto x : eventVarNames) {
      ret = DeregisterEvent(x, isDisconneted);
      if (ret != SSBL_SUCCESS) {
        SSBL_LOG_WARNING("Failed to unregister event of variable %s",
                         x.c_str());
      }
    }

    reqLock.Unlock();
  }
  return ret;
}
//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::CallFunction(SensorFunction &rFunc) {
  AccessLevel lvl;
  SensorResult ret = SSBL_ERR_SENSOR_NOT_IN_READY_FOR_REQUEST_STATE;

  if (IsReadyForRequest()) {
    reqLock.Lock();
    lvl = rFunc.GetAccessLevel();
    ret = LogOn(lvl);

    if (SSBL_SUCCESS == ret) {
      ret = pActiveProtocol_->SendRequest(REQ_INVOKE_METHOD, rFunc);

      if (SSBL_SUCCESS == ret) {
        ret = LogOff(lvl);
      } else {
        // log off without overwriting return
        LogOff(lvl);
      }
    }
    reqLock.Unlock();
  }
  return ret;
}

//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::GetDeviceName(std::string &DeviceName) {
  SensorResult ret = SSBL_ERR_SENSOR_NOT_IN_READY_FOR_REQUEST_STATE;

  VarDeviceIdent Var;

  ret = ReadVariable(Var);
  if (SSBL_SUCCESS == ret) {
    DeviceName.clear();
    DeviceName.append((const char *)Var.Value_.Name.Text,
                      Var.Value_.Name.length);
  }

  return ret;
}
//=============================================================================
//=============================================================================
SensorResult CoLaSensorSkeleton::DeviceSpecificTestProtocol() {
  std::string name;
  SensorResult ret = GetDeviceName(name);

  if (SSBL_SUCCESS != ret) {
    ret = SSBL_ERR_PROTOCOL_NOT_DETECTED;
  }
  return ret;
}

//=============================================================================
//=============================================================================
void CoLaSensorSkeleton::NotifyDeviceLost() { FireCallback("DeviceLost"); }

}  // namespace ssbl
