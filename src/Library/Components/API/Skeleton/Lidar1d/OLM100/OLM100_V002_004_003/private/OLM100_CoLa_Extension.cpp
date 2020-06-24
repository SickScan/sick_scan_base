//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/OLM100/OLM100_V002_004_003/include/OLM100_CoLa_Extension.h"


namespace ssbl
{
namespace OLM100_V002_004_003_Skeleton
{
	void OLM100_CoLaBSerializer::Serialize(uint8_t* pDest, StoreParameterPage_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.success , pOffset);
	}


} // namespace OLM100_V002_004_003_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace OLM100_V002_004_003_Skeleton
{
	void OLM100_CoLaBDeserializer::Deserialize(uint8_t* pSrc, StoreParameterPage_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}


} // namespace OLM100_V002_004_003_Skeleton
} // namespace ssbl

