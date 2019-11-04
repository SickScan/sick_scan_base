/**
 * \file
 * \brief Implementation of Lidar2d - Family API for SICK AG 2D Lidar
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
#include "API/Skeleton/include/SickSkeletonFactory.h"

#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include "Base/Core/OS/include/Task.h"
#include "Base/Core/OS/include/Timer.h"
#include "Base/Types/include/BasicTypes.h"

using namespace std;

namespace ssbl {

typedef struct {
  Lidar2dState state_;
  string name_;
} Lidar2dStateText;

Lidar2dStateText StateInfo[] = {
    {LIDAR2D_STATE_ERROR, "Error"},     {LIDAR2D_STATE_INIT, "Init"},
    {LIDAR2D_STATE_IDLE, "Idle"},       {LIDAR2D_STATE_BUSY_IDLE, "BusyIdle"},
    {LIDAR2D_STATE_STARTED, "Started"}, {LIDAR2D_STATE_STOPPED, "Stopped"}};

Lidar2dCapabilities Lidar2dModelCapabilities[] = {
    //{TIM510, 0.05, 4.0, -135.0, +135.0, {0}, {15}},
    {SICK_TiM551,
     "TiM551",
     "TiM5xxSkeleton",
     0.05,
     10.0,
     -135.0,
     +135.0,
     {0},
     {{1, 15}}},
    {SICK_TiM561,
     "TiM561",
     "TiM5xxSkeleton",
     0.05,
     10.0,
     -135.0,
     +135.0,
     {0},
     {{0.33, 15}}},
    {SICK_TiM571,
     "TiM571",
     "TiM5xxSkeleton",
     0.05,
     25.0,
     -135.0,
     +135.0,
     {0},
     {{0.33, 15}}},
    {SICK_TiM581,
     "TiM581",
     "TiM5xxSkeleton",
     0.05,
     25.0,
     -135.0,
     +135.0,
     {0},
     {{0.33, 15}}},
};

string addHeading(string heading) {
  string ret = heading + "\n" + string(heading.length(), '=') + "\n";
  return ret;
}

string addRow(size_t cWidth, tuple<string, string, string>& row) {
  ostringstream oss;
  oss << left << setw(cWidth) << std::get<0>(row) << " : " << std::get<1>(row)
      << " " << std::get<2>(row) << "\n";
  return oss.str();
}

template <class T>
string cvToString(T value) {
  ostringstream oss;
  oss << std::fixed << std::setprecision(2) << value;
  return oss.str();
}

ostream& operator<<(std::ostream& so, const Lidar2dCapabilities& caps) {
  vector<tuple<string, string, string>> rows;

  rows.push_back(make_tuple("Min. Range", cvToString(caps.minRange_), "m"));
  rows.push_back(make_tuple("Max. Range", cvToString(caps.maxRange_), "m"));
  rows.push_back(
      make_tuple("Start Angle", cvToString(caps.startAngle_), "Degree"));
  rows.push_back(
      make_tuple("Stop Angle", cvToString(caps.stopAngle_), "Degree"));

  rows.push_back(
      make_tuple("Layers", cvToString(caps.verticalAngles_.size()), ""));

  uint32_t layer = 0;
  for (auto x : caps.verticalAngles_) {
    string tmp = "Layer[" + std::to_string(layer++) + "]";
    rows.push_back(make_tuple(tmp, cvToString(x), "Degree"));
  }

  for (auto x : caps.freqResolutionPair_) {
    rows.push_back(
        make_tuple("Resolution", cvToString(x.horizontalAngleResolution),
                   "Degree @ " + cvToString(x.scanFrequency) + "Hz"));
  }

  size_t maxLen = 0;
  for (auto x : rows) {
    if (std::get<0>(x).size() > maxLen) maxLen = std::get<0>(x).size();
  }

  so << addHeading("Capabilities of " + caps.modelName_);
  for (auto x : rows) {
    so << addRow(maxLen, x);
  }

  return so;
}

class ReconnectTimer : public Timer, Task {
 public:
  //========================================================================
  ReconnectTimer(Lidar2d* pParent)
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
  Lidar2d* pParent_;
  Event trigger_;
};
//===========================================================================
//===========================================================================
Lidar2d::Lidar2d(Lidar2dModel model, const std::string& IP)
    : Model_(UNKNOWN_MODEL),
      pLidar2D_(nullptr),
      IsInitialized_(false),
      AutoReconnect_(true),
      LidarState_(LIDAR2D_STATE_ERROR),
      StoredState_(LIDAR2D_STATE_ERROR),
      StartAngle_(0),
      StopAngle_(0),
      CallbackFunc_(NULL),
      CallbackParam_(0) {
  SSBL_ASSERT_IF_NULL(UNKNOWN_MODEL <= Model_);
  Model_ = model;
  pReconnectTimer = new ReconnectTimer(this);

  if (UNKNOWN_MODEL != Model_) {
    pLidar2D_ = CreateSensorSkeleton(
        Lidar2dModelCapabilities[Model_].skeletonName_, IP);
    SSBL_LOG_INFO("Created %s with IP %s",
                  Lidar2dModelCapabilities[Model_].modelName_.c_str(),
                  IP.c_str());
  }
}
//===========================================================================
//===========================================================================
Lidar2d::Lidar2d(std::string& ModelName, std::string& IP)
    : Model_(UNKNOWN_MODEL),
      pLidar2D_(nullptr),
      IsInitialized_(false),
      AutoReconnect_(true),
      LidarState_(LIDAR2D_STATE_ERROR),
      StoredState_(LIDAR2D_STATE_ERROR),
      StartAngle_(0),
      StopAngle_(0),
      CallbackFunc_(NULL),
      CallbackParam_(0),
      ScanProcessorFunc_(NULL) {
  for (auto x : Lidar2dModelCapabilities) {
    if (0 == ModelName.compare(x.modelName_)) {
      Model_ = x.model_;
      break;
    }
  }
  SSBL_ASSERT_NOT_NULL(UNKNOWN_MODEL == Model_);
  pReconnectTimer = new ReconnectTimer(this);
  if (UNKNOWN_MODEL != Model_) {
    pLidar2D_ = CreateSensorSkeleton(
        Lidar2dModelCapabilities[Model_].skeletonName_, IP);
    SSBL_LOG_INFO("Created %s with IP %s",
                  Lidar2dModelCapabilities[Model_].modelName_.c_str(),
                  IP.c_str());
  }
}
//===========================================================================
//===========================================================================
Lidar2d::~Lidar2d() {
  Disconnect();
  delete pReconnectTimer;
}

//===========================================================================
//===========================================================================
Lidar2dState Lidar2d::GetLidarState() { return LidarState_; }

//===========================================================================
//===========================================================================
SensorResult Lidar2d::GetDeviceName(std::string& DeviceName) {
  SensorResult ret = SSBL_ERR_SENSOR_REQUEST_FAILED;
  DeviceName = "";
  if (pLidar2D_ != NULL) {
    ret = pLidar2D_->GetDeviceName(DeviceName);
  }
  return ret;
}

//===========================================================================
//===========================================================================
Lidar2dCapabilities Lidar2d::GetCapabilities(void) {
  return Lidar2dModelCapabilities[Model_];
}

//===========================================================================
//===========================================================================
void Lidar2d::SetLidarState(Lidar2dState LidarState) {
  LidarState_ = LidarState;
}

//===========================================================================
//===========================================================================
void Lidar2d::SetInitialized() {
  pLidar2D_->RegisterToCallbackEvent(
      "DeviceLost", std::bind(&Lidar2d::HandleDeviceLost, this, 0));
  IsInitialized_ = true;
};

//===========================================================================
//===========================================================================
SensorResult Lidar2d::MoveToLidarState(Lidar2dState TargetState) {
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
SensorResult Lidar2d::ProcessStateMachine(Lidar2dState TargetState) {
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
SensorResult Lidar2d::HandleStateInit(Lidar2dState TargetState) {
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
SensorResult Lidar2d::HandleStateIdle(Lidar2dState TargetState) {
  SensorResult ret = SSBL_ERR_INVALID_STATE;
  if (TargetState >= LIDAR2D_STATE_BUSY_IDLE) {
    ret = pLidar2D_->Connect();
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
SensorResult Lidar2d::HandleStateBusyIdle(Lidar2dState TargetState) {
  SensorResult ret = SSBL_ERR_INVALID_STATE;

  switch (TargetState) {
    case LIDAR2D_STATE_STARTED:
      ret = HandleLidarStart();
      break;
    case LIDAR2D_STATE_STOPPED:
      ret = HandleLidarStop();
      break;
    case LIDAR2D_STATE_IDLE:
      ret = pLidar2D_->Disconnect();
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
SensorResult Lidar2d::HandleStateStart(Lidar2dState TargetState) {
  SensorResult ret = SSBL_ERR_INVALID_STATE;

  switch (TargetState) {
    case LIDAR2D_STATE_STARTED:
      ret = HandleLidarStart();
      break;
    case LIDAR2D_STATE_STOPPED:
      ret = HandleLidarStop();
      break;
    case LIDAR2D_STATE_IDLE:
      ret = pLidar2D_->Disconnect();
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
SensorResult Lidar2d::HandleStateStop(Lidar2dState TargetState) {
  SensorResult ret = SSBL_ERR_INVALID_STATE;

  switch (TargetState) {
    case LIDAR2D_STATE_STARTED:
      ret = HandleLidarStart();
      break;
    case LIDAR2D_STATE_STOPPED:
      ret = HandleLidarStop();
      break;
    case LIDAR2D_STATE_IDLE:
      ret = pLidar2D_->Disconnect();

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
SensorResult Lidar2d::HandleStateError(Lidar2dState TargetState,
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
void Lidar2d::HandleDeviceLost(int32_t val) {
  SSBL_UNUSED(val);
  StoredState_ = GetLidarState();
  pLidar2D_->DeregisterAllEvents(true);
  pLidar2D_->Disconnect(true);
  SetLidarState(LIDAR2D_STATE_ERROR);
  SSBL_LOG_ERROR("Device lost - is wireing ok?");
  if (AutoReconnect_) {
    SSBL_LOG_INFO("Trying automatic reconnect in 5 seconds");
    pReconnectTimer->Start();
  } else {
    SSBL_LOG_INFO("Automatic reconnect disabled.");
  }
}

}  // namespace ssbl
