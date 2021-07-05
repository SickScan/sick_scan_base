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

#include "Base/Core/Sensor/include/Common/SensorSkeleton.h"
#include <iostream>
#include <vector>
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Driver/include/Socket.h"
#include "Base/Core/Sensor/include/Common/SensorInterface.h"
#include "Base/Logger/include/Logger.h"

using namespace ssbl;

//=============================================================================
//=============================================================================
SensorSkeleton::SensorSkeleton(size_t txBufSize, size_t rxBufSize)
    : stateInternal_(NOT_INITIALIZED),
      BehavorialVersion_("0.0.0"),
      localName_("undefined"),
      localId_(std::hash<std::string>()(localName_)),
      max_tx_buffer_size_(txBufSize),
      max_rx_buffer_size_(rxBufSize),
      pActiveInterface_(nullptr),
      pActiveProtocol_(nullptr),
      passwords_{0},
      UserSelectedIpOrSerial_(""),
      UserSelectedInterfaceName_(""){

      };

//=============================================================================
//=============================================================================
SensorSkeleton::SensorSkeleton(const std::string &localName, size_t txBufSize,
                               size_t rxBufSize)
    : stateInternal_(NOT_INITIALIZED),
      BehavorialVersion_("0.0.0"),
      localName_(localName),
      localId_(std::hash<std::string>()(localName_)),
      max_tx_buffer_size_(txBufSize),
      max_rx_buffer_size_(rxBufSize),
      pActiveInterface_(nullptr),
      pActiveProtocol_(nullptr),
      passwords_{0},
      UserSelectedIpOrSerial_(""),
      UserSelectedInterfaceName_(""){
      };

//=============================================================================
//=============================================================================
SensorSkeleton::~SensorSkeleton() {
  AvailableSensorInterfaces_.clear();

  if (nullptr != pActiveProtocol_) {
    delete pActiveProtocol_;
  }
  if (nullptr != pActiveInterface_) {
    if (pActiveInterface_->IsOpen()) {
      pActiveInterface_->Disconnect();
    }
    delete pActiveInterface_;
  }
}

//=============================================================================
//=============================================================================
SensorInterfaceDescription *SensorSkeleton::GetPreferredInterface() {
  SensorInterfaceDescription *pInterfaceDesc = nullptr;
  for (auto &x : AvailableSensorInterfaces_) {
    if (0 == UserSelectedInterfaceName_.compare((*(x.get()))->GetName())) {
      pInterfaceDesc = *(x.get());
      break;
    }
  }
  return pInterfaceDesc;
}
//=============================================================================
//=============================================================================
std::vector<SensorInterfaceDescription *>
SensorSkeleton::GetAlternateInterfaces(
    SensorInterfaceDescription *pDesiredInterface) {
  std::vector<SensorInterfaceDescription *> Interfaces;
  for (auto &x : AvailableSensorInterfaces_) {
    if ((pDesiredInterface->GetProtocolType() !=
         (*(x.get()))->GetProtocolType()) &&
        (0 == pDesiredInterface->GetName().compare((*(x.get()))->GetName()))) {
      Interfaces.push_back(*(x.get()));
    }
  }
  return Interfaces;
}

//=============================================================================
//=============================================================================
SensorResult SensorSkeleton::TestProtocol(
    SensorInterfaceDescription *pInterfaceDesc) {
  SensorResult ret = SSBL_ERR_SENSOR_INTERFACE_NOT_SUPPORTED;

  if (nullptr == pInterfaceDesc) {
    SSBL_LOG_ERROR("pInterfaceDesc must not be NULL");
    return ret;
  }

  pActiveProtocol_ = DeviceSpecificProtocolInit(
      pInterfaceDesc->GetProtocolType(), pInterfaceDesc->GetAdressingMode());

  if (nullptr == pActiveProtocol_) {
    SSBL_LOG_ERROR("pActiveProtocol_ must not be NULL");
    return ret;
  };

  switch (pInterfaceDesc->GetInterfaceType()) {
    case SERIAL_INTERFACE:
      SSBL_LOG_ERROR("Interface not supported");
      SSBL_ASSERT_IF_NULL(0);  // TODO      
      break;
    case ETHERNET_INTERFACE:
      pActiveInterface_ =
          new Socket(UserSelectedIpOrSerial_, pInterfaceDesc->GetPort());
      break;
    default:
      SSBL_LOG_ERROR("Interface not supported");
      SSBL_ASSERT_IF_NULL(0);  // TODO
  }

  if (nullptr != pActiveInterface_) {
    pActiveInterface_->SetInterfaceDescription(pInterfaceDesc);

    ret = pActiveProtocol_->Init(*pActiveInterface_);

    if (ret == SSBL_SUCCESS) {
      ret = pActiveInterface_->Connect();
      if (ret == SSBL_SUCCESS) {
        ret = DeviceSpecificTestProtocol();
        pActiveInterface_->Disconnect();
      }
    } else {
      SSBL_LOG_ERROR("Can't initialize interface");
    }

  } else {
    SSBL_LOG_ERROR("Can't aquire socket");
    ret = SSBL_ERR_ALLOCATE_SOCKET;
  }

  if ((SSBL_SUCCESS != ret) && (nullptr != pActiveProtocol_)) {
    delete pActiveProtocol_;
  };

  return ret;
}

