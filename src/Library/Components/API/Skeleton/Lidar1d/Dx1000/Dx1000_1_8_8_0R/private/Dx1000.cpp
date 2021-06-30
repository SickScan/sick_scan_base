//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000.h"
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_CoLa_Extension.h"
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Time.h"

namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{

//TODO: Buffer size is set fixed
//TODO: default interface
Dx1000::Dx1000(const std::string& Ip, const std::string& interfaceName,const std::string& localName)
	: CoLaSensorSkeleton(localName,16 * 1024,16 * 1024)
{
	SensorName_="Dx1000";
	passwords_[LEVEL_INVALID] = 0;
	passwords_[LEVEL_RUN] = 0x00000000;
	passwords_[LEVEL_OPERATOR] = 0x00000000;
	passwords_[LEVEL_MAINTENANCE] = 0xb21ace26;
	passwords_[LEVEL_AUTHORIZED_CLIENT] = 0xf4724744;
	passwords_[LEVEL_SERVICE] = 0x81be23aa;
	passwords_[LEVEL_SICKSERVICE] = 0xe606de89;
	passwords_[LEVEL_PRODUCTION] = 0x00000000;
	passwords_[LEVEL_DEVELOPER] = 0x00000000;
	BehavorialVersion_ = "1.0.0";
	UserSelectedIpOrSerial_ = Ip;
	UserSelectedInterfaceName_ = interfaceName;
	AvailableSensorInterfaces_.push_back(ssbl::make_unique<SensorInterfaceDescription*>( new SensorInterfaceDescription("CoLaB Port" , ETHERNET_INTERFACE , COLA_B , BY_NAME , 2111 , 
		{})));
	AvailableSensorInterfaces_.push_back(ssbl::make_unique<SensorInterfaceDescription*>( new SensorInterfaceDescription("CoLaA Port" , ETHERNET_INTERFACE , COLA_A , BY_NAME , 2111 , 
		{})));
	VariableRepo.RegisterComObj("Dx1000Distance",Distance_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000Velocity",Velocity_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000RSSI",RSSI_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000BridgingActive",BridgingActive_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000SCdevicestate",SCdevicestate_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000OrderNumber",OrderNumber_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000roiStart",roiStart_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000roiEnd",roiEnd_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000roiMinLevel",roiMinLevel_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000roiMaxLevel",roiMaxLevel_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000rainSnowFilterSetting",rainSnowFilterSetting_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000echoSeletionMode",echoSeletionMode_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000filterSelection",filterSelection_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000filterDepth",filterDepth_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000noEchoOutputMode",noEchoOutputMode_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000offset",offset_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000noEchoOutputDistance",noEchoOutputDistance_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000noEchoOutputVelocity",noEchoOutputVelocity_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000errorOutputDistance",errorOutputDistance_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000errorOutputVelocity",errorOutputVelocity_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000acquisitionTime",acquisitionTime_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000fogFilter",fogFilter_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000laserState",laserState_Dx1000_Var::Create); 
	VariableRepo.RegisterComObj("Dx1000pilotState",pilotState_Dx1000_Var::Create); 
	FunctionRepo.RegisterComObj("Dx1000WriteEeprom",WriteEeprom_Dx1000_Func::Create); 
	FunctionRepo.RegisterComObj("Dx1000RebootDevice",RebootDevice_Dx1000_Func::Create); 
	FunctionRepo.RegisterComObj("Dx1000LoadFactoryDefaults",LoadFactoryDefaults_Dx1000_Func::Create); 
	FunctionRepo.RegisterComObj("Dx1000LoadApplicationDefaults",LoadApplicationDefaults_Dx1000_Func::Create); 
	FunctionRepo.RegisterComObj("Dx1000enableMeasurementLaser",enableMeasurementLaser_Dx1000_Func::Create); 
	FunctionRepo.RegisterComObj("Dx1000disableMeasurementLaser",disableMeasurementLaser_Dx1000_Func::Create); 
	FunctionRepo.RegisterComObj("Dx1000enablePilotLaser",enablePilotLaser_Dx1000_Func::Create); 
	FunctionRepo.RegisterComObj("Dx1000disablePilotLaser",disablePilotLaser_Dx1000_Func::Create); 
}

Dx1000::~Dx1000()
{
	for (auto& x : AvailableSensorInterfaces_) {
		SensorInterfaceDescription* p = *(x.release());
		delete p;
	}
	AvailableSensorInterfaces_.clear();
}

Protocol * Dx1000::DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode)
{
	ssbl::Protocol * pRet = NULL;
	switch (Protocol)
	{
	case COLA_B:
		pRet = new Dx1000_CoLaBProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	case COLA_A:
		pRet = new Dx1000_CoLaAProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	default:
		SSBL_LOG_ERROR("Unknown protocol");
		break;
	}

	return pRet;
}

SensorResult Dx1000::DeviceSpecificProtocolSwitch(ProtocolType Protocol)
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

SensorResult Dx1000::StoreParameter()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	return ret;
}

SensorResult Dx1000::RebootSensor()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("RebootDevice");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(5000);
	delete m;
	return ret;
}
} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl
