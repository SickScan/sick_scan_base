//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/DL100/DL100_V001_003_009/include/DL100_Factory.h"
#include "API/Skeleton/Lidar1d/DL100/DL100_V001_003_009/include/DL100.h"
#include "Base/Core/Common/include/Hash.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl
{
namespace DL100_V001_003_009_Skeleton
{

SensorSkeleton * CreateSensorSkeleton(const std::string &SensorSkeletonName, const std::string &IP)
{
	SensorSkeleton * pRet = NULL;
	uint64_t test = hash_64_fnv1a(SensorSkeletonName.c_str(), SensorSkeletonName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("DL100"):
			pRet = new DL100(IP);
			break;
		default:
			break;
	}
	return pRet;
}
} // namespace DL100_V001_003_009_Skeleton
} // namespace ssbl
