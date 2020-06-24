//===========================================
//  Generated file - do not modify
//===========================================

#include "API/Skeleton/Lidar1d/OLM200/OLM200_V002_003_000/include/OLM200_CoLa_Extension.h"


namespace ssbl
{
namespace OLM200_V002_003_000_Skeleton
{
	void OLM200_CoLaBSerializer::Serialize(uint8_t* pDest, StoreParameterPage_t& rSrc, uint32_t* pOffset)
	{

		CoLaBSerializer::Serialize(pDest, rSrc.success , pOffset);
	}


} // namespace OLM200_V002_003_000_Skeleton
} // namespace ssbl


namespace ssbl
{
namespace OLM200_V002_003_000_Skeleton
{
	void OLM200_CoLaBDeserializer::Deserialize(uint8_t* pSrc, StoreParameterPage_t& rDest, uint32_t* pOffset)
	{

		CoLaBDeserializer::Deserialize(pSrc, rDest.success , pOffset);
	}


} // namespace OLM200_V002_003_000_Skeleton
} // namespace ssbl

