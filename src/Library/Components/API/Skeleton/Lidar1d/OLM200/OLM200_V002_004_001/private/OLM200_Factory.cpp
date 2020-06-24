//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/OLM200/OLM200_V002_004_001/include/OLM200_Factory.h"
#include "API/Skeleton/Lidar1d/OLM200/OLM200_V002_004_001/include/OLM200.h"
#include "Base/Core/Common/include/Hash.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl
{
namespace OLM200_V002_004_001_Skeleton
{

SensorSkeleton * CreateSensorSkeleton(const std::string &SensorSkeletonName, const std::string &IP)
{
	SensorSkeleton * pRet = NULL;
	uint64_t test = hash_64_fnv1a(SensorSkeletonName.c_str(), SensorSkeletonName.size());
	switch (test)
	{
		case hash_64_fnv1a_const("OLM200"):
			pRet = new OLM200(IP);
			break;
		default:
			break;
	}
	return pRet;
}
} // namespace OLM200_V002_004_001_Skeleton
} // namespace ssbl
