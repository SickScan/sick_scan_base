//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2D/TiM5xx/TiM5xx_1.0.0/include/TiM5xx_1.0.0Skeleton.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM5xx_1.0.0/include/TiM5xx_1.0.0Skeleton_CoLa_Extension.h"
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Time.h"

namespace ssbl
{
namespace DevTiM5xx_1.0.0Skeleton
{

//TODO: Buffer size is set fixed
//TODO: default interface
TiM5xx_1.0.0Skeleton::TiM5xx_1.0.0Skeleton(const std::string& Ip, const std::string& interfaceName,const std::string& localName)
	: CoLaSensorSkeleton(localName,16 * 1024,16 * 1024)
{
	SensorName_="TiM5xx_1.0.0Skeleton";
	passwords_[LEVEL_INVALID] = 0;
	passwords_[LEVEL_RUN] = 0x00000000;
	passwords_[LEVEL_MAINTAINANCE] = 0xB21ACE26;
	passwords_[LEVEL_AUTHORIZED_CLIENT] = 0xF4724744;
	passwords_[LEVEL_SERVICE] = 0x81BE23AA;
	UserSelectedIpOrSerial_ = Ip;
	UserSelectedInterfaceName_ = interfaceName;
	AvailableSensorInterfaces_.push_back(ssbl::make_unique<SickSensorInterfaceDescription*>( new SickSensorInterfaceDescription("CoLaA Port" , ETHERNET_INTERFACE , COLA_A , BY_NAME , 2111 , 
		{})));
	AvailableSensorInterfaces_.push_back(ssbl::make_unique<SickSensorInterfaceDescription*>( new SickSensorInterfaceDescription("CoLa Port" , ETHERNET_INTERFACE , COLA_B , BY_NAME , 2112 , 
		{std::make_tuple(COLA_B, "EtherHostCoLaDialect", "1"),std::make_tuple(COLA_A, "EtherHostCoLaDialect", "0")		})));
	AvailableSensorInterfaces_.push_back(ssbl::make_unique<SickSensorInterfaceDescription*>( new SickSensorInterfaceDescription("CoLa Port" , ETHERNET_INTERFACE , COLA_A , BY_NAME , 2112 , 
		{std::make_tuple(COLA_B, "EtherHostCoLaDialect", "1"),std::make_tuple(COLA_A, "EtherHostCoLaDialect", "0")		})));
	VariableRepo.RegisterComObj("TiM5xx_1.0.0SkeletonScanConfig",ScanConfig_TiM5xx_1.0.0Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM5xx_1.0.0SkeletonEtherHostCoLaDialect",EtherHostCoLaDialect_TiM5xx_1.0.0Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM5xx_1.0.0SkeletonDataOutputRange",DataOutputRange_TiM5xx_1.0.0Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM5xx_1.0.0SkeletonScanData",ScanData_TiM5xx_1.0.0Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM5xx_1.0.0SkeletonScanDataConfig",ScanDataConfig_TiM5xx_1.0.0Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM5xx_1.0.0SkeletonSCdevicestate",SCdevicestate_TiM5xx_1.0.0Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM5xx_1.0.0SkeletonOrderNumber",OrderNumber_TiM5xx_1.0.0Skeleton_Var::Create); 
	FunctionRepo.RegisterComObj("TiM5xx_1.0.0SkeletonSetScanConfig",SetScanConfig_TiM5xx_1.0.0Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5xx_1.0.0SkeletonmStartMeasure",mStartMeasure_TiM5xx_1.0.0Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5xx_1.0.0SkeletonmStopMeasure",mStopMeasure_TiM5xx_1.0.0Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5xx_1.0.0SkeletonmSetDateTime",mSetDateTime_TiM5xx_1.0.0Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5xx_1.0.0SkeletonRun",Run_TiM5xx_1.0.0Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5xx_1.0.0SkeletonWriteEeprom",WriteEeprom_TiM5xx_1.0.0Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5xx_1.0.0SkeletonRebootDevice",RebootDevice_TiM5xx_1.0.0Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5xx_1.0.0SkeletonLoadFactoryDefaults",LoadFactoryDefaults_TiM5xx_1.0.0Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM5xx_1.0.0SkeletonLoadApplicationDefaults",LoadApplicationDefaults_TiM5xx_1.0.0Skeleton_Func::Create); 
}

TiM5xx_1.0.0Skeleton::~TiM5xx_1.0.0Skeleton()
{
	for (auto& x : AvailableSensorInterfaces_) {
		SickSensorInterfaceDescription* p = *(x.release());
		delete p;
	}
	AvailableSensorInterfaces_.clear();
}

Protocol * TiM5xx_1.0.0Skeleton::DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode)
{
	ssbl::Protocol * pRet = NULL;
	switch (Protocol)
	{
	case COLA_A:
		pRet = new TiM5xx_1.0.0Skeleton_CoLaAProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	case COLA_B:
		pRet = new TiM5xx_1.0.0Skeleton_CoLaBProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	default:
		SSBL_LOG_ERROR("Unknown protocol");
		break;
	}

	return pRet;
}

SensorResult TiM5xx_1.0.0Skeleton::DeviceSpecificProtocolSwitch(ProtocolType Protocol)
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

SensorResult TiM5xx_1.0.0Skeleton::StoreParameter()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("WriteEeprom");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(500);
	delete m;
	return ret;
}

SensorResult TiM5xx_1.0.0Skeleton::RebootSensor()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("RebootDevice");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(5000);
	delete m;
	return ret;
}
} // namespace DevTiM5xx_1.0.0Skeleton
} // namespace ssbl
