//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2d/TiM5x1/TiM5x1_V3_17_17_09_19/include/TiM5x1_Functions.h"
#include "API/Skeleton/Lidar2d/TiM5x1/TiM5x1_V3_17_17_09_19/include/TiM5x1_Variables.h"

namespace ssbl
{
namespace TiM5x1_V3_17_17_09_19_Skeleton
{

SetScanConfig_TiM5x1_Func::SetScanConfig_TiM5x1_Func()
	: TiM5x1_Func_AR("SetScanConfig" , "mLMPsetscancfg" ,55 , LEVEL_DEVELOPER)
{
}


mStartMeasure_TiM5x1_Func::mStartMeasure_TiM5x1_Func()
	: TiM5x1_Func_NAR("mStartMeasure" , "LMCstartmeas" ,56 , LEVEL_AUTHORIZED_CLIENT)
{
}


mStopMeasure_TiM5x1_Func::mStopMeasure_TiM5x1_Func()
	: TiM5x1_Func_NAR("mStopMeasure" , "LMCstopmeas" ,57 , LEVEL_AUTHORIZED_CLIENT)
{
}


mSetDateTime_TiM5x1_Func::mSetDateTime_TiM5x1_Func()
	: TiM5x1_Func_AR("mSetDateTime" , "LSPsetdatetime" ,63 , LEVEL_AUTHORIZED_CLIENT)
{
}


Run_TiM5x1_Func::Run_TiM5x1_Func()
	: TiM5x1_Func_NAR("Run" , "Run" ,2 , LEVEL_RUN)
{
}


WriteEeprom_TiM5x1_Func::WriteEeprom_TiM5x1_Func()
	: TiM5x1_Func_NAR("WriteEeprom" , "mEEwriteall" ,7 , LEVEL_AUTHORIZED_CLIENT)
{
}


RebootDevice_TiM5x1_Func::RebootDevice_TiM5x1_Func()
	: TiM5x1_Func_NANR("RebootDevice" , "mSCreboot" ,11 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadFactoryDefaults_TiM5x1_Func::LoadFactoryDefaults_TiM5x1_Func()
	: TiM5x1_Func_NANR("LoadFactoryDefaults" , "mSCloadfacdef" ,12 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadApplicationDefaults_TiM5x1_Func::LoadApplicationDefaults_TiM5x1_Func()
	: TiM5x1_Func_NANR("LoadApplicationDefaults" , "mSCloadappdef" ,13 , LEVEL_AUTHORIZED_CLIENT)
{
}

} // namespace TiM5x1_V3_17_17_09_19_Skeleton
} // namespace ssbl
