//=======================================================================================
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
//=======================================================================================
//! \file
//! \brief    Declaration of class Sensor
//=======================================================================================
#pragma once

#include <string>
#include <unordered_map>
#include <vector>
#include "Base/Core/Sensor/include/Common/SensorComObjRepository.h"
#include "Base/Core/Sensor/include/Common/SensorFunction.h"
#include "Base/Core/Sensor/include/Common/SensorVariable.h"
#include "Base/Logger/include/Logger.h"
#include "Base/Protocol/include/CoLa/CoLaAProtocol.h"
#include "Base/Protocol/include/CoLa/CoLaBProtocol.h"
#include "Base/Types/include/SickSensorReturnCodes.h"

namespace ssbl {

class TelegramBuffer;
class VariableEventQueue;

//===============================================================================
//! \brief Base class Sensor
//
//  Concrete sensor will be derived from this class
class SensorSkeleton : public CallbackProvider {
 public:
  typedef enum {
    DISCONNECTED,
    INITIALIZING,
    CONNECTED,
  } ConnectionState;

  typedef enum {
    NOT_INITIALIZED,
    READY_FOR_USER_REQUEST,
    REQUEST_IN_PROGRESS,
  } SensorState;

 public:
  //============================================================================
  //! \brief Constructor
  //
  /*!
  //  \param txBufSize Size of the the tx buffer created within this class
  //  \param rxBufSize Size of the the rx buffer created within this class
  //
  ============================================================================*/
  SensorSkeleton(size_t txBufSize, size_t rxBufSize);
  //============================================================================
  //! \brief Constructor
  //
  /*!
  //  \param localName a user defined name
  //  \param txBufSize Size of the the tx buffer created within this class
  //  \param rxBufSize Size of the the rx buffer created within this class
  //
  ============================================================================*/
  SensorSkeleton(const std::string& localName, size_t txBufSize,
                 size_t rxBufSize);

  //============================================================================
  //! \brief Destructor
  //
  virtual ~SensorSkeleton();

  //============================================================================
  //! \brief Get the user assigned name
  //
  /*!
  //  \return local name
  //
  ============================================================================*/
  std::string GetLocalName(void) { return localName_; };

  //============================================================================
  //! \brief Is sensor ready for request
  //
  /*!
  //  \return true if so
  //
  ============================================================================*/
  bool IsReadyForRequest(void);

  //============================================================================
  //! \brief Get an ID Token computed over the user local name
  //
  /*!
  //  \return local id token
  //
  ============================================================================*/
  size_t GetLocalID(void) { return localId_; };

  //============================================================================
  //! \brief Connect to the sensor
  //
  /*!
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult Connect(void);

  //============================================================================
  //! \brief Disconnect from the sensor
  //
  /*!
  //  \param force Disconnect ignoring the internal sensor state
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult Disconnect(bool force = false);

  //============================================================================
  //! \brief Read a variable from the device
  //
  /*!
  //  \param rVar Reference to a variable of this sensor
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult ReadVariable(SensorVariable& rVar) = 0;

  //============================================================================
  //! \brief Write a variable of this device
  //
  /*!
  //  \param rVar Reference to the variable to be written
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult WriteVariable(SensorVariable& rVar) = 0;

  //============================================================================
  //! \brief Register to a variable event using a callback
  //
  /*!
  //  \param rVar Reference to the variable to be written
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult RegisterEvent(SensorVariable& rVar,
                                     std::function<void(uint64_t*)> OnEventCb,
                                     uint64_t cbParam) = 0;
  //============================================================================
  //! \brief Register to a variable event using a callback
  //
  /*!
  //  \param rVar Reference to the variable to be written
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult RegisterEvent(const std::string& varName,
                                     std::function<void(uint64_t*)> OnEventCb,
                                     uint64_t cbParam) = 0;

  //============================================================================
  //! \brief Register to a variable event using a queue
  //
  /*!
  //  \param rVar Reference to the variable to be written
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult RegisterEvent(SensorVariable& rVar,
                                     VariableEventQueue** ppQueue,
                                     uint32_t nQueueElem) = 0;

  //============================================================================
  //! \brief Register to a variable event triggering a callback
  //
  /*!
  //  \param rVar Reference to the variable to be written
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult RegisterEvent(const std::string& varName,
                                     VariableEventQueue** ppQueue,
                                     uint32_t nQueueElem) = 0;

  //============================================================================
  //! \brief Deregister from a variable event
  //
  /*!
  //  \param rVar Reference to the variable to be written
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult DeregisterEvent(SensorVariable& rVar,
                                       bool isDisconneted = false) = 0;

  //============================================================================
  //! \brief Deregister from a variable event
  //
  /*!
  //  \param varName the variable name
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult DeregisterEvent(const std::string& varName,
                                       bool isDisconneted = false) = 0;

  //============================================================================
  //! \brief Deregister all events
  //
  /*!
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult DeregisterAllEvents(bool isDisconneted = false) = 0;

  //============================================================================
  //! \brief Search for a variable with name varName and create it
  //
  /*!
  //  \param varName the name of the variable to be created
  //  \return SensorVariable object or nullptr
  //
  ============================================================================*/
  SensorVariable* CreateVariable(const std::string& varName);

