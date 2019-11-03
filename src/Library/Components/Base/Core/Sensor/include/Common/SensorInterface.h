#pragma once
#include <stdint.h>
#include <functional>
#include <string>
#include <tuple>
#include <vector>
#include "Base/Core/Common/include/CallbackProvider.h"
#include "Base/Core/OS/include/Mutex.h"
#include "Base/Core/OS/include/Timer.h"
#include "Base/Types/include/BasicTypes.h"
#include "Base/Types/include/SickSensorReturnCodes.h"

namespace ssbl {
enum SensorInterfaceType {
  SERIAL_INTERFACE,
  ETHERNET_INTERFACE,
};

class SensorInterfaceProtocolSwitchHelper {
 public:
};

class SensorInterfaceDescription {
 public:
  SensorInterfaceDescription(
      std::string interfaceName, SensorInterfaceType type,
      ProtocolType protocol, AddressingMode adressingMode, uint32_t port,
      std::vector<std::tuple<ProtocolType, std::string, std::string>> info)
      : InterfaceName_(interfaceName),
        Type(type),
        Protocol(protocol),
        AdMode_(adressingMode),
        Port_(port),
        SwitchInfo_(info){

        };
  ~SensorInterfaceDescription() { SwitchInfo_.clear(); };

  std::string GetName(void) { return InterfaceName_; };
  SensorInterfaceType GetInterfaceType(void) { return Type; };
  ProtocolType GetProtocolType(void) { return Protocol; };
  AddressingMode GetAdressingMode(void) { return AdMode_; };
  uint32_t GetPort(void) { return Port_; };

  bool ProtocolSwitchingAllowed() { return (1 < SwitchInfo_.size()); }

  void AddSwitchInfo(ProtocolType proto, std::string switchVar,
                     std::string switchVarValue) {
    std::tuple<ProtocolType, std::string, std::string> info =
        make_tuple(proto, switchVar, switchVarValue);
    SwitchInfo_.push_back(info);
  }

  std::vector<std::tuple<ProtocolType, std::string, std::string>>
  GetSwitchInfo() {
    return SwitchInfo_;
  };

 private:
  std::string InterfaceName_;
  SensorInterfaceType Type;
  ProtocolType Protocol;
  AddressingMode AdMode_;
  uint32_t Port_;
  std::vector<std::tuple<ProtocolType, std::string, std::string>> SwitchInfo_;
};

class SensorInterface : public CallbackProvider {
 public:
  SensorInterface();
  virtual ~SensorInterface(){};

  virtual SensorResult Connect(void) { return SSBL_SUCCESS; };
  virtual void Disconnect(void){};
  virtual bool Send(uint8_t* pData, size_t nBytes) = 0;
  virtual bool IsOpen() = 0;

  virtual size_t BytesPending(void) = 0;
  virtual size_t Receive(uint8_t** ppData, size_t nBytesToRead) = 0;

  void SetInterfaceDescription(SensorInterfaceDescription* pDesc) {
    pDesc_ = pDesc;
  }

  SensorInterfaceDescription* GetInterfaceDescription() { return pDesc_; }

  bool ProtocolCanBeSwitched() { return pDesc_->ProtocolSwitchingAllowed(); }

 protected:
  SensorInterfaceDescription* pDesc_;
  std::function<void()> on_receive_cb_;
};

}  // namespace ssbl