//=============================================================================
//=============================================================================
bool SensorSkeleton::IsReadyForRequest(void) {
  bool ret = false;

  switch (ConnState_) {
    case INITIALIZING:
      ret = true;
      break;
    case CONNECTED:
      if (stateInternal_ == READY_FOR_USER_REQUEST) {
        ret = true;
      }
      break;
    default:
      break;
  }

  return ret;
}
//=============================================================================
//=============================================================================
SensorResult SensorSkeleton::Init() {
  SensorResult ret = SSBL_ERR_PROTOCOL_NOT_DETECTED;
  SensorInterfaceDescription *pInterfaceDesc = nullptr;

  // get the preferred interface
  pInterfaceDesc = GetPreferredInterface();
  SSBL_LOG_INFO("Testing if device supports desired protocol...");

  ret = TestProtocol(pInterfaceDesc);

  // if we haven't been able to read the device name using the preferred
  // protocol / port loop over all available interfaces and check if we find
  // another protocol that could be used over this port
  if (SSBL_ERR_PROTOCOL_NOT_DETECTED == ret) {
    SSBL_LOG_WARNING(
        "Desired protocol not enabled. Trying to switch to other "
        "protocol...");
    std::vector<SensorInterfaceDescription *> Interfaces =
        GetAlternateInterfaces(pInterfaceDesc);

    // loop over all other interfaces on this port
    // as soon as we've found the right protocol
    // switch to the desired protocol
    for (auto x : Interfaces) {
      ret = TestProtocol(x);

      if (SSBL_SUCCESS == ret) {
        ret = pActiveInterface_->Connect();
        if (ret == SSBL_SUCCESS) {
          ret = DeviceSpecificProtocolSwitch(pInterfaceDesc->GetProtocolType());
          if (SSBL_SUCCESS == ret) {
            pActiveInterface_->Disconnect();
            // make a final test with the desired protocol
            ret = TestProtocol(pInterfaceDesc);
          }
        }
        pActiveInterface_->Disconnect();
      }
    }
  }

  return ret;
}

//=============================================================================
//=============================================================================
SensorResult SensorSkeleton::Connect(void) {
  SensorResult ret = SSBL_ERR_SENSOR_NOT_IN_DISCONNECTED_STATE;
  stateInternal_ = NOT_INITIALIZED;

  // Are we for some reason already set up?
  if (NULL != pActiveInterface_) {
    pActiveInterface_->Disconnect();
  }
  ConnState_ = INITIALIZING;

  // Initialize the sensor
  ret = Init();

  // Return error in case initialization failed
  if (ret != SSBL_SUCCESS) {
    return ret;
  }

  // Do the final connect

  ret = pActiveInterface_->Connect();
  if (SSBL_SUCCESS == ret) {
    stateInternal_ = READY_FOR_USER_REQUEST;
  } else {
    // overwrite SSBL_ERR_SENSOR_ALREADY_INITIALIZED
    ret = SSBL_ERR_SENSOR_NOT_IN_DISCONNECTED_STATE;
  }

  return ret;
}

//=============================================================================
//=============================================================================
SensorResult SensorSkeleton::Disconnect(bool force) {
  SensorResult ret = SSBL_ERR_SENSOR_NOT_IN_DISCONNECTED_STATE;

  if (force) {
    DeregisterAllEvents();
    pActiveInterface_->Disconnect();

    ret = SSBL_SUCCESS;
  } else {
    switch (ConnState_) {
      case CONNECTED:
        DeregisterAllEvents();
        pActiveInterface_->Disconnect();
        ret = SSBL_SUCCESS;
        break;
      case INITIALIZING:
        pActiveInterface_->Disconnect();
        ret = SSBL_SUCCESS;
        break;
      case DISCONNECTED:
        ret = SSBL_SUCCESS;
        break;
      default:
        SSBL_ASSERT_IF_NULL(0);
        break;
    }
  }

  ConnState_ = DISCONNECTED;
  if (nullptr != pActiveInterface_) {
    delete pActiveInterface_;
    pActiveInterface_ = nullptr;
  }

  return ret;
}

//=============================================================================
//=============================================================================
SensorVariable *SensorSkeleton::CreateVariable(const std::string &varName) {
  std::string final = SensorName_ + varName;
  return VariableRepo.Create(final);
}

//=============================================================================
//=============================================================================
SensorFunction *SensorSkeleton::CreateFunction(const std::string &funcName) {
  std::string final = SensorName_ + funcName;
  return FunctionRepo.Create(final);
}
