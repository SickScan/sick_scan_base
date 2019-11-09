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


#include "API/Family/Lidar2D/Model/TiM5xx/TiM5xx_1_0_0/include/TiM5xx.h"


#include "Base/Core/Common/include/Hash.h"
#include "Base/Logger/include/Logger.h"

using namespace std;

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl {

//===========================================================================
Lidar2d_Model* Create_TiM5xx_Model( string& ModelName,
                                    string& ModelVersion) {
  Lidar2d_Model* pRet = nullptr;
  uint64_t test = hash_64_fnv1a(ModelVersion.c_str(), ModelVersion.size());
  switch (test) {
    //--------------------------
    case hash_64_fnv1a_const("1.0.0"):
      pRet = new TiM5xx_1_0_0_Model();
      break;
    //--------------------------
    default:
      SSBL_LOG_ERROR("Model version %s not found for device %s",
                     ModelVersion.c_str(), ModelName.c_str());

      break;
  }

  return pRet;
}
}  // namespace ssbl