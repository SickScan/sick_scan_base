//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2D/TiM5xx/TiM5xx_1.0.0/include/TiM5xx_1.0.0Skeleton_Functions.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM5xx_1.0.0/include/TiM5xx_1.0.0Skeleton_Variables.h"

namespace ssbl
{
namespace DevTiM5xx_1.0.0Skeleton
{

SetScanConfig_TiM5xx_1.0.0Skeleton_Func::SetScanConfig_TiM5xx_1.0.0Skeleton_Func()
	: TiM5xx_1.0.0Skeleton_Func_AR("SetScanConfig" , "mLMPsetscancfg" ,55 , LEVEL_INVALID)
{
}


mStartMeasure_TiM5xx_1.0.0Skeleton_Func::mStartMeasure_TiM5xx_1.0.0Skeleton_Func()
	: TiM5xx_1.0.0Skeleton_Func_NAR("mStartMeasure" , "LMCstartmeas" ,56 , LEVEL_AUTHORIZED_CLIENT)
{
}


mStopMeasure_TiM5xx_1.0.0Skeleton_Func::mStopMeasure_TiM5xx_1.0.0Skeleton_Func()
	: TiM5xx_1.0.0Skeleton_Func_NAR("mStopMeasure" , "LMCstopmeas" ,57 , LEVEL_AUTHORIZED_CLIENT)
{
}


mSetDateTime_TiM5xx_1.0.0Skeleton_Func::mSetDateTime_TiM5xx_1.0.0Skeleton_Func()
	: TiM5xx_1.0.0Skeleton_Func_AR("mSetDateTime" , "LSPsetdatetime" ,63 , LEVEL_AUTHORIZED_CLIENT)
{
}


Run_TiM5xx_1.0.0Skeleton_Func::Run_TiM5xx_1.0.0Skeleton_Func()
	: TiM5xx_1.0.0Skeleton_Func_NAR("Run" , "Run" ,2 , LEVEL_RUN)
{
}


WriteEeprom_TiM5xx_1.0.0Skeleton_Func::WriteEeprom_TiM5xx_1.0.0Skeleton_Func()
	: TiM5xx_1.0.0Skeleton_Func_NAR("WriteEeprom" , "mEEwriteall" ,7 , LEVEL_AUTHORIZED_CLIENT)
{
}


RebootDevice_TiM5xx_1.0.0Skeleton_Func::RebootDevice_TiM5xx_1.0.0Skeleton_Func()
	: TiM5xx_1.0.0Skeleton_Func_NANR("RebootDevice" , "mSCreboot" ,11 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadFactoryDefaults_TiM5xx_1.0.0Skeleton_Func::LoadFactoryDefaults_TiM5xx_1.0.0Skeleton_Func()
	: TiM5xx_1.0.0Skeleton_Func_NANR("LoadFactoryDefaults" , "mSCloadfacdef" ,12 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadApplicationDefaults_TiM5xx_1.0.0Skeleton_Func::LoadApplicationDefaults_TiM5xx_1.0.0Skeleton_Func()
	: TiM5xx_1.0.0Skeleton_Func_NANR("LoadApplicationDefaults" , "mSCloadappdef" ,13 , LEVEL_AUTHORIZED_CLIENT)
{
}

} // namespace DevTiM5xx_1.0.0Skeleton
} // namespace ssbl