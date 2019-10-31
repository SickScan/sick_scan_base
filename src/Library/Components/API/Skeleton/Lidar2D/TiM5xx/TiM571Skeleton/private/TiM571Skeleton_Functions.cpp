//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/include/TiM571Skeleton/TiM571Skeleton_Functions.h"
#include "API/Skeleton/include/TiM571Skeleton/TiM571Skeleton_Variables.h"

namespace ssbl
{
namespace DevTiM571Skeleton
{

SetScanConfig_TiM571Skeleton_Func::SetScanConfig_TiM571Skeleton_Func()
	: TiM571Skeleton_Func_AR("SetScanConfig" , "mLMPsetscancfg" ,55 , LEVEL_INVALID)
{
}


mStartMeasure_TiM571Skeleton_Func::mStartMeasure_TiM571Skeleton_Func()
	: TiM571Skeleton_Func_NAR("mStartMeasure" , "LMCstartmeas" ,56 , LEVEL_AUTHORIZED_CLIENT)
{
}


mStopMeasure_TiM571Skeleton_Func::mStopMeasure_TiM571Skeleton_Func()
	: TiM571Skeleton_Func_NAR("mStopMeasure" , "LMCstopmeas" ,57 , LEVEL_AUTHORIZED_CLIENT)
{
}


mSetDateTime_TiM571Skeleton_Func::mSetDateTime_TiM571Skeleton_Func()
	: TiM571Skeleton_Func_AR("mSetDateTime" , "LSPsetdatetime" ,63 , LEVEL_AUTHORIZED_CLIENT)
{
}


Run_TiM571Skeleton_Func::Run_TiM571Skeleton_Func()
	: TiM571Skeleton_Func_NAR("Run" , "Run" ,2 , LEVEL_RUN)
{
}


WriteEeprom_TiM571Skeleton_Func::WriteEeprom_TiM571Skeleton_Func()
	: TiM571Skeleton_Func_NAR("WriteEeprom" , "mEEwriteall" ,7 , LEVEL_AUTHORIZED_CLIENT)
{
}


RebootDevice_TiM571Skeleton_Func::RebootDevice_TiM571Skeleton_Func()
	: TiM571Skeleton_Func_NANR("RebootDevice" , "mSCreboot" ,11 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadFactoryDefaults_TiM571Skeleton_Func::LoadFactoryDefaults_TiM571Skeleton_Func()
	: TiM571Skeleton_Func_NANR("LoadFactoryDefaults" , "mSCloadfacdef" ,12 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadApplicationDefaults_TiM571Skeleton_Func::LoadApplicationDefaults_TiM571Skeleton_Func()
	: TiM571Skeleton_Func_NANR("LoadApplicationDefaults" , "mSCloadappdef" ,13 , LEVEL_AUTHORIZED_CLIENT)
{
}

} // namespace DevTiM571Skeleton
} // namespace ssbl
