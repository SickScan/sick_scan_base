//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/OLM200/OLM200_V002_004_000/include/OLM200.h"
#include "API/Skeleton/Lidar1d/OLM200/OLM200_V002_004_000/include/OLM200_CoLa_Extension.h"
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Time.h"

namespace ssbl
{
namespace OLM200_V002_004_000_Skeleton
{

//TODO: Buffer size is set fixed
//TODO: default interface
OLM200::OLM200(const std::string& Ip, const std::string& interfaceName,const std::string& localName)
	: CoLaSensorSkeleton(localName,16 * 1024,16 * 1024)
{
	SensorName_="OLM200";
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
	VariableRepo.RegisterComObj("OLM200PositionData",PositionData_OLM200_Var::Create); 
	VariableRepo.RegisterComObj("OLM200Speed",Speed_OLM200_Var::Create); 
	VariableRepo.RegisterComObj("OLM200Acceleration",Acceleration_OLM200_Var::Create); 
	VariableRepo.RegisterComObj("OLM200GeneralReadability",GeneralReadability_OLM200_Var::Create); 
	VariableRepo.RegisterComObj("OLM200LocalReadability",LocalReadability_OLM200_Var::Create); 
	VariableRepo.RegisterComObj("OLM200Temperature",Temperature_OLM200_Var::Create); 
	FunctionRepo.RegisterComObj("OLM200StoreParameterPage",StoreParameterPage_OLM200_Func::Create); 
	FunctionRepo.RegisterComObj("OLM200ResetParameter",ResetParameter_OLM200_Func::Create); 
	FunctionRepo.RegisterComObj("OLM200SetColdstart",SetColdstart_OLM200_Func::Create); 
	FunctionRepo.RegisterComObj("OLM200IlluminationOn",IlluminationOn_OLM200_Func::Create); 
	FunctionRepo.RegisterComObj("OLM200IlluminationOff",IlluminationOff_OLM200_Func::Create); 
}

OLM200::~OLM200()
{
	for (auto& x : AvailableSensorInterfaces_) {
		SensorInterfaceDescription* p = *(x.release());
		delete p;
	}
	AvailableSensorInterfaces_.clear();
}

Protocol * OLM200::DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode)
{
	ssbl::Protocol * pRet = NULL;
	switch (Protocol)
	{
	case COLA_B:
		pRet = new OLM200_CoLaBProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	default:
		SSBL_LOG_ERROR("Unknown protocol");
		break;
	}

	return pRet;
}

SensorResult OLM200::DeviceSpecificProtocolSwitch(ProtocolType Protocol)
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

SensorResult OLM200::StoreParameter()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	return ret;
}

SensorResult OLM200::RebootSensor()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("SetColdstart");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(5000);
	delete m;
	return ret;
}
} // namespace OLM200_V002_004_000_Skeleton
} // namespace ssbl
