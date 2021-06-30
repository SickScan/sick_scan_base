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

#include "Base/Core/Sensor/private/CoLa/DefaultCoLaFunctions.h"
#include "Base/Protocol/include/Common/Deserializer.h"
#include "Base/Protocol/include/Common/Protocol.h"
#include "Base/Protocol/include/Common/Serializer.h"

using namespace ssbl;

//=============================================================================
//=============================================================================
MethSetAccessMode::MethSetAccessMode()
    : SensorFunction("SetAccessMode", "SetAccessMode", 0, LEVEL_INVALID, true,
                     true),
      Args({0, 0}),
      ReturnValue({0}) {}

//=============================================================================
//=============================================================================
uint32_t MethSetAccessMode::SerializeContent(Serializer *pSer, uint8_t *pDest,
                                             uint32_t *pOffset) {
  pSer->Serialize(pDest, Args.NewMode, pOffset);
  pSer->Serialize(pDest, Args.Password, pOffset);
  return *pOffset;
}

//=============================================================================
//=============================================================================
uint32_t MethSetAccessMode::DeserializeContent(Deserializer *pDes,
                                               uint8_t *pSrc) {
  uint32_t offset = 0;
  pDes->Deserialize(pSrc, ReturnValue.success, &offset);
  return offset;
}

//=============================================================================
//=============================================================================
VarDeviceIdent::VarDeviceIdent()
    : SensorVariable("DeviceIdent", "DeviceIdent", 0, READ_ONLY, LEVEL_RUN,
                     LEVEL_INVALID, -1) {
  /*

  typedef struct DeviceIdent_Struct_S {
    FlexString6 Name;

    FlexString8 Version;

  } DeviceIdent_Struct;
  */
}

//=============================================================================
//=============================================================================
uint32_t VarDeviceIdent::SerializeContent(Serializer *pSer, uint8_t *pDest,
                                          uint32_t *pOffset) {
  SSBL_UNUSED(pSer);
  SSBL_UNUSED(pDest);
  return *pOffset;
}

//=============================================================================
//=============================================================================
uint32_t VarDeviceIdent::DeserializeContent(Deserializer *pDes, uint8_t *pSrc) {
  uint32_t offset = 0;
  pDes->Deserialize(pSrc, Value_, &offset);
  return offset;
}

//=============================================================================
//=============================================================================
/*uint32_t *VarDeviceIdent::DeserializeContentToBuffer(Deserializer *pDes,
                                                     uint8_t *pSrc) {

  uint8_t *pBuffer = new uint8_t[sizeof(Value_) + sizeof(uint32_t)];

  DeserializeContent(pDes, pSrc);

  memcpy(&pBuffer[sizeof(uint32_t)], &Value_, sizeof(Value_));

  return reinterpret_cast<uint32_t *>(pBuffer);
}
*/