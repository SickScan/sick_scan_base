//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_003_002/include/OLM100.h"
#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_003_002/include/OLM100_CoLa_Extension.h"
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Time.h"

namespace ssbl
{
namespace OLM100_V002_003_002_Skeleton
{

//TODO: Buffer size is set fixed
//TODO: default interface
OLM100::OLM100(const std::string& Ip, const std::string& interfaceName,const std::string& localName)
	: CoLaSensorSkeleton(localName,16 * 1024,16 * 1024)
{
	SensorName_="OLM100";
	passwords_[LEVEL_INVALID] = 0;
	passwords_[LEVEL_RUN] = 0x00000000;
	passwords_[LEVEL_OPERATOR] = 0;
	passwords_[LEVEL_MAINTENANCE] = 0x89e693a2;
	passwords_[LEVEL_AUTHORIZED_CLIENT] = 0xf4724744;
	passwords_[LEVEL_SERVICE] = 0x81be23aa;
	passwords_[LEVEL_SICKSERVICE] = 0;
	passwords_[LEVEL_PRODUCTION] = 0;
	passwords_[LEVEL_DEVELOPER] = 0;
	BehavorialVersion_ = "1.0.0";
	UserSelectedIpOrSerial_ = Ip;
	UserSelectedInterfaceName_ = interfaceName;
	AvailableSensorInterfaces_.push_back(ssbl::make_unique<SensorInterfaceDescription*>( new SensorInterfaceDescription("CoLaB Port" , ETHERNET_INTERFACE , COLA_B , BY_INDEX , 2112 , 
		{})));
	VariableRepo.RegisterComObj("OLM100PositionData",PositionData_OLM100_Var::Create); 
	VariableRepo.RegisterComObj("OLM100Speed",Speed_OLM100_Var::Create); 
	VariableRepo.RegisterComObj("OLM100Acceleration",Acceleration_OLM100_Var::Create); 
	VariableRepo.RegisterComObj("OLM100GeneralReadability",GeneralReadability_OLM100_Var::Create); 
	VariableRepo.RegisterComObj("OLM100LocalReadability",LocalReadability_OLM100_Var::Create); 
	VariableRepo.RegisterComObj("OLM100Temperature",Temperature_OLM100_Var::Create); 
	FunctionRepo.RegisterComObj("OLM100StoreParameterPage",StoreParameterPage_OLM100_Func::Create); 
	FunctionRepo.RegisterComObj("OLM100ResetParameter",ResetParameter_OLM100_Func::Create); 
	FunctionRepo.RegisterComObj("OLM100SetColdstart",SetColdstart_OLM100_Func::Create); 
	FunctionRepo.RegisterComObj("OLM100IlluminationOn",IlluminationOn_OLM100_Func::Create); 
	FunctionRepo.RegisterComObj("OLM100IlluminationOff",IlluminationOff_OLM100_Func::Create); 
}

OLM100::~OLM100()
{
	for (auto& x : AvailableSensorInterfaces_) {
		SensorInterfaceDescription* p = *(x.release());
		delete p;
	}
	AvailableSensorInterfaces_.clear();
}

Protocol * OLM100::DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode)
{
	ssbl::Protocol * pRet = NULL;
	switch (Protocol)
	{
	case COLA_B:
		pRet = new OLM100_CoLaBProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	default:
		SSBL_LOG_ERROR("Unknown protocol");
		break;
	}

	return pRet;
}

SensorResult OLM100::DeviceSpecificProtocolSwitch(ProtocolType Protocol)
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

SensorResult OLM100::StoreParameter()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	return ret;
}

SensorResult OLM100::RebootSensor()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("SetColdstart");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(5000);
	delete m;
	return ret;
}
} // namespace OLM100_V002_003_002_Skeleton
} // namespace ssbl
