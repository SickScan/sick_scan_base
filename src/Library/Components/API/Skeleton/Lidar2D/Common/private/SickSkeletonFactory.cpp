//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/include/SickSkeletonFactory.h"
#include "API/Skeleton/include/TiM5xxSkeleton/TiM5xxSkeleton.h"
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
    case hash_64_fnv1a_const("TiM5xxSkeleton"):
      pRet = new DevTiM5xxSkeleton::TiM5xxSkeleton(IP);
      break;
    default:
      break;
  }
  return pRet;
}
}  // namespace ssbl
