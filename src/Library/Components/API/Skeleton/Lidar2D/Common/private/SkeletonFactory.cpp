//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar2D/Common/include/SkeletonFactory.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM561/include/TiM561Skeleton.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM571/include/TiM571Skeleton.h"
#include "API/Skeleton/Lidar2D/TiM5xx/TiM581/include/TiM581Skeleton.h"
#include "Base/Core/Common/include/Hash.h"

#ifdef _MSC_VER
#pragma warning(disable : 4307)
#endif

namespace ssbl {

SickSensorSkeleton *CreateSensorSkeleton(const std::string &SensorSkeletonName,
                                         const std::string &IP) {
  SickSensorSkeleton *pRet = NULL;
  uint64_t test =
      hash_64_fnv1a(SensorSkeletonName.c_str(), SensorSkeletonName.size());
  switch (test) {
    case hash_64_fnv1a_const("DevTiM561Skeleton"):
      pRet = new DevTiM561Skeleton::TiM561Skeleton(IP);
      break;
    case hash_64_fnv1a_const("DevTiM571Skeleton"):
      pRet = new DevTiM571Skeleton::TiM571Skeleton(IP);
      break;
    case hash_64_fnv1a_const("DevTiM581Skeleton"):
      pRet = new DevTiM581Skeleton::TiM581Skeleton(IP);
      break;
    default:
      break;
  }
  return pRet;
}
}  // namespace ssbl
