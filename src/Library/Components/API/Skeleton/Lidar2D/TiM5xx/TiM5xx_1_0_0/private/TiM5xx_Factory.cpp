//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2D/TiM5xx/TiM5xx_1_0_0/include/TiM5xx_Factory.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM5xx_1_0_0/include/TiM5xx.h"
#include "Base/Core/Common/include/Hash.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl
{
namespace TiM5xx_1_0_0_Skeleton
{

SensorSkeleton * CreateSensorSkeleton(const std::string &SensorSkeletonName, const std::string &IP)
{
	SensorSkeleton * pRet = NULL;
	uint64_t test = hash_64_fnv1a(SensorSkeletonName.c_str(), SensorSkeletonName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("TiM561"):
			pRet = new TiM5xx(IP);
			break;
		case hash_64_fnv1a_const("TiM571"):
			pRet = new TiM5xx(IP);
			break;
		case hash_64_fnv1a_const("TiM581"):
			pRet = new TiM5xx(IP);
			break;
		default:
			break;
	}
	return pRet;
}
} // namespace TiM5xx_1_0_0_Skeleton
} // namespace ssbl
