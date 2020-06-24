//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_004_003/include/OLM100_Factory.h"
#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_004_003/include/OLM100.h"
#include "Base/Core/Common/include/Hash.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl
{
namespace OLM100_V002_004_003_Skeleton
{

SensorSkeleton * CreateSensorSkeleton(const std::string &SensorSkeletonName, const std::string &IP)
{
	SensorSkeleton * pRet = NULL;
	uint64_t test = hash_64_fnv1a(SensorSkeletonName.c_str(), SensorSkeletonName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("OLM100"):
			pRet = new OLM100(IP);
			break;
		default:
			break;
	}
	return pRet;
}
} // namespace OLM100_V002_004_003_Skeleton
} // namespace ssbl
