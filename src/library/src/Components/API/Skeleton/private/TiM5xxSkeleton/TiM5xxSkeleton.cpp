//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton.h"
#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton_CoLa_Extension.h"
#include "Core/Common/include/Assert.h"
#include "Core/OS/include/Time.h"

namespace ssbl {
namespace DevTiM5xxSkeleton {

// TODO: Buffer size is set fixed
// TODO: default interface
TiM5xxSkeleton::TiM5xxSkeleton(const std::string& Ip,
                               const std::string& interfaceName,
                               const std::string& localName)
    : CoLaSensorSkeleton(localName, 16 * 1024, 16 * 1024) {
  SensorName_ = "TiM5xxSkeleton";
  passwords_[LEVEL_INVALID] = 0;
  passwords_[LEVEL_RUN] = 0x00000000;
  passwords_[LEVEL_MAINTAINANCE] = 0xB21ACE26;
  passwords_[LEVEL_AUTHORIZED_CLIENT] = 0xF4724744;
  passwords_[LEVEL_SERVICE] = 0x81BE23AA;
  UserSelectedIpOrSerial_ = Ip;
  UserSelectedInterfaceName_ = interfaceName;
  AvailableSensorInterfaces_.push_back(
      std::make_unique<SickSensorInterfaceDescription*>(
          new SickSensorInterfaceDescription("CoLaA Port", ETHERNET_INTERFACE,
                                             COLA_A, BY_NAME, 2111, {})));
  AvailableSensorInterfaces_.push_back(
      std::make_unique<SickSensorInterfaceDescription*>(
          new SickSensorInterfaceDescription(
              "CoLa Port", ETHERNET_INTERFACE, COLA_B, BY_NAME, 2112,
              {std::make_tuple(COLA_B, "EtherHostCoLaDialect", "1"),
               std::make_tuple(COLA_A, "EtherHostCoLaDialect", "0")})));
  AvailableSensorInterfaces_.push_back(
      std::make_unique<SickSensorInterfaceDescription*>(
          new SickSensorInterfaceDescription(
              "CoLa Port", ETHERNET_INTERFACE, COLA_A, BY_NAME, 2112,
              {std::make_tuple(COLA_B, "EtherHostCoLaDialect", "1"),
               std::make_tuple(COLA_A, "EtherHostCoLaDialect", "0")})));
  VariableRepo.RegisterComObj("TiM5xxSkeletonScanConfig",
                              ScanConfig_TiM5xxSkeleton_Var::Create);
  VariableRepo.RegisterComObj("TiM5xxSkeletonEtherHostCoLaDialect",
                              EtherHostCoLaDialect_TiM5xxSkeleton_Var::Create);
  VariableRepo.RegisterComObj("TiM5xxSkeletonDataOutputRange",
                              DataOutputRange_TiM5xxSkeleton_Var::Create);
  VariableRepo.RegisterComObj("TiM5xxSkeletonScanData",
                              ScanData_TiM5xxSkeleton_Var::Create);
  VariableRepo.RegisterComObj("TiM5xxSkeletonScanDataConfig",
                              ScanDataConfig_TiM5xxSkeleton_Var::Create);
  VariableRepo.RegisterComObj("TiM5xxSkeletonSCdevicestate",
                              SCdevicestate_TiM5xxSkeleton_Var::Create);
  VariableRepo.RegisterComObj("TiM5xxSkeletonOrderNumber",
                              OrderNumber_TiM5xxSkeleton_Var::Create);
  FunctionRepo.RegisterComObj("TiM5xxSkeletonSetScanConfig",
                              SetScanConfig_TiM5xxSkeleton_Func::Create);
  FunctionRepo.RegisterComObj("TiM5xxSkeletonmStartMeasure",
                              mStartMeasure_TiM5xxSkeleton_Func::Create);
  FunctionRepo.RegisterComObj("TiM5xxSkeletonmStopMeasure",
                              mStopMeasure_TiM5xxSkeleton_Func::Create);
  FunctionRepo.RegisterComObj("TiM5xxSkeletonmSetDateTime",
                              mSetDateTime_TiM5xxSkeleton_Func::Create);
  FunctionRepo.RegisterComObj("TiM5xxSkeletonRun",
                              Run_TiM5xxSkeleton_Func::Create);
  FunctionRepo.RegisterComObj("TiM5xxSkeletonWriteEeprom",
                              WriteEeprom_TiM5xxSkeleton_Func::Create);
  FunctionRepo.RegisterComObj("TiM5xxSkeletonRebootDevice",
                              RebootDevice_TiM5xxSkeleton_Func::Create);
  FunctionRepo.RegisterComObj("TiM5xxSkeletonLoadFactoryDefaults",
                              LoadFactoryDefaults_TiM5xxSkeleton_Func::Create);
  FunctionRepo.RegisterComObj(
      "TiM5xxSkeletonLoadApplicationDefaults",
      LoadApplicationDefaults_TiM5xxSkeleton_Func::Create);
}

TiM5xxSkeleton::~TiM5xxSkeleton() {
  for (auto& x : AvailableSensorInterfaces_) {
    SickSensorInterfaceDescription* p = *(x.release());
    delete p;
  }
  AvailableSensorInterfaces_.clear();
}

Protocol* TiM5xxSkeleton::DeviceSpecificProtocolInit(ProtocolType Protocol,
                                                     AddressingMode AddrMode) {
  ssbl::Protocol* pRet = NULL;
  switch (Protocol) {
    case COLA_A:
      pRet = new TiM5xxSkeleton_CoLaAProtocol(AddrMode, max_tx_buffer_size_,
                                              max_rx_buffer_size_);
      break;
    case COLA_B:
      pRet = new TiM5xxSkeleton_CoLaBProtocol(AddrMode, max_tx_buffer_size_,
                                              max_rx_buffer_size_);
      break;
    default:
      SSBL_LOG_ERROR("Unknown protocol");
      break;
  }

  return pRet;
}

SensorResult TiM5xxSkeleton::DeviceSpecificProtocolSwitch(
    ProtocolType Protocol) {
  SensorResult ret = SSBL_ERR_PROTOCOL_NOT_DETECTED;
  if (pActiveInterface_->ProtocolCanBeSwitched()) {
    std::vector<std::tuple<ProtocolType, std::string, std::string>> info =
        pActiveInterface_->GetInterfaceDescription()->GetSwitchInfo();

    for (auto x : info) {
      if (std::get<0>(x) == Protocol) {
        auto v = this->CreateVariable(std::get<1>(x));
        v->SetBasicFromString(std::get<2>(x));
        ret = CoLaSensorSkeleton::WriteVariable(*v);
        if (SSBL_SUCCESS == ret) {
          ret = StoreParameter();
          if (SSBL_SUCCESS == ret) {
            ret = RebootSensor();
          } else {
            SSBL_LOG_ERROR("Can't store parameter");
          }
        }
        delete v;
        break;
      }
    }
  }
  return ret;
}

SensorResult TiM5xxSkeleton::StoreParameter() {
  SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
  auto m = CreateFunction("WriteEeprom");
  ret = CoLaSensorSkeleton::CallFunction(*m);
  SSBL_Sleep(500);
  delete m;
  return ret;
}

SensorResult TiM5xxSkeleton::RebootSensor() {
  SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
  auto m = CreateFunction("RebootDevice");
  ret = CoLaSensorSkeleton::CallFunction(*m);
  SSBL_Sleep(5000);
  delete m;
  return ret;
}
}  // namespace DevTiM5xxSkeleton
}  // namespace ssbl
