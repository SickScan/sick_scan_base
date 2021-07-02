//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/DL100/DL100_V001_003_011/include/DL100.h"
#include "API/Skeleton/Lidar1d/DL100/DL100_V001_003_011/include/DL100_CoLa_Extension.h"
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Time.h"

namespace ssbl
{
namespace DL100_V001_003_011_Skeleton
{

//TODO: Buffer size is set fixed
//TODO: default interface
DL100::DL100(const std::string& Ip, const std::string& interfaceName,const std::string& localName)
	: CoLaSensorSkeleton(localName,16 * 1024,16 * 1024)
{
	SensorName_="DL100";
	passwords_[LEVEL_INVALID] = 0;
	passwords_[LEVEL_RUN] = 0x00000000;
	passwords_[LEVEL_OPERATOR] = 0x00000000;
	passwords_[LEVEL_MAINTENANCE] = 0x89e693a2;
	passwords_[LEVEL_AUTHORIZED_CLIENT] = 0xf4724744;
	passwords_[LEVEL_SERVICE] = 0x81be23aa;
	passwords_[LEVEL_SICKSERVICE] = 0xe606de89;
	passwords_[LEVEL_PRODUCTION] = 0x00000000;
	passwords_[LEVEL_DEVELOPER] = 0x00000000;
	BehavorialVersion_ = "1.0.0";
	UserSelectedIpOrSerial_ = Ip;
	UserSelectedInterfaceName_ = interfaceName;
	AvailableSensorInterfaces_.push_back(ssbl::make_unique<SensorInterfaceDescription*>( new SensorInterfaceDescription("CoLaB Port" , ETHERNET_INTERFACE , COLA_B , BY_INDEX , 2112 , 
		{})));
	VariableRepo.RegisterComObj("DL100distance",distance_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100velocity",velocity_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100averagedVelocity",averagedVelocity_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100acceleration",acceleration_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100dbLevelComm",dbLevelComm_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100temperature",temperature_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100distanceOffset",distanceOffset_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100laserError",laserError_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100temperatureError",temperatureError_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100levelError",levelError_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100plausiblityError",plausiblityError_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100laserPrefailWarning",laserPrefailWarning_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100temperaturePrefailWarning",temperaturePrefailWarning_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100levelPrefailWarning",levelPrefailWarning_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100plausiblityPrefailWarning",plausiblityPrefailWarning_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100operatingHours",operatingHours_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100mf1switchCounter",mf1switchCounter_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100mf2switchCounter",mf2switchCounter_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100DebugOutputSelect",DebugOutputSelect_DL100_Var::Create); 
	VariableRepo.RegisterComObj("DL100OnOff",OnOff_DL100_Var::Create); 
	FunctionRepo.RegisterComObj("DL100storeParameterPage",storeParameterPage_DL100_Func::Create); 
	FunctionRepo.RegisterComObj("DL100parameterReset",parameterReset_DL100_Func::Create); 
	FunctionRepo.RegisterComObj("DL100setColdstart",setColdstart_DL100_Func::Create); 
	FunctionRepo.RegisterComObj("DL100resetMF1switchCounter",resetMF1switchCounter_DL100_Func::Create); 
	FunctionRepo.RegisterComObj("DL100resetMF2switchCounter",resetMF2switchCounter_DL100_Func::Create); 
	FunctionRepo.RegisterComObj("DL100getDebugData",getDebugData_DL100_Func::Create); 
}

DL100::~DL100()
{
	for (auto& x : AvailableSensorInterfaces_) {
		SensorInterfaceDescription* p = *(x.release());
		delete p;
	}
	AvailableSensorInterfaces_.clear();
}

Protocol * DL100::DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode)
{
	ssbl::Protocol * pRet = NULL;
	switch (Protocol)
	{
	case COLA_B:
		pRet = new DL100_CoLaBProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	default:
		SSBL_LOG_ERROR("Unknown protocol");
		break;
	}

	return pRet;
}

SensorResult DL100::DeviceSpecificProtocolSwitch(ProtocolType Protocol)
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

SensorResult DL100::StoreParameter()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	return ret;
}

SensorResult DL100::RebootSensor()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("setColdstart");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(5000);
	delete m;
	return ret;
}
} // namespace DL100_V001_003_011_Skeleton
} // namespace ssbl
