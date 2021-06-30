/**
 * \file
 * \brief Factory to create SickLidar2d objects
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

#include "API/Family/Lidar2d/Common/include/Lidar2d.h"
#include "API/Family/Lidar2d/Common/private/TiM5xx_Model_Factory.h"
#include "API/Family/Lidar2d/Common/private/TiM5xx_Skeleton_Factory.h"
#include "Base/Core/Common/include/Hash.h"
#include "Base/Core/Sensor/include/Common/SensorSkeleton.h"

#include "Base/Core/OS/include/Task.h"
#include "Base/Core/OS/include/Event.h"
#include "Base/Core/OS/include/Timer.h"
#include "Base/Logger/include/Logger.h"

#include <string>

using namespace std;

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl {

Lidar2dStateText StateInfo[] = {{LIDAR2D_STATE_ERROR, "Error"},
                                {LIDAR2D_STATE_INIT, "Init"},
                                {LIDAR2D_STATE_IDLE, "Idle"},
                                {LIDAR2D_STATE_BUSY_IDLE, "BusyIdle"},
                                {LIDAR2D_STATE_STARTED, "Started"},
                                {LIDAR2D_STATE_STOPPED, "Stopped"}

};

class ReconnectTimer : public Timer, Task {
 public:
  //========================================================================
  ReconnectTimer(Lidar2d_Model* pParent)
      : Timer(5000), start_(false), pParent_(pParent){};
  //========================================================================
  ~ReconnectTimer() { Timer::Stop(); };
  //========================================================================
  void OnTimer() { trigger_.SignalEvent(); };

  //========================================================================
  bool TaskLoop(void) {
    if (EVENT_RECEIVED == trigger_.WaitForEvent(0xFFFFFFFF)) {
      Lidar2dState tmp = pParent_->StoredState_;
      SensorResult ret = pParent_->ProcessStateMachine(LIDAR2D_STATE_BUSY_IDLE);
      pParent_->StoredState_ = tmp;

      if (start_) {
        if (SSBL_SUCCESS != ret) {
          if (pParent_->AutoReconnect_) {
            SSBL_LOG_INFO("ReconnectTimer: Trying to reconnect in 5 seconds");
            Timer::Start();
          }
        } else {
          pParent_->ProcessStateMachine(pParent_->StoredState_);
          // Stop();
        }
      }
    }

    return true;
  }
  //========================================================================
  void Start() {
    start_ = true;
    Task::Run();
    Timer::Start();
  };
  //========================================================================
  void Stop() {
    start_ = false;
    Timer::Stop();
    Task::Stop();
  };

 private:
  bool start_;
  Lidar2d_Model* pParent_;
  Event trigger_;
};

Lidar2d_Model::Lidar2d_Model(SensorSkeleton* pSkeleton)
    : pLidar2DSkeleton_(pSkeleton),
      IsInitialized_(false),
      AutoReconnect_(true),
      LidarState_(LIDAR2D_STATE_ERROR),
      StoredState_(LIDAR2D_STATE_ERROR),
      StartAngle_(0),
      StopAngle_(0),
      CallbackFunc_(nullptr),
      CallbackParam_(0),
      ScanProcessorFunc_(nullptr) {
  pReconnectTimer = new ReconnectTimer(this);
}

//===========================================================================
//===========================================================================
Lidar2dState Lidar2d_Model::GetLidarState(void) { return LidarState_; }

//===========================================================================
//===========================================================================
SensorResult Lidar2d_Model::GetDeviceName(std::string& DeviceName) {
  SensorResult ret = SSBL_ERR_SENSOR_REQUEST_FAILED;
  DeviceName = "";
  if (pLidar2DSkeleton_ != nullptr) {
    ret = pLidar2DSkeleton_->GetDeviceName(DeviceName);
  }
  return ret;
}

//===========================================================================
//===========================================================================
void Lidar2d_Model::SetLidarState(Lidar2dState LidarState) {
  LidarState_ = LidarState;
}

//===========================================================================
//===========================================================================
void Lidar2d_Model::SetInitialized() {
  pLidar2DSkeleton_->RegisterToCallbackEvent(
      "DeviceLost", std::bind(&Lidar2d_Model::HandleDeviceLost, this, 0));
  IsInitialized_ = true;
};

//===========================================================================
//===========================================================================
SensorResult Lidar2d_Model::ProcessStateMachine(Lidar2dState TargetState) {
  SensorResult ret = SSBL_SUCCESS;

  if (TargetState != GetLidarState()) {
    if (GetLidarState() == LIDAR2D_STATE_ERROR) {
      SetLidarState(LIDAR2D_STATE_INIT);
    }

    while ((GetLidarState() != TargetState) &&
           (GetLidarState() != LIDAR2D_STATE_ERROR)) {
      ret = MoveToLidarState(TargetState);
    }
  }
  return ret;
}

//===========================================================================
//===========================================================================
SensorResult Lidar2d_Model::MoveToLidarState(Lidar2dState TargetState) {
  SensorResult ret = SSBL_SUCCESS;

  switch (LidarState_) {
    case LIDAR2D_STATE_INIT:
      ret = HandleStateInit(TargetState);
      break;
    case LIDAR2D_STATE_IDLE:
      ret = HandleStateIdle(TargetState);
      break;
    case LIDAR2D_STATE_BUSY_IDLE:
      ret = HandleStateBusyIdle(TargetState);
      break;
    case LIDAR2D_STATE_STARTED:
      ret = HandleStateStart(TargetState);
      break;
    case LIDAR2D_STATE_STOPPED:
      ret = HandleStateStop(TargetState);
      break;

    default:
      break;
  }

  return ret;
}

//===========================================================================
//===========================================================================
SensorResult Lidar2d_Model::HandleStateInit(Lidar2dState TargetState) {
  SensorResult ret = SSBL_ERR_INVALID_STATE;
  if (TargetState >= LIDAR2D_STATE_IDLE) {
    if (IsInitialized_) {
      // Transition Ok
      ret = SSBL_SUCCESS;
      SetLidarState(LIDAR2D_STATE_IDLE);
    } else {
      ret = HandleStateError(TargetState, ret, "Lidar not initialized");
    }
  } else {
    ret = HandleStateError(TargetState, ret, "Invalid Lidar state transition");
  }
  return ret;
}

//===========================================================================
//===========================================================================
SensorResult Lidar2d_Model::HandleStateIdle(Lidar2dState TargetState) {
  SensorResult ret = SSBL_ERR_INVALID_STATE;
  if (TargetState >= LIDAR2D_STATE_BUSY_IDLE) {
    ret = pLidar2DSkeleton_->Connect();
    if (ret == SSBL_SUCCESS) {
      ret = HandleLidarConfigure();
      if (ret == SSBL_SUCCESS) {
        SetLidarState(LIDAR2D_STATE_BUSY_IDLE);
      } else {
        ret = HandleStateError(TargetState, ret, "Configuration error");
      }
    } else {
      ret = HandleStateError(TargetState, ret, "Connection error");
    }
  } else {
    ret = HandleStateError(TargetState, ret, "Invalid Lidar state transition");
  }
  return ret;
}

//===========================================================================
//===========================================================================
SensorResult Lidar2d_Model::HandleStateBusyIdle(Lidar2dState TargetState) {
  SensorResult ret = SSBL_ERR_INVALID_STATE;

  switch (TargetState) {
    case LIDAR2D_STATE_STARTED:
      ret = HandleLidarStart();
      break;
    case LIDAR2D_STATE_STOPPED:
      ret = HandleLidarStop();
      break;
    case LIDAR2D_STATE_IDLE:
      ret = pLidar2DSkeleton_->Disconnect();
      break;
    default:
      ret =
          HandleStateError(TargetState, ret, "Invalid Lidar state transition");
      break;
  }
  if (ret == SSBL_SUCCESS) {
    SetLidarState(TargetState);
  }
  return ret;
}

//===========================================================================
//===========================================================================
SensorResult Lidar2d_Model::HandleStateStart(Lidar2dState TargetState) {
  SensorResult ret = SSBL_ERR_INVALID_STATE;

  switch (TargetState) {
    case LIDAR2D_STATE_STARTED:
      ret = HandleLidarStart();
      break;
    case LIDAR2D_STATE_STOPPED:
      ret = HandleLidarStop();
      break;
    case LIDAR2D_STATE_IDLE:
      ret = pLidar2DSkeleton_->Disconnect();
      break;
    default:
      ret =
          HandleStateError(TargetState, ret, "Invalid Lidar state transition");
      break;
  }
  if (ret == SSBL_SUCCESS) {
    SetLidarState(TargetState);
  }
  return ret;
}

//===========================================================================
//===========================================================================
SensorResult Lidar2d_Model::HandleStateStop(Lidar2dState TargetState) {
  SensorResult ret = SSBL_ERR_INVALID_STATE;

  switch (TargetState) {
    case LIDAR2D_STATE_STARTED:
      ret = HandleLidarStart();
      break;
    case LIDAR2D_STATE_STOPPED:
      ret = HandleLidarStop();
      break;
    case LIDAR2D_STATE_IDLE:
      ret = pLidar2DSkeleton_->Disconnect();

      break;
    default:
      ret =
          HandleStateError(TargetState, ret, "Invalid Lidar state transition");
      break;
  }

  if (ret == SSBL_SUCCESS) {
    SetLidarState(TargetState);
  }
  return ret;
}

//===========================================================================
//===========================================================================
SensorResult Lidar2d_Model::HandleStateError(Lidar2dState TargetState,
                                             SensorResult prevResult,
                                             std::string error) {
  SetLidarState(LIDAR2D_STATE_ERROR);
  SSBL_LOG_ERROR("Error during transition from %s to %s",
                 StateInfo[LidarState_].name_.c_str(),
                 StateInfo[TargetState].name_.c_str());
  SSBL_LOG_ERROR("%s", error.c_str());
  return prevResult;
}

//===========================================================================
//===========================================================================
void Lidar2d_Model::HandleDeviceLost(int32_t val) {
  SSBL_UNUSED(val);
  StoredState_ = GetLidarState();
  pLidar2DSkeleton_->DeregisterAllEvents(true);
  pLidar2DSkeleton_->Disconnect(true);
  SetLidarState(LIDAR2D_STATE_ERROR);
  SSBL_LOG_ERROR("Device lost - is wireing ok?");
  if (AutoReconnect_) {
    SSBL_LOG_INFO("Trying automatic reconnect in 5 seconds");
    pReconnectTimer->Start();
  } else {
    SSBL_LOG_INFO("Automatic reconnect disabled.");
  }
}

//===========================================================================
//===========================================================================
bool Lidar2d::Create_Lidar2d(string const& SkeletonName,
                             string const& SkeletonVersion, string const& IP) {
  bool bRet = true;

  SensorSkeleton* pSkeleton = nullptr;
  uint64_t test = hash_64_fnv1a(SkeletonName.c_str(), SkeletonName.size());

  switch (test) {
    //--------------------------
    case hash_64_fnv1a_const("TiM561"):
      pSkeleton = Create_TiM5xx_Skeleton(SkeletonName, SkeletonVersion, IP);
      if (nullptr != pSkeleton) {
        pLidarModel_ =
            Create_TiM5xx_Model(pSkeleton);
      }
      break;
    //--------------------------
    case hash_64_fnv1a_const("TiM571"):
      pSkeleton = Create_TiM5xx_Skeleton(SkeletonName, SkeletonVersion, IP);
      if (nullptr != pSkeleton) {
        pLidarModel_ =
            Create_TiM5xx_Model(pSkeleton);
      }
      break;
    //--------------------------
    case hash_64_fnv1a_const("TiM581"):
      pSkeleton = Create_TiM5xx_Skeleton(SkeletonName, SkeletonVersion, IP);
      if (nullptr != pSkeleton) {
        pLidarModel_ =
            Create_TiM5xx_Model(pSkeleton);
      }
      break;
    //--------------------------
    default:
      bRet = false;
      SSBL_LOG_ERROR("No such device: %s", SkeletonName.c_str());
      break;
  }

  if (bRet) {
    if (nullptr == pLidarModel_) {
      if (nullptr != pSkeleton) {
        delete pSkeleton;
      }
      bRet = false;
    }
  }

  return bRet;
}
}  // namespace ssbl
