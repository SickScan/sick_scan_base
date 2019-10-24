#ifndef SOFTWARE_PLL_H
#define SOFTWARE_PLL_H

#ifdef _MSC_VER
#pragma warning(disable : 4996)
#endif

#include <map>
#include <string>
#include <iostream>
#include <fstream>      // std::ifstream
#include <cstring>
#include <sstream>      // std::stringstream
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <stdint.h>
// #include <boost/cstdint.hpp>
// #include <chrono>

/*!
\brief class SoftwarePLL implements synchronisation between ticks and timestamp.
       See https://github.com/michael1309/SoftwarePLL/blob/master/README.md for details.
*/
class SoftwarePLL
{
public:
	static SoftwarePLL& instance(const std::string & id = "", int fifo_length = 7);
	~SoftwarePLL();
  bool getCorrectedTimeStamp(uint32_t& sec, uint32_t& nanoSec, uint32_t tick);
  bool updatePLL(uint32_t sec, uint32_t nanoSec, uint32_t curtick);
	
protected:
  /*! \brief Returns the initialization status, i.e. true, if SoftwarePLL is initialized, or false otherwise (inconsistent or not enough samples in the fifo buffer) */
	bool IsInitialized() const { return isInitialized; }
  /*! \brief Sets the initialization status, i.e. true, if SoftwarePLL is initialized, or false otherwise (inconsistent or not enough samples in the fifo buffer) */
	void IsInitialized(bool val) { isInitialized = val; }
  /*! \brief Returns the first sensor tick in the fifo buffer */
	uint64_t FirstTick() const { return firstTick; }
  /*! \brief Sets the first sensor tick in the fifo buffer */
	void FirstTick(uint64_t val) { firstTick = val; }
  /*! \brief Returns the first timestamp in the fifo buffer in seconds */
	double FirstTimeStamp() const { return firstTimeStamp; }
  /*! \brief Sets the first timestamp in the fifo buffer in seconds */
	void FirstTimeStamp(double val) { firstTimeStamp = val; }
  /*! \brief Returns the interpolated slope (gradient of the regression line) */
	double InterpolationSlope() const { return interpolationSlope; }
  /*! \brief Sets the interpolated slope (gradient of the regression line) */
	void InterpolationSlope(double val) { interpolationSlope = val; }
  /*! \brief Returns the max. allowed time difference between estimated and measured timestamp time in seconds */
	double AllowedTimeDeviation() const { return allowedTimeDeviation; }
  /*! \brief Set the max. allowed time difference between estimated and measured receive timestamp in seconds */
	void AllowedTimeDeviation(double val) { allowedTimeDeviation = val; }
  /*! \brief Returns the counter of extrapolated divergences (number of times the estimated and measured receive timestamp differed more than AllowedTimeDeviation */
	uint32_t ExtrapolationDivergenceCounter() const { return extrapolationDivergenceCounter; }
  /*! \brief Sets the counter of extrapolated divergences (number of times the estimated and measured receive timestamp differed more than AllowedTimeDeviation */
	void ExtrapolationDivergenceCounter(uint32_t val) { extrapolationDivergenceCounter = val; }
  bool pushIntoFifo(double curTimeStamp, uint32_t curtick);// update tick fifo and update clock (timestamp) fifo;
  double extraPolateRelativeTimeStamp(uint32_t tick);
	// int findDiffInFifo(double diff, double tol);

private:
	int numberValInFifo;
	const int fifoSize;
	static const double MaxAllowedTimeDeviation;
	static const uint32_t MaxExtrapolationCounter;
	std::vector<uint32_t> tickFifo; //  = { 0 };
	std::vector<double> clockFifo;
	// double lastValidTimeStamp;
	// uint32_t lastValidTick; // = 0;
	bool isInitialized; // = false;
	// double dTAvgFeedback; // = 0.0;
	// double dClockDiffFeedBack; //  = 0.0;
	double firstTimeStamp;
	double allowedTimeDeviation;
	uint64_t firstTick;
	uint32_t lastcurtick =0;
	// uint32_t mostRecentSec;
	// uint32_t mostRecentNanoSec;
  // double mostRecentTimeStamp;
	double interpolationSlope;
	bool nearSameTimeStamp(double relTimeStamp1, double relTimeStamp2);
	bool updateInterpolationSlope();
	uint32_t extrapolationDivergenceCounter;
	SoftwarePLL(int fifo_length = 7) : fifoSize(fifo_length), tickFifo(fifo_length,0), clockFifo(fifo_length,0)
	{
		AllowedTimeDeviation(SoftwarePLL::MaxAllowedTimeDeviation); // 1 ms
		numberValInFifo = 0;
	}
	// verhindert, dass ein Objekt von ausserhalb von N erzeugt wird.
	// protected, wenn man von der Klasse noch erben moechte
	SoftwarePLL(const SoftwarePLL&); /* verhindert, dass eine weitere Instanz via
								   Kopier-Konstruktor erstellt werden kann */
	SoftwarePLL & operator = (const SoftwarePLL &); //Verhindert weitere Instanz durch Kopie
	
	static std::map<std::string,SoftwarePLL*> _instances; // list of SoftwarePLL instances, mapped by id
};


#endif