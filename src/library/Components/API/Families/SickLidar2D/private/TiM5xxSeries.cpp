/**
 * \file
 * \brief Family API for TiM5xx Family (TiM510 is not supported)
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

#include "API/Families/SickLidar2D/include/TiM5xxSeries.h"
#include <vector>
#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton.h"
#include "Core/OS/include/VariableEventQueue.h"

using namespace std;
using namespace ssbl::DevTiM5xxSkeleton;

namespace ssbl {

//===========================================================================
//===========================================================================
SensorResult TiM5xx::Initialize(int32_t StartAngle, int32_t StopAngle,
                                std::function<void(uint64_t*)> OnScanCb,
                                uint64_t cbParam) {
  SensorResult ret = SSBL_SUCCESS;

  CallbackFunc_ = OnScanCb;
  CallbackParam_ = cbParam;

  StartAngle_ = StartAngle;
  StopAngle_ = StopAngle;
  SetInitialized();

  ret = ProcessStateMachine(LIDAR2D_STATE_BUSY_IDLE);

  return ret;
}

//===========================================================================
//===========================================================================
SensorResult TiM5xx::Initialize(int32_t StartAngle, int32_t StopAngle,
                                std::function<void(uint64_t*)> ScanProcessor) {
  SensorResult ret = SSBL_SUCCESS;

  ScanProcessorFunc_ = ScanProcessor;
  StartAngle_ = StartAngle;
  StopAngle_ = StopAngle;
  SetInitialized();

  ret = ProcessStateMachine(LIDAR2D_STATE_BUSY_IDLE);

  return ret;
}

//===========================================================================
//===========================================================================
SensorResult TiM5xx::HandleLidarConfigure() {
  SensorResult ret = SSBL_SUCCESS;
  ScanDataConfig_TiM5xxSkeleton_Var* pT;
  auto outputRange = pLidar2D_->CreateVariable("DataOutputRange");
  auto scanDataCfg = pLidar2D_->CreateVariable("ScanDataConfig");

  vector<SickSensorVariable*> readFirst;
  readFirst.push_back(outputRange);
  readFirst.push_back(scanDataCfg);

  for (auto v : readFirst) {
    ret = pLidar2D_->ReadVariable(*v);
    if (SSBL_SUCCESS != ret) {
      SSBL_LOG_ERROR("Error when trying to read variable %s",
                     v->GetName().c_str());
      goto exit;
    }
  }

  ret = outputRange->SetBasicElement("diStartAngle", StartAngle_);
  if (SSBL_SUCCESS != ret) {
    goto exit;
  }
  ret = outputRange->SetBasicElement("diStopAngle", StopAngle_);
  if (SSBL_SUCCESS != ret) {
    goto exit;
  }

  ret = pLidar2D_->WriteVariable(*outputRange);

  if (SSBL_SUCCESS != ret) {
    SSBL_LOG_ERROR("Error when trying to write variable %s",
                   outputRange->GetName().c_str());
    goto exit;
  }

  pT = dynamic_cast<ScanDataConfig_TiM5xxSkeleton_Var*>(scanDataCfg);

  pT->Value_.DistDataConfig[0] = 1;           // Enable output channel 1
  pT->Value_.DistDataConfig[1] = 0;           // (distance values)
  pT->Value_.RemDataConfig.bEnable = 1;       // Enable Remission / RSSI
  pT->Value_.RemDataConfig.eDataType = 0;     // 8Bit Remission values
  pT->Value_.RemDataConfig.eContentType = 0;  // Digits there is no other
  pT->Value_.bEnableCommentBlock = 0;         // disable comment
  pT->Value_.bEnableDeviceName = 1;           // enable device name
  pT->Value_.bEnablePositionBlock = 0;        // no position data
  pT->Value_.bEnableTimeBlock = 1;            // include device timestamp
  pT->Value_.EnableEncoderBlock[0] = 0;       // no Encoder for TiM5xx
  pT->Value_.EnableEncoderBlock[1] = 0;       // no Encoder for TiM5xx

  pT->Value_.uiOutputInterval = 1;  // no down sampling

  ret = pLidar2D_->WriteVariable(*scanDataCfg);

  if (SSBL_SUCCESS != ret) {
    SSBL_LOG_ERROR("Error when trying to write variable %s",
                   scanDataCfg->GetName().c_str());
    goto exit;
  }

  goto finalize;

exit:
  pLidar2D_->Disconnect();

finalize:
  delete outputRange;
  delete scanDataCfg;

  return ret;
}

//===========================================================================
//===========================================================================
bool TiM5xx::WaitForScanEvent(uint32_t TimeoutMs) {
  bool ret = false;

  if (NULL != pEventQueue) {
    std::shared_ptr<ComObj> pEvent = pEventQueue->Wait(TimeoutMs);
    if (NULL != pEvent) {
      if (NULL != ScanProcessorFunc_) {
        ScanProcessorFunc_(reinterpret_cast<uint64_t*>(pEvent.get()));
      }
      pEventQueue->Release(pEvent);
      ret = true;
    }
  }
  return ret;
}

//===========================================================================
//===========================================================================
SensorResult TiM5xx::HandleLidarStart() {
  SensorResult ret = SSBL_SUCCESS;
  mStopMeasure_TiM5xxSkeleton_Func stopFunction;
  mStartMeasure_TiM5xxSkeleton_Func startFunction;
  Run_TiM5xxSkeleton_Func runFunction;

  ret = pLidar2D_->CallFunction(stopFunction);
  if (SSBL_SUCCESS != ret) {
    SSBL_LOG_ERROR("can't put the Lidar into stop mode");
    goto exit;
  }

  if (nullptr != CallbackFunc_) {
    ret = pLidar2D_->RegisterEvent("ScanData", CallbackFunc_, CallbackParam_);
  } else if (nullptr != ScanProcessorFunc_) {
    ret = pLidar2D_->RegisterEvent("ScanData", &pEventQueue, 2);
  }
  if (SSBL_SUCCESS != ret) {
    SSBL_LOG_ERROR("can't register to scan data");
    goto exit;
  }

  ret = pLidar2D_->CallFunction(startFunction);
  if (SSBL_SUCCESS != ret) {
    SSBL_LOG_ERROR("can't put the Lidar into measurement mode");
    goto exit;
  }

  ret = pLidar2D_->CallFunction(runFunction);
  if (SSBL_SUCCESS != ret) {
    SSBL_LOG_ERROR("can't put the Lidar into run mode");
    goto exit;
  }
exit:
  return ret;
}

//===========================================================================
//===========================================================================
SensorResult TiM5xx::HandleLidarStop() {
  SensorResult ret = SSBL_SUCCESS;
  mStopMeasure_TiM5xxSkeleton_Func stopFunction;
  ret = pLidar2D_->CallFunction(stopFunction);
  if (SSBL_SUCCESS != ret) {
    SSBL_LOG_ERROR("can't put the Lidar into stop mode");
    goto exit;
  }

  ret = pLidar2D_->DeregisterEvent("ScanData");

  if (SSBL_SUCCESS != ret) {
    ret = SSBL_SUCCESS;
  }
exit:
  return ret;
}

}  // namespace ssbl
