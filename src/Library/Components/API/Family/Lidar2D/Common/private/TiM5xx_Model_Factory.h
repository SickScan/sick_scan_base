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

#include <string>
#include "API/Family/Lidar2D/Common/include/Lidar2D_Model.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl {

    Lidar2d_Model* Create_TiM5xx_Model(std::string const& ModelName, std::string const& ModelVersion);

}  // namespace ssbl