  //============================================================================
  //! \brief Search for a function with name funcName and create it
  //
  /*!
  //  \param funcName the name of the function to be created
  //  \return SensorFunction object or nullptr
  //
  ============================================================================*/
  SensorFunction* CreateFunction(const std::string& funcName);

  //============================================================================
  //! \brief Execute a function
  //
  /*!
  //  \param rVar Reference to the function to be executed
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult CallFunction(SensorFunction& rFunc) = 0;

  //============================================================================
  //! \brief Store parameters
  //
  /*!
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult StoreParameter() = 0;

  //============================================================================
  //! \brief Store parameters
  //
  /*!
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult RebootSensor() = 0;

  //============================================================================
  //! \brief Read the device name
  //
  /*!
  //  \param DeviceName will contain the device name upon successful read
  //  \return SSBL_SUCCESS on success
  //
  ============================================================================*/
  virtual SensorResult GetDeviceName(std::string& DeviceName) = 0;

  //============================================================================
  //! \brief Read the serial number
  //
  /*!
  //  \return Serial Number as string
  //
  ============================================================================*/
  virtual std::string GetSerialNumber() { return "NOT IMPLEMENTED YET!"; };

  //============================================================================
  //! \brief Get comptiable behavorial version
  //
  /*!
  //  \return Behavorial version as string
  //
  ============================================================================*/
  std::string GetBehavorialVersion() { return BehavorialVersion_; };

 protected:
  virtual Protocol* DeviceSpecificProtocolInit(ProtocolType Protocol,
                                               AddressingMode AddrMode) = 0;
  virtual SensorResult DeviceSpecificTestProtocol() = 0;

  virtual SensorResult DeviceSpecificProtocolSwitch(ProtocolType Protocol) = 0;

  SensorInterfaceDescription* GetPreferredInterface();
  SensorResult TestProtocol(SensorInterfaceDescription* pDesc);
  std::vector<SensorInterfaceDescription*> GetAlternateInterfaces(
      SensorInterfaceDescription* pDesiredInterface);

  uint32_t GetPassword(AccessLevel lvl) { return passwords_[lvl]; }

  SensorResult Init();

  SensorState stateInternal_;
  ConnectionState ConnState_;

  std::string BehavorialVersion_;
  std::string localName_;
  size_t localId_;

  size_t max_tx_buffer_size_;
  size_t max_rx_buffer_size_;

  SensorInterface* pActiveInterface_;
  Protocol* pActiveProtocol_;

  // will be set by derived device class
  std::string SensorName_;
  uint32_t passwords_[MAX_USER_LEVELS];
  std::string UserSelectedIpOrSerial_;
  std::string UserSelectedInterfaceName_;
  std::vector<std::unique_ptr<SensorInterfaceDescription*>>
      AvailableSensorInterfaces_;

  SensorComObjRepository<SensorVariable> VariableRepo;
  SensorComObjRepository<SensorFunction> FunctionRepo;
};

}  // namespace ssbl
