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
#include "API/Family/Lidar2d/Common/include/Lidar2d_Model.h"

#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include "Base/Core/OS/include/Task.h"
#include "Base/Core/OS/include/Timer.h"
#include "Base/Types/include/BasicTypes.h"

using namespace std;

namespace ssbl {

Lidar2d::Lidar2d(string SkeletonName, string IP, std::string SkeletonVersion)
    : SkeletonName_(SkeletonName),
      SkeletonVersion_(SkeletonVersion),
      IP_(IP),
      pLidarModel_(nullptr)
{}

//=============================================================================
//=============================================================================
SensorResult Lidar2d::Initialize(int32_t StartAngle, int32_t StopAngle,
                                 std::function<void(uint64_t*)> ScanProcessor) {
  if (Create_Lidar2d(SkeletonName_, SkeletonVersion_, IP_)) {
    return pLidarModel_->Initialize(StartAngle, StopAngle, ScanProcessor);
  }
  return SSBL_ERR_CREATING_FAMILY_DEVICE;
}

//=============================================================================
//=============================================================================
SensorResult Lidar2d::Start(void) { return pLidarModel_->Start(); }

//=============================================================================
//=============================================================================
SensorResult Lidar2d::Stop(void) { return pLidarModel_->Stop(); }

//=============================================================================
//=============================================================================
SensorResult Lidar2d::Disconnect(void) { return pLidarModel_->Disconnect(); }

//=============================================================================
//=============================================================================
bool Lidar2d::WaitForScanEvent(uint32_t TimeoutMs) {
  return pLidarModel_->WaitForScanEvent(TimeoutMs);
}

//=============================================================================
//=============================================================================
SensorResult Lidar2d::GetDeviceName(std::string& DeviceName) {
  return pLidarModel_->GetDeviceName(DeviceName);
}

//=============================================================================
//=============================================================================
void Lidar2d::DisableAutoReconnect() { pLidarModel_->DisableAutoReconnect(); }

/**
 * @brief Get the capabilities of the Lidar
 *
 * @return SickLidar2dCapabilities
 */
// SickLidar2dCapabilities GetCapabilities(void);

/**
 * @brief Get a pointer to the underlying skeleton
 *
 * @return std::shared_ptr<SickSensorSkeleton*>
 */
// std::shared_ptr<SickSensorSkeleton*> GetSkeleton() {
//  return std::make_shared<SickSensorSkeleton*>(pLidar2D_);
//}

//=============================================================================
//=============================================================================
Lidar2dState Lidar2d::GetLidarState(void) {
  return pLidarModel_->GetLidarState();
}

}  // namespace ssbl
