#pragma once

class SickSensor;

class SickScanner {
 public:
  SickScanner(){};
  ~SickScanner(){};

 private:
  SickSensor* pSensor_;
};

class TiM571 : public SickScanner {
 public:
  TiM571(){};
  ~TiM571(){};

 private:
  SickSensor* pSensor_;
};