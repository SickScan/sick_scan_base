// Copyright 2019, SICK AG, Waldkirch
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
#include "Protocol/include/Common/ComObject.h"
#include "Types/include/BasicTypes.h"

namespace ssbl {

class SickSensorFunction : public ComObj {
 public:
  using ::ssbl::ComObj::GetComIndex;
  using ::ssbl::ComObj::GetComName;

  SickSensorFunction(std::string name, std::string comName, uint16_t idx,
                     AccessLevel accessLevel, bool hasArgs, bool hasRet);
  virtual ~SickSensorFunction(){};

  AccessLevel GetAccessLevel(void) { return invocationAccessLevel_; };

  bool HasArguments(void) { return hasArguments_; };
  bool HasReturnValue(void) { return hasReturnValue_; };

  virtual uint32_t SerializeContent(Serializer* pSer, uint8_t* pDest,
                                    uint32_t* pOffset) = 0;
  virtual uint32_t DeserializeContent(Deserializer* pDes, uint8_t* pSrc) = 0;

 protected:
  AccessLevel invocationAccessLevel_;
  bool hasArguments_;
  bool hasReturnValue_;

  // Generated code starts here - do not remove this comment

  // Generated code ends here - do not remove this comment
};
}  // namespace ssbl
