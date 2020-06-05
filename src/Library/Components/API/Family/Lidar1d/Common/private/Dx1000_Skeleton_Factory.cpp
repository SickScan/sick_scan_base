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

#include "API/Skeleton/Lidar2d/TiM5xx/TiM5xx_1_0_0/include/TiM5xx_Factory.h"
#include "Base/Core/Common/include/Hash.h"
#include "Base/Logger/include/Logger.h"

using namespace std;

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl {

//===========================================================================
SensorSkeleton* Create_TiM5xx_Skeleton(string const& ModelName,
                                       string const& SkeletonVersion,
                                       string const& IP) {
  SensorSkeleton* pRet = nullptr;
  uint64_t test =
      hash_64_fnv1a(SkeletonVersion.c_str(), SkeletonVersion.size());
  switch (test) {
    //--------------------------
    case hash_64_fnv1a_const("1.0.0"):
      pRet = TiM5xx_1_0_0_Skeleton::CreateSensorSkeleton(ModelName, IP);
      break;
    //--------------------------
    default:
      SSBL_LOG_ERROR("Skeleton version %s not found for device %s",
                     SkeletonVersion.c_str(), ModelName.c_str());

      break;
  }

  return pRet;
}
}  // namespace ssbl