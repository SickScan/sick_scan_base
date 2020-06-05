//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2d/TiM5x1/TiM5x1_V3_17_17_09_19/include/TiM5x1_Factory.h"
#include "API/Skeleton/Lidar2d/TiM5x1/TiM5x1_V3_17_17_09_19/include/TiM5x1.h"
#include "Base/Core/Common/include/Hash.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl
{
namespace TiM5x1_V3_17_17_09_19_Skeleton
{

SensorSkeleton * CreateSensorSkeleton(const std::string &SensorSkeletonName, const std::string &IP)
{
	SensorSkeleton * pRet = NULL;
	uint64_t test = hash_64_fnv1a(SensorSkeletonName.c_str(), SensorSkeletonName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("TiM561"):
			pRet = new TiM5x1(IP);
			break;
		case hash_64_fnv1a_const("TiM571"):
			pRet = new TiM5x1(IP);
			break;
		case hash_64_fnv1a_const("TiM581"):
			pRet = new TiM5x1(IP);
			break;
		default:
			break;
	}
	return pRet;
}
} // namespace TiM5x1_V3_17_17_09_19_Skeleton
} // namespace ssbl
