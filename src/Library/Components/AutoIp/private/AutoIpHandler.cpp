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
#include "AutoIp/include/AutoIpHandler.h"
#include <cstring>
#include <ctime>
#include "Base/Core/Driver/include/Socket.h"

namespace ssbl {

#define RECEIVE_EVENT 0

#pragma pack(push, 1)
typedef struct {
  AutoIpCmdReqToken cmdToken;
  uint8_t CmdCode;
  uint8_t reserved1;
  uint16_t payloadLength;  // in 16 bit words
  uint16_t mac0;
  uint16_t mac1;
  uint16_t mac2;
  uint32_t telegramId;  // random number which will be increased every time a
                        // new request is sent
  uint16_t reserved2;
} AutoIpCmd;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct {
  AutoIpCmdResToken cmdResToken;
  uint16_t CmdCode;
  uint8_t reserved1;
  uint16_t CmdLength;  // in 16 bit words
  uint16_t mac0;
  uint16_t mac1;
  uint16_t mac2;
  uint32_t telegramId;  // random number which will be increased every time a
                        // new request is sent
  uint16_t reserved2;
} AutoIpCmdRes;
#pragma pack(pop)

AutoIpCmd CmdTable[] = {
    {REQ_CMD_NETSCAN, 0x10, 0x00, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0, 0}};
AutoIpCmdRes ResTable[] = {
    {RES_CMD_NETSCAN, 0x90, 0x00, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0, 0}};

AutoIpHandler::AutoIpHandler() : pActiveInterface_(nullptr) {
  // std::srand(std::time(nullptr));
  rndSeed_ = std::rand();
}

SensorResult AutoIpHandler::ScanNetwork() {
  SensorResult ret = SSBL_SUCCESS;

  if (nullptr == pActiveInterface_) {
    ret = CreateUdpSocket();
    if (ret != SSBL_SUCCESS) {
      return ret;
    }
  }

  return ret;
}

SensorResult AutoIpHandler::CreateUdpSocket() {
  SensorResult ret = SSBL_SUCCESS;
  constexpr uint16_t defaultPort = 30178;
  pActiveInterface_ = new Socket(defaultPort);

  if (nullptr != pActiveInterface_) {
    if (pActiveInterface_->Connect()) {
      pActiveInterface_->RegisterToCallbackEvent(
          "OnReceive",
          std::bind(&AutoIpHandler::SocketEvent, this, RECEIVE_EVENT));
    }
    ret = IssueNetScanReq();
  }

  return ret;
}

//=============================================================================
//=============================================================================
SensorResult AutoIpHandler::SendCmd(AutoIpCmdReqToken cmdToken) {
  SensorResult ret = SSBL_SUCCESS;
  SSBL_UNUSED(cmdToken);

  return ret;
}
//=============================================================================
//=============================================================================
SensorResult AutoIpHandler::IssueNetScanReq() {
  SensorResult ret = SSBL_SUCCESS;
  SSBL_LOG_INFO("Scanning network for SICK AG sensors");

  AutoIpCmd cmd = CmdTable[0];
  rndSeed_ = rndSeed_ + 1;

  uint8_t buf[24];

  cmd.telegramId = rndSeed_;
  cmd.reserved2 = 0x0102;
  std::memcpy(buf, &cmd.CmdCode, 16);

  // reinterpret_cast<Socket*>(pActiveInterface_)
  //    ->SendUdpBroadcast(buf, 16, 30718);

  return ret;
}

//=============================================================================
//=============================================================================
void AutoIpHandler::SocketEvent(int32_t value) {
  switch (value) {
    case RECEIVE_EVENT:

      break;
  }
}

}  // namespace ssbl
