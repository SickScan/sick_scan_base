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

#include "API/Family/Lidar2D/Common/include/Lidar2D.h"
#include "API/Family/Lidar2D/Common/private/TiM5xx_Model_Factory.h"
#include "API/Family/Lidar2D/Common/private/TiM5xx_Skeleton_Factory.h"
#include "Base/Core/Common/include/Hash.h"
#include "Base/Logger/include/Logger.h"

#include <string>

using namespace std;

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl {

struct Lidars_t {
  string sensorName_;
  string familyName_;
  string skeletonVersion_;
  string modelVersion_;
};

Lidars_t LidarLookUp[] = {{"TiM561", "TiM5xx", "1.0.0", "1.0.0"},
                          {"TiM571", "TiM5xx", "1.0.0", "1.0.0"},
                          {"TiM581", "TiM5xx", "1.0.0", "1.0.0"}};

//===========================================================================
//===========================================================================
bool Lidar2d::Create_Lidar2d(string& ModelName, string& IP,
                             string& SkeletonVersion) {
  bool bRet = true;

  SensorSkeleton* pSkeleton = nullptr;
  uint64_t test = hash_64_fnv1a(ModelName.c_str(), ModelName.size());

  switch (test) {
    //--------------------------
    case hash_64_fnv1a_const("TiM561"):
      pSkeleton = Create_TiM5xx_Skeleton(ModelName, SkeletonVersion, IP);
      pLidarModel_ =
          Create_TiM5xx_Model(ModelName, pSkeleton->GetBehavorialVersion());
      break;
    //--------------------------
    case hash_64_fnv1a_const("TiM571"):
      pSkeleton = Create_TiM5xx_Skeleton(ModelName, SkeletonVersion, IP);
      pLidarModel_ =
          Create_TiM5xx_Model(ModelName, pSkeleton->GetBehavorialVersion());
      break;
    //--------------------------
    case hash_64_fnv1a_const("TiM581"):
      pSkeleton = Create_TiM5xx_Skeleton(ModelName, SkeletonVersion, IP);
      pLidarModel_ =
          Create_TiM5xx_Model(ModelName, pSkeleton->GetBehavorialVersion());
      break;
    //--------------------------
    default:
      bRet = false;
      SSBL_LOG_ERROR("No such device: %s", ModelName.c_str());
      break;
  }

  if (bRet) {
  }

  return bRet;
}
}  // namespace ssbl
