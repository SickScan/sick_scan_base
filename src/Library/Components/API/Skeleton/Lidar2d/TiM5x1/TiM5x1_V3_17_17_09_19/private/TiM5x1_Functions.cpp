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
	: TiM5x1_Func_AR("SetScanConfig" , "mLMPsetscancfg" ,55 , LEVEL_RUN)
{
}


mStartMeasure_TiM5x1_Func::mStartMeasure_TiM5x1_Func()
	: TiM5x1_Func_NAR("mStartMeasure" , "LMCstartmeas" ,56 , LEVEL_RUN)
{
}


mStopMeasure_TiM5x1_Func::mStopMeasure_TiM5x1_Func()
	: TiM5x1_Func_NAR("mStopMeasure" , "LMCstopmeas" ,57 , LEVEL_RUN)
{
}


mSetDateTime_TiM5x1_Func::mSetDateTime_TiM5x1_Func()
	: TiM5x1_Func_AR("mSetDateTime" , "LSPsetdatetime" ,63 , LEVEL_RUN)
{
}


Run_TiM5x1_Func::Run_TiM5x1_Func()
	: TiM5x1_Func_NAR("Run" , "Run" ,2 , LEVEL_RUN)
{
}


WriteEeprom_TiM5x1_Func::WriteEeprom_TiM5x1_Func()
	: TiM5x1_Func_NAR("WriteEeprom" , "mEEwriteall" ,7 , LEVEL_RUN)
{
}


RebootDevice_TiM5x1_Func::RebootDevice_TiM5x1_Func()
	: TiM5x1_Func_NANR("RebootDevice" , "mSCreboot" ,11 , LEVEL_RUN)
{
}


LoadFactoryDefaults_TiM5x1_Func::LoadFactoryDefaults_TiM5x1_Func()
	: TiM5x1_Func_NANR("LoadFactoryDefaults" , "mSCloadfacdef" ,12 , LEVEL_RUN)
{
}


LoadApplicationDefaults_TiM5x1_Func::LoadApplicationDefaults_TiM5x1_Func()
	: TiM5x1_Func_NANR("LoadApplicationDefaults" , "mSCloadappdef" ,13 , LEVEL_RUN)
{
}

} // namespace TiM5x1_V3_17_17_09_19_Skeleton
} // namespace ssbl
