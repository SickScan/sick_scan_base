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

#include "API/Family/Lidar2d/Model/TiM5xx/TiM5xx_1_0_0/include/TiM5xx.h"
#include "Base/Core/Sensor/include/Common/SensorSkeleton.h"

#include "Base/Core/Common/include/Hash.h"
#include "Base/Logger/include/Logger.h"

using namespace std;

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl {

//===========================================================================
Lidar2d_Model* Create_TiM5xx_Model(string const& ModelName,
                                   SensorSkeleton* pSkeleton) {
  Lidar2d_Model* pRet = nullptr;
  // SensorSkeleton* pLidar2DSkeleton_;

  if (nullptr == pSkeleton) {
    return pRet;
  }

  string version = pSkeleton->GetBehavorialVersion();

  uint64_t test = hash_64_fnv1a(version.c_str(), version.size());
  switch (test) {
    //--------------------------
    case hash_64_fnv1a_const("1.0.0"):
      pRet = new TiM5xx_1_0_0_Model(pSkeleton);
      break;
    //--------------------------
    default:
      SSBL_LOG_ERROR("Model version %s not found for device %s",
                     version.c_str(), version.c_str());

      break;
  }

  return pRet;
}
}  // namespace ssbl