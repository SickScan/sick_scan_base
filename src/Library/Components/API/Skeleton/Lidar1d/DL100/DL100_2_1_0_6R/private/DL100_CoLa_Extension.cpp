//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/DL100/DL100_2_1_0_6R/include/DL100_CoLa_Extension.h"


namespace ssbl
{
namespace DL100_2_1_0_6R_Skeleton
{
	void DL100_CoLaBSerializer::Serialize(uint8_t* pDest, storeParameterPage_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.success , pOffset);
	}


} // namespace DL100_2_1_0_6R_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace DL100_2_1_0_6R_Skeleton
{
	void DL100_CoLaBDeserializer::Deserialize(uint8_t* pSrc, storeParameterPage_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}


} // namespace DL100_2_1_0_6R_Skeleton
} // namespace ssbl
