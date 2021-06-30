//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2d/TiM5x1/TiM5x1_V3_17_17_09_19/include/TiM5x1.h"
#include "API/Skeleton/Lidar2d/TiM5x1/TiM5x1_V3_17_17_09_19/include/TiM5x1_CoLa_Extension.h"
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Time.h"

namespace ssbl
{
namespace TiM5x1_V3_17_17_09_19_Skeleton
{

//TODO: Buffer size is set fixed
//TODO: default interface
TiM5x1::TiM5x1(const std::string& Ip, const std::string& interfaceName,const std::string& localName)
	: CoLaSensorSkeleton(localName,16 * 1024,16 * 1024)
{
	SensorName_="TiM5x1";
	passwords_[LEVEL_INVALID] = 0;
	passwords_[LEVEL_RUN] = 0x00000000;
	passwords_[LEVEL_OPERATOR] = 0x00000000;
	passwords_[LEVEL_MAINTENANCE] = 0xb21ace26;
	passwords_[LEVEL_AUTHORIZED_CLIENT] = 0xf4724744;
	passwords_[LEVEL_SERVICE] = 0x81be23aa;
	passwords_[LEVEL_SICKSERVICE] = 0x00000000;
	passwords_[LEVEL_PRODUCTION] = 0x00000000;
	passwords_[LEVEL_DEVELOPER] = 0x00000000;
	BehavorialVersion_ = "1.0.0";
	UserSelectedIpOrSerial_ = Ip;
	UserSelectedInterfaceName_ = interfaceName;
	AvailableSensorInterfaces_.push_back(ssbl::make_unique<SensorInterfaceDescription*>( new SensorInterfaceDescription("CoLaA Port" , ETHERNET_INTERFACE , COLA_A , BY_NAME , 2111 , 
		{})));
	AvailableSensorInterfaces_.push_back(ssbl::make_unique<SensorInterfaceDescription*>( new SensorInterfaceDescription("CoLa Port" , ETHERNET_INTERFACE , COLA_B , BY_NAME , 2112 , 
		{std::make_tuple(COLA_B, "EtherHostCoLaDialect", "1"),std::make_tuple(COLA_A, "EtherHostCoLaDialect", "0")		})));
	AvailableSensorInterfaces_.push_back(ssbl::make_unique<SensorInterfaceDescription*>( new SensorInterfaceDescription("CoLa Port" , ETHERNET_INTERFACE , COLA_A , BY_NAME , 2112 , 
		{std::make_tuple(COLA_B, "EtherHostCoLaDialect", "1"),std::make_tuple(COLA_A, "EtherHostCoLaDialect", "0")		})));
	VariableRepo.RegisterComObj("TiM5x1DataOutputRange",DataOutputRange_TiM5x1_Var::Create); 
	VariableRepo.RegisterComObj("TiM5x1ScanData",ScanData_TiM5x1_Var::Create); 
	VariableRepo.RegisterComObj("TiM5x1EtherHostCoLaDialect",EtherHostCoLaDialect_TiM5x1_Var::Create); 
	VariableRepo.RegisterComObj("TiM5x1ScanConfig",ScanConfig_TiM5x1_Var::Create); 
	VariableRepo.RegisterComObj("TiM5x1ScanDataConfig",ScanDataConfig_TiM5x1_Var::Create); 
	VariableRepo.RegisterComObj("TiM5x1SCdevicestate",SCdevicestate_TiM5x1_Var::Create); 
	VariableRepo.RegisterComObj("TiM5x1OrderNumber",OrderNumber_TiM5x1_Var::Create); 
	FunctionRepo.RegisterComObj("TiM5x1SetScanConfig",SetScanConfig_TiM5x1_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5x1mStartMeasure",mStartMeasure_TiM5x1_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5x1mStopMeasure",mStopMeasure_TiM5x1_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5x1mSetDateTime",mSetDateTime_TiM5x1_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5x1Run",Run_TiM5x1_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5x1WriteEeprom",WriteEeprom_TiM5x1_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5x1RebootDevice",RebootDevice_TiM5x1_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5x1LoadFactoryDefaults",LoadFactoryDefaults_TiM5x1_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5x1LoadApplicationDefaults",LoadApplicationDefaults_TiM5x1_Func::Create); 
}

TiM5x1::~TiM5x1()
{
	for (auto& x : AvailableSensorInterfaces_) {
		SensorInterfaceDescription* p = *(x.release());
		delete p;
	}
	AvailableSensorInterfaces_.clear();
}

Protocol * TiM5x1::DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode)
{
	ssbl::Protocol * pRet = NULL;
	switch (Protocol)
	{
	case COLA_A:
		pRet = new TiM5x1_CoLaAProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	case COLA_B:
		pRet = new TiM5x1_CoLaBProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	default:
		SSBL_LOG_ERROR("Unknown protocol");
		break;
	}

	return pRet;
}

SensorResult TiM5x1::DeviceSpecificProtocolSwitch(ProtocolType Protocol)
{
	SensorResult ret = SSBL_ERR_PROTOCOL_NOT_DETECTED;
	if(pActiveInterface_->ProtocolCanBeSwitched()){
		std::vector<std::tuple<ProtocolType, std::string, std::string>> info = pActiveInterface_->GetInterfaceDescription()->GetSwitchInfo();

		for (auto x : info) {
			if (std::get<0>(x) == Protocol) {
				auto v = this->CreateVariable(std::get<1>(x));
				v->SetBasicFromString(std::get<2>(x));
				ret = CoLaSensorSkeleton::WriteVariable(*v);
				if(SSBL_SUCCESS == ret)
				{
					 ret = StoreParameter();
					if(SSBL_SUCCESS == ret)
					{
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

SensorResult TiM5x1::StoreParameter()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	return ret;
}

SensorResult TiM5x1::RebootSensor()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("RebootDevice");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(5000);
	delete m;
	return ret;
}
} // namespace TiM5x1_V3_17_17_09_19_Skeleton
} // namespace ssbl
