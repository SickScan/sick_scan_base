//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/DL100/DL100_V001_002_008/include/DL100_CoLa_Extension.h"


namespace ssbl
{
namespace DL100_V001_002_008_Skeleton
{
	void DL100_CoLaBSerializer::Serialize(uint8_t* pDest, storeParameterPage_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.success , pOffset);
	}


} // namespace DL100_V001_002_008_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace DL100_V001_002_008_Skeleton
{
	void DL100_CoLaBDeserializer::Deserialize(uint8_t* pSrc, storeParameterPage_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}


} // namespace DL100_V001_002_008_Skeleton
} // namespace ssbl

