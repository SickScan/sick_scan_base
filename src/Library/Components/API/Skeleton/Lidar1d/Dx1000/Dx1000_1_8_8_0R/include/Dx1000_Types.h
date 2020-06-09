//===========================================
//  Generated file - do not modify
//===========================================

#pragma once
#include <stdint.h>
#include "Base/Types/include/BasicTypes.h"

namespace ssbl
{
namespace Dx1000_1_8_8_0R_Skeleton
{
#pragma pack(push, 1)
typedef struct 
{
	 uint16_t uiLength;
	uint8_t Text[32];
} FlexString32;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint8_t	Success;
} WriteEeprom_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint8_t	success;
} enableMeasurementLaser_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint8_t	success;
} disableMeasurementLaser_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint8_t	success;
} enablePilotLaser_t;
#pragma pack(pop)

#pragma pack(push, 1)
typedef struct 
{
	uint8_t	success;
} disablePilotLaser_t;
#pragma pack(pop)


} // namespace Dx1000_1_8_8_0R_Skeleton
} // namespace ssbl

