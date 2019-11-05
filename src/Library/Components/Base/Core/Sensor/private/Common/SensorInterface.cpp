#include "Base/Core/Sensor/include/Common/SensorInterface.h"

using namespace ssbl;

//=============================================================================
//=============================================================================
SensorInterface::SensorInterface() : pDesc_(nullptr) {
  ProvideCallbackEvent("OnReceive");
};
