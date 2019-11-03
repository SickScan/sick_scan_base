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
#include "API/Family/Lidar2D/Model/TiM5xx_V0.0.1/include/TiM5xx.h"

#include "Base/Core/Common/include/Hash.h"
#include "Base/Logger/include/Logger.h"

using namespace std;

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl {

//===========================================================================
//===========================================================================
Lidar2d* CreateSickLidar2d(string ModelName, string IP) {
  Lidar2d* pRet = nullptr;
  uint64_t test = hash_64_fnv1a(ModelName.c_str(), ModelName.size());

  switch (test) {
    //--------------------------
    case hash_64_fnv1a_const("TiM551"):
      pRet = new TiM551(IP);
      break;
    //--------------------------
    case hash_64_fnv1a_const("TiM561"):
      pRet = new TiM561(IP);
      break;
    //--------------------------
    case hash_64_fnv1a_const("TiM571"):
      pRet = new TiM571(IP);
      break;
    //--------------------------
    case hash_64_fnv1a_const("TiM581"):
      pRet = new TiM581(IP);
      break;
    //--------------------------
    default:
      SSBL_LOG_ERROR("No such device: %s", ModelName.c_str());

      break;
  }
  return pRet;
}
}  // namespace ssbl
