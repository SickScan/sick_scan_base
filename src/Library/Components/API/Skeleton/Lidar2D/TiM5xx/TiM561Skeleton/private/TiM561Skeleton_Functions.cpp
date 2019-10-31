//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/include/TiM561Skeleton/TiM561Skeleton_Functions.h"
#include "API/Skeleton/include/TiM561Skeleton/TiM561Skeleton_Variables.h"

namespace ssbl
{
namespace DevTiM561Skeleton
{

SetScanConfig_TiM561Skeleton_Func::SetScanConfig_TiM561Skeleton_Func()
	: TiM561Skeleton_Func_AR("SetScanConfig" , "mLMPsetscancfg" ,55 , LEVEL_INVALID)
{
}


mStartMeasure_TiM561Skeleton_Func::mStartMeasure_TiM561Skeleton_Func()
	: TiM561Skeleton_Func_NAR("mStartMeasure" , "LMCstartmeas" ,56 , LEVEL_AUTHORIZED_CLIENT)
{
}


mStopMeasure_TiM561Skeleton_Func::mStopMeasure_TiM561Skeleton_Func()
	: TiM561Skeleton_Func_NAR("mStopMeasure" , "LMCstopmeas" ,57 , LEVEL_AUTHORIZED_CLIENT)
{
}


mSetDateTime_TiM561Skeleton_Func::mSetDateTime_TiM561Skeleton_Func()
	: TiM561Skeleton_Func_AR("mSetDateTime" , "LSPsetdatetime" ,63 , LEVEL_AUTHORIZED_CLIENT)
{
}


Run_TiM561Skeleton_Func::Run_TiM561Skeleton_Func()
	: TiM561Skeleton_Func_NAR("Run" , "Run" ,2 , LEVEL_RUN)
{
}


WriteEeprom_TiM561Skeleton_Func::WriteEeprom_TiM561Skeleton_Func()
	: TiM561Skeleton_Func_NAR("WriteEeprom" , "mEEwriteall" ,7 , LEVEL_AUTHORIZED_CLIENT)
{
}


RebootDevice_TiM561Skeleton_Func::RebootDevice_TiM561Skeleton_Func()
	: TiM561Skeleton_Func_NANR("RebootDevice" , "mSCreboot" ,11 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadFactoryDefaults_TiM561Skeleton_Func::LoadFactoryDefaults_TiM561Skeleton_Func()
	: TiM561Skeleton_Func_NANR("LoadFactoryDefaults" , "mSCloadfacdef" ,12 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadApplicationDefaults_TiM561Skeleton_Func::LoadApplicationDefaults_TiM561Skeleton_Func()
	: TiM561Skeleton_Func_NANR("LoadApplicationDefaults" , "mSCloadappdef" ,13 , LEVEL_AUTHORIZED_CLIENT)
{
}

} // namespace DevTiM561Skeleton
} // namespace ssbl
