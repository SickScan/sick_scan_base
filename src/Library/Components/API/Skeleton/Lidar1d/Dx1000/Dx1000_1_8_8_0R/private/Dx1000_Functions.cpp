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
	: Dx1000_Func_NAR("WriteEeprom" , "mEEwriteall" ,18 , LEVEL_AUTHORIZED_CLIENT)
{
}


RebootDevice_Dx1000_Func::RebootDevice_Dx1000_Func()
	: Dx1000_Func_NANR("RebootDevice" , "mSCreboot" ,22 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadFactoryDefaults_Dx1000_Func::LoadFactoryDefaults_Dx1000_Func()
	: Dx1000_Func_NANR("LoadFactoryDefaults" , "mSCloadfacdef" ,23 , LEVEL_AUTHORIZED_CLIENT)
{
}


LoadApplicationDefaults_Dx1000_Func::LoadApplicationDefaults_Dx1000_Func()
	: Dx1000_Func_NANR("LoadApplicationDefaults" , "mSCloadappdef" ,24 , LEVEL_AUTHORIZED_CLIENT)
{
}


enableMeasurementLaser_Dx1000_Func::enableMeasurementLaser_Dx1000_Func()
	: Dx1000_Func_NAR("enableMeasurementLaser" , "enableMeasurementLaser" ,55 , LEVEL_AUTHORIZED_CLIENT)
{
}


disableMeasurementLaser_Dx1000_Func::disableMeasurementLaser_Dx1000_Func()
	: Dx1000_Func_NAR("disableMeasurementLaser" , "disableMeasurementLaser" ,56 , LEVEL_AUTHORIZED_CLIENT)
{
}


enablePilotLaser_Dx1000_Func::enablePilotLaser_Dx1000_Func()
	: Dx1000_Func_NAR("enablePilotLaser" , "enablePilotLaser" ,53 , LEVEL_AUTHORIZED_CLIENT)
{
}


disablePilotLaser_Dx1000_Func::disablePilotLaser_Dx1000_Func()
	: Dx1000_Func_NAR("disablePilotLaser" , "disablePilotLaser" ,54 , LEVEL_AUTHORIZED_CLIENT)
{
}

} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl
