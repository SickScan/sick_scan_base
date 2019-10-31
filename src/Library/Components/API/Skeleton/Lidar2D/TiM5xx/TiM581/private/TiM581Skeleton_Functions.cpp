//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2D/TiM5xx/TiM581/include/TiM581Skeleton_Functions.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM581/include/TiM581Skeleton_Variables.h"

namespace ssbl
{
namespace DevTiM581Skeleton
{

SetScanConfig_TiM581Skeleton_Func::SetScanConfig_TiM581Skeleton_Func()
	: TiM581Skeleton_Func_AR("SetScanConfig" , "mLMPsetscancfg" ,55 , LEVEL_INVALID)
{
}


mStartMeasure_TiM581Skeleton_Func::mStartMeasure_TiM581Skeleton_Func()
	: TiM581Skeleton_Func_NAR("mStartMeasure" , "LMCstartmeas" ,56 , LEVEL_AUTHORIZED_CLIENT)
{
}


mStopMeasure_TiM581Skeleton_Func::mStopMeasure_TiM581Skeleton_Func()
	: TiM581Skeleton_Func_NAR("mStopMeasure" , "LMCstopmeas" ,57 , LEVEL_AUTHORIZED_CLIENT)
{
}


mSetDateTime_TiM581Skeleton_Func::mSetDateTime_TiM581Skeleton_Func()
	: TiM581Skeleton_Func_AR("mSetDateTime" , "LSPsetdatetime" ,63 , LEVEL_AUTHORIZED_CLIENT)
{
}


Run_TiM581Skeleton_Func::Run_TiM581Skeleton_Func()
	: TiM581Skeleton_Func_NAR("Run" , "Run" ,2 , LEVEL_RUN)
{
}


WriteEeprom_TiM581Skeleton_Func::WriteEeprom_TiM581Skeleton_Func()
	: TiM581Skeleton_Func_NAR("WriteEeprom" , "mEEwriteall" ,7 , LEVEL_AUTHORIZED_CLIENT)
{
}


RebootDevice_TiM581Skeleton_Func::RebootDevice_TiM581Skeleton_Func()
	: TiM581Skeleton_Func_NANR("RebootDevice" , "mSCreboot" ,11 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadFactoryDefaults_TiM581Skeleton_Func::LoadFactoryDefaults_TiM581Skeleton_Func()
	: TiM581Skeleton_Func_NANR("LoadFactoryDefaults" , "mSCloadfacdef" ,12 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadApplicationDefaults_TiM581Skeleton_Func::LoadApplicationDefaults_TiM581Skeleton_Func()
	: TiM581Skeleton_Func_NANR("LoadApplicationDefaults" , "mSCloadappdef" ,13 , LEVEL_AUTHORIZED_CLIENT)
{
}

} // namespace DevTiM581Skeleton
} // namespace ssbl
