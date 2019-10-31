//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2D/TiM5xx/TiM561/include/TiM561Skeleton.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM561/include/TiM561Skeleton_CoLa_Extension.h"
#include "Base/Core/Common/include/Assert.h"
#include "Base/Core/Common/include/MakeUnique.h"
#include "Base/Core/OS/include/Time.h"

namespace ssbl
{
namespace DevTiM561Skeleton
{

//TODO: Buffer size is set fixed
//TODO: default interface
TiM561Skeleton::TiM561Skeleton(const std::string& Ip, const std::string& interfaceName,const std::string& localName)
	: CoLaSensorSkeleton(localName,16 * 1024,16 * 1024)
{
	SensorName_="TiM561Skeleton";
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
	VariableRepo.RegisterComObj("TiM561SkeletonScanConfig",ScanConfig_TiM561Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM561SkeletonEtherHostCoLaDialect",EtherHostCoLaDialect_TiM561Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM561SkeletonDataOutputRange",DataOutputRange_TiM561Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM561SkeletonScanData",ScanData_TiM561Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM561SkeletonScanDataConfig",ScanDataConfig_TiM561Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM561SkeletonSCdevicestate",SCdevicestate_TiM561Skeleton_Var::Create); 
	VariableRepo.RegisterComObj("TiM561SkeletonOrderNumber",OrderNumber_TiM561Skeleton_Var::Create); 
	FunctionRepo.RegisterComObj("TiM561SkeletonSetScanConfig",SetScanConfig_TiM561Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM561SkeletonmStartMeasure",mStartMeasure_TiM561Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM561SkeletonmStopMeasure",mStopMeasure_TiM561Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM561SkeletonmSetDateTime",mSetDateTime_TiM561Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM561SkeletonRun",Run_TiM561Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM561SkeletonWriteEeprom",WriteEeprom_TiM561Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM561SkeletonRebootDevice",RebootDevice_TiM561Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM561SkeletonLoadFactoryDefaults",LoadFactoryDefaults_TiM561Skeleton_Func::Create); 
	FunctionRepo.RegisterComObj("TiM561SkeletonLoadApplicationDefaults",LoadApplicationDefaults_TiM561Skeleton_Func::Create); 
}

TiM561Skeleton::~TiM561Skeleton()
{
	for (auto& x : AvailableSensorInterfaces_) {
		SickSensorInterfaceDescription* p = *(x.release());
		delete p;
	}
	AvailableSensorInterfaces_.clear();
}

Protocol * TiM561Skeleton::DeviceSpecificProtocolInit(ProtocolType Protocol, AddressingMode AddrMode)
{
	ssbl::Protocol * pRet = NULL;
	switch (Protocol)
	{
	case COLA_A:
		pRet = new TiM561Skeleton_CoLaAProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	case COLA_B:
		pRet = new TiM561Skeleton_CoLaBProtocol(AddrMode, max_tx_buffer_size_, max_rx_buffer_size_);
		break;
	default:
		SSBL_LOG_ERROR("Unknown protocol");
		break;
	}

	return pRet;
}

SensorResult TiM561Skeleton::DeviceSpecificProtocolSwitch(ProtocolType Protocol)
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

SensorResult TiM561Skeleton::StoreParameter()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("WriteEeprom");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(500);
	delete m;
	return ret;
}

SensorResult TiM561Skeleton::RebootSensor()
{
	SensorResult ret = SSBL_ERR_FEATURE_NOT_SUPPORTED;
	auto m = CreateFunction("RebootDevice");
	ret = CoLaSensorSkeleton::CallFunction(*m);
	SSBL_Sleep(5000);
	delete m;
	return ret;
}
} // namespace DevTiM561Skeleton
} // namespace ssbl
