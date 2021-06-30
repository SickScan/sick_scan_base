//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "Base/Types/include/BasicTypes.h"

namespace ssbl
{
namespace DL100_V001_004_000_Skeleton
{
#pragma pack(push, 1)
typedef struct 
{
	uint8_t	success;
} storeParameterPage_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	 uint16_t uiLength;
	uint8_t Text[506];
} FlexString506;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint32_t	frameCnt;
	FlexString506	buffer;
} getDebugData_t;
#pragma pack(pop)


} // namespace DL100_V001_004_000_Skeleton
} // namespace ssbl

