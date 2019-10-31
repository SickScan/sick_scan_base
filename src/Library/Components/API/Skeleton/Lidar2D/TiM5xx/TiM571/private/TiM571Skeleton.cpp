//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2D/TiM5xx/TiM571/include/TiM571Skeleton.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM571/include/TiM571Skeleton_CoLa_Extension.h"
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Time.h"

namespace ssbl
{
namespace DevTiM571Skeleton
{

//TODO: Buffer size is set fixed
//TODO: default interface
TiM571Skeleton::TiM571Skeleton(const std::string& Ip, const std::string& interfaceName,const std::string& localName)
	: CoLaSensorSkeleton(localName,16 * 1024,16 * 1024)
{
	SensorName_="TiM571Skeleton";
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
	VariableRepo.RegisterComObj("TiM571SkeletonScanConfig",ScanConfig_TiM571Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM571SkeletonEtherHostCoLaDialect",EtherHostCoLaDialect_TiM571Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM571SkeletonDataOutputRange",DataOutputRange_TiM571Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM571SkeletonScanData",ScanData_TiM571Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM571SkeletonScanDataConfig",ScanDataConfig_TiM571Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM571SkeletonSCdevicestate",SCdevicestate_TiM571Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM571SkeletonOrderNumber",OrderNumber_TiM571Skeleton_Var::Create); 
	FunctionRepo.RegisterComObj("TiM571SkeletonSetScanConfig",SetScanConfig_TiM571Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM571SkeletonmStartMeasure",mStartMeasure_TiM571Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM571SkeletonmStopMeasure",mStopMeasure_TiM571Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM571SkeletonmSetDateTime",mSetDateTime_TiM571Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM571SkeletonRun",Run_TiM571Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM571SkeletonWriteEeprom",WriteEeprom_TiM571Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM571SkeletonRebootDevice",RebootDevice_TiM571Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM571SkeletonLoadFactoryDefaults",LoadFactoryDefaults_TiM571Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM571SkeletonLoadApplicationDefaults",LoadApplicationDefaults_TiM571Skeleton_Func::Create); 
}

TiM571Skeleton::~TiM571Skeleton()
{
	for (auto& x : AvailableSensorInterfaces_) {
		SickSensorInterfaceDescription* p = *(x.release());
		delete p;
	}
	AvailableSensorInterfaces_.clear();
}

Protocol * TiM571Skeleton::DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode)
{
	ssbl::Protocol * pRet = NULL;
	switch (Protocol)
	{
	case COLA_A:
		pRet = new TiM571Skeleton_CoLaAProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	case COLA_B:
		pRet = new TiM571Skeleton_CoLaBProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	default:
		SSBL_LOG_ERROR("Unknown protocol");
		break;
	}

	return pRet;
}

SensorResult TiM571Skeleton::DeviceSpecificProtocolSwitch(ProtocolType Protocol)
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

SensorResult TiM571Skeleton::StoreParameter()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("WriteEeprom");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(500);
	delete m;
	return ret;
}

SensorResult TiM571Skeleton::RebootSensor()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("RebootDevice");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(5000);
	delete m;
	return ret;
}
} // namespace DevTiM571Skeleton
} // namespace ssbl
