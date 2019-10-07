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
#include "Core/Sensor/include/Common/SickSensorInterface.h"
#include "Types/include/SickSensorReturnCodes.h"

namespace ssbl {

typedef enum {
  REQ_CMD_NETSCAN,
} AutoIpCmdReqToken;

typedef enum {
  RES_CMD_NETSCAN,
} AutoIpCmdResToken;

class AutoIpHandler {
 public:
  AutoIpHandler();
  ~AutoIpHandler(){};
  SensorResult ScanNetwork(void);

 private:
  SensorResult CreateUdpSocket(void);
  SensorResult IssueNetScanReq();
  SensorResult SendCmd(AutoIpCmdReqToken cmdToken);
  void SocketEvent(int32_t value);

  int32_t rndSeed_;
  SickSensorInterface* pActiveInterface_;  // UDP Socket
};
}  // namespace ssbl
