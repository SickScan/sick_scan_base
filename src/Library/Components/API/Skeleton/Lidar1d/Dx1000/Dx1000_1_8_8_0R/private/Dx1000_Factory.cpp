//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000_Factory.h"
#include "API/Skeleton/Lidar1d/Dx1000/Dx1000_1_8_8_0R/include/Dx1000.h"
#include "Base/Core/Common/include/Hash.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{

SensorSkeleton * CreateSensorSkeleton(const std::string &SensorSkeletonName, const std::string &IP)
{
	SensorSkeleton * pRet = NULL;
	uint64_t test = hash_64_fnv1a(SensorSkeletonName.c_str(), SensorSkeletonName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("DL1000"):
			pRet = new Dx1000(IP);
			break;
		case hash_64_fnv1a_const("DT1000"):
			pRet = new Dx1000(IP);
			break;
		default:
			break;
	}
	return pRet;
}
} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl
