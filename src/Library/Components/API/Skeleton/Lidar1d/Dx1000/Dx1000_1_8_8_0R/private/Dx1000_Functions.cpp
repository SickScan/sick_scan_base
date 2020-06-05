//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_Functions.h"
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_Variables.h"

namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{

WriteEeprom_Dx1000_Func::WriteEeprom_Dx1000_Func()
	: Dx1000_Func_NAR("WriteEeprom" , "mEEwriteall" ,18 , LEVEL_RUN)
{
}


RebootDevice_Dx1000_Func::RebootDevice_Dx1000_Func()
	: Dx1000_Func_NANR("RebootDevice" , "mSCreboot" ,22 , LEVEL_RUN)
{
}


LoadFactoryDefaults_Dx1000_Func::LoadFactoryDefaults_Dx1000_Func()
	: Dx1000_Func_NANR("LoadFactoryDefaults" , "mSCloadfacdef" ,23 , LEVEL_RUN)
{
}


LoadApplicationDefaults_Dx1000_Func::LoadApplicationDefaults_Dx1000_Func()
	: Dx1000_Func_NANR("LoadApplicationDefaults" , "mSCloadappdef" ,24 , LEVEL_RUN)
{
}

} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl
