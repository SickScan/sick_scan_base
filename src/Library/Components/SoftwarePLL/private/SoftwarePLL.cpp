/*
====================================================================================================
File: softwarePLL.cpp
====================================================================================================
*/
#include "SoftwarePLL/include/SoftwarePLL.h"
#include <math.h>
#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

std::map<std::string, SoftwarePLL*>
    SoftwarePLL::_instances;  // list of SoftwarePLL instances, mapped by id

const double SoftwarePLL::MaxAllowedTimeDeviation = 0.1;
const uint32_t SoftwarePLL::MaxExtrapolationCounter = 20;

/*!
\brief Creates an instance of SoftwarePLL or returns an existing one, given its
id.

\param id: identifier of the instance, f.e. "Sensor1", "TIM571".
\param fifo_length: length of fifo (buffer size, i.e. number of ticks in fifo).
Applied only for new instances of SoftwarePLL, existing instance will keep their
buffer size. \return instance of a SoftwarePLL
*/
SoftwarePLL& SoftwarePLL::instance(const std::string& id, int fifo_length) {
  SoftwarePLL* pll = _instances[id];
  if (!pll) {
    pll = new SoftwarePLL(fifo_length);
    _instances[id] = pll;
  }
  return *pll;
}

/*!
\brief Destructor of class SoftwarePLL
*/
SoftwarePLL::~SoftwarePLL() {
  // Remove this from the list of SoftwarePLL instances
  for (std::map<std::string, SoftwarePLL*>::iterator iter = _instances.begin();
       iter != _instances.end();) {
    if (iter->second == this)
      iter = _instances.erase(iter);
    else
      iter++;
  }
}

/*!
\brief Pushes measurement timestamp and sensor ticks to the fifo,
       updates tick fifo and clock (timestamp) fifo
\param curTimeStamp: measurement timestamp in seconds (receive time)
\param curtick: sensor ticks
\return always true
*/
bool SoftwarePLL::pushIntoFifo(double curTimeStamp, uint32_t curtick)
// update tick fifo and update clock (timestamp) fifo
{
  for (int i = 0; i < fifoSize - 1; i++) {
    tickFifo[i] = tickFifo[i + 1];
    clockFifo[i] = clockFifo[i + 1];
  }
  tickFifo[fifoSize - 1] =
      curtick;  // push most recent tick and timestamp into fifo
  clockFifo[fifoSize - 1] = curTimeStamp;

  if (numberValInFifo < fifoSize) {
    numberValInFifo++;  // remember the number of valid number in fifo
  }
  FirstTick(tickFifo[0]);
  FirstTimeStamp(clockFifo[0]);

  return (true);
}

/*!
\brief Extrapolates and returns the measurement timestamp in seconds
       relative to FirstTimeStamp.
       The timestamp of a measurement in seconds can be estimated from sensor
ticks by extraPolateRelativeTimeStamp(tick) + FirstTimeStamp(). \param tick:
sensor ticks \return measurement timestamp in seconds relative to FirstTimeStamp
*/
double SoftwarePLL::extraPolateRelativeTimeStamp(uint32_t tick) {
  int32_t tempTick = 0;
  tempTick = tick - (uint32_t)(0xFFFFFFFF & FirstTick());
  double timeDiff = tempTick * this->InterpolationSlope();
  return (timeDiff);
}

// int SoftwarePLL::findDiffInFifo(double diff, double tol)
// {
//     int numFnd = 0;
//     double minAllowedDiff = (1.0 - tol) * diff;
//     double maxAllowedDiff = (1.0 + tol) * diff;
//
//     for (int i = 0; i < numberValInFifo - 1; i++)
//     {
//         double diffTime = this->clockFifo[i+1] - clockFifo[i];
//         if ((diffTime >= minAllowedDiff) && (diffTime <= maxAllowedDiff))
//         {
//             numFnd++;
//         }
//     }
//
//     return(numFnd);
// }

/*!
\brief Updates PLL internale State should be called only with network send
timestamps

\param[in] sec: System Timetamp from received network packed
\param[in] nanoSec: System Timestamp from received network packed
\param[in] curtick sensor ticks
\return PLL is in valid state (true)
*/
bool SoftwarePLL::updatePLL(uint32_t sec, uint32_t nanoSec, uint32_t curtick) {
  if (curtick != this->lastcurtick) {
    this->lastcurtick = curtick;
    double start = sec + nanoSec * 1E-9;
    // bool bRet = true;

    if (false == IsInitialized()) {
      pushIntoFifo(start, curtick);
      bool bCheck = this->updateInterpolationSlope();
      if (bCheck) {
        IsInitialized(true);
      }
    }

    if (IsInitialized() == false) {
      return (false);
    }

    double relTimeStamp = extraPolateRelativeTimeStamp(curtick);
    double cmpTimeStamp = start - this->FirstTimeStamp();

    bool timeStampVerified = false;
    if (nearSameTimeStamp(relTimeStamp, cmpTimeStamp) ==
        true)  // if timestamp matches prediction update FIFO
    {
      timeStampVerified = true;
      pushIntoFifo(start, curtick);
      updateInterpolationSlope();
      ExtrapolationDivergenceCounter(0);
    }

    if (timeStampVerified == false) {
      // BEGIN HANDLING Extrapolation divergence
      uint32_t tmp = ExtrapolationDivergenceCounter();
      tmp++;
      ExtrapolationDivergenceCounter(tmp);
      if (ExtrapolationDivergenceCounter() >=
          SoftwarePLL::MaxExtrapolationCounter) {
        IsInitialized(false);  // reset FIFO - maybe happened due to abrupt
                               // change of time base
      }
      // END HANDLING Extrapolation divergence
    }
    return (true);
  } else {
    return (false);
    // this curtick has been updated allready
  }
}

/*!
\brief Computes the timestamp of a measurement from sensor ticks

\param[out] sec: Estimated system Timetamp (seconds)
\param[out] nanoSec: Estimated system Timetamp (nanoseconds)
\param[in] curtick sensor ticks
\return true if timestamp is computed, false otherwise (SoftwarePLL not
initialized)
*/
bool SoftwarePLL::getCorrectedTimeStamp(uint32_t& sec, uint32_t& nanoSec,
                                        uint32_t curtick) {
  if (IsInitialized() == false) {
    return (false);
  }

  double relTimeStamp = extraPolateRelativeTimeStamp(
      curtick);  // evtl. hier wg. Ueberlauf noch einmal pruefen
  double corrTime = relTimeStamp + this->FirstTimeStamp();
  sec = (uint32_t)corrTime;
  double frac = corrTime - sec;
  nanoSec = (uint32_t)(1E9 * frac);
  return (true);
}

bool SoftwarePLL::nearSameTimeStamp(double relTimeStamp1,
                                    double relTimeStamp2) {
  double dTAbs = fabs(relTimeStamp1 - relTimeStamp2);
  if (dTAbs < AllowedTimeDeviation()) {
    return (true);
  } else {
    return (false);
  }
}

bool SoftwarePLL::updateInterpolationSlope()  // fifo already updated
{
  if (numberValInFifo < fifoSize) {
    return (false);
  }
  std::vector<uint64_t> tickFifoUnwrap;
  std::vector<double> clockFifoUnwrap;
  clockFifoUnwrap.resize(fifoSize);
  tickFifoUnwrap.resize(fifoSize);
  uint64_t tickOffset = 0;
  clockFifoUnwrap[0] = 0.00;
  tickFifoUnwrap[0] = 0;
  FirstTimeStamp(this->clockFifo[0]);
  FirstTick(this->tickFifo[0]);

  uint64_t tickDivisor = 0x100000000;

  for (int i = 1; i < fifoSize;
       i++)  // typical 643 for 20ms -> round about 32150 --> near to 32768
             // standard clock in many watches
  {
    if (tickFifo[i] < tickFifo[i - 1])  // Overflow
    {
      tickOffset += tickDivisor;
    }
    tickFifoUnwrap[i] = tickOffset + tickFifo[i] - FirstTick();
    clockFifoUnwrap[i] = (this->clockFifo[i] - FirstTimeStamp());
  }

  double sum_xy = 0.0;
  double sum_x = 0.0;
  double sum_y = 0.0;
  double sum_xx = 0.0;
  for (int i = 0; i < fifoSize; i++) {
    sum_xy += tickFifoUnwrap[i] * clockFifoUnwrap[i];
    sum_x += tickFifoUnwrap[i];
    sum_y += clockFifoUnwrap[i];
    sum_xx += tickFifoUnwrap[i] * tickFifoUnwrap[i];
  }

  // calculate slope of regression line, interception is 0 by construction
  double m =
      (fifoSize * sum_xy - sum_x * sum_y) / (fifoSize * sum_xx - sum_x * sum_x);

  int matchCnt = 0;
  for (int i = 0; i < fifoSize; i++) {
    double yesti = m * tickFifoUnwrap[i];
    if (this->nearSameTimeStamp(yesti, clockFifoUnwrap[i])) {
      matchCnt++;
    }
  }

  bool retVal = false;
  if (matchCnt == fifoSize) {
    InterpolationSlope(m);
    retVal = true;
  }

  return (retVal);
}

/*
Example CMakeLists.txt to generate test-binary-file for testing this class
--- CUT ---
#
#
# softwarePLL
#
#
cmake_minimum_required(VERSION 2.8)
cmake_policy(SET CMP0015 NEW)
project( softwarePLL )
#
#
add_definitions(-D${PROJECT_NAME}_MAINTEST)

MESSAGE( STATUS "CMKAKE for " ${PROJECT_NAME} )

include_directories( inc)
file( GLOB LIB_SOURCES src/ *.cpp )

if(WIN32)
else()
set(CMAKE_CXX_STANDARD 11)
endif()

add_executable( ${PROJECT_NAME} ${LIB_SOURCES} inc/${PROJECT_NAME}.h)
target_link_libraries( ${PROJECT_NAME})
--- CUT ---

*/
