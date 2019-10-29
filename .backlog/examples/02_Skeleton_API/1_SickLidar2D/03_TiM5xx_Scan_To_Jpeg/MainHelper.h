#ifndef MAINHELPER_H
#define MAINHELPER_H

#include <math.h>
#include <cstdlib>
#include <iostream>
#include <vector>
class Point {
 private:
  double x_, y_, z_, intensity_;  // coordinates of the point

 public:
  Point() {
    X(0.0);
    Y(0.0);
    Z(0.0);
    Intensity(0.0);
  }
  Point(double x, double y) {
    Point();
    X(x);
    Y(y);
  }
  double X() { return x_; }
  double Y() { return y_; }
  double Z() { return z_; }
  double Intensity() { return intensity_; }
  void X(double x) { x_ = x; }
  void Y(double y) { y_ = y; }
  void Z(double z) { z_ = z; }
  void Intensity(double intensity) { intensity_ = intensity; }
  static void testbed() {
    Point p;
    p.X(10.0);
    p.Y(20.0);
    p.Z(30.0);
    p.Intensity(40.0);
    printf("Test: %8.3lf,%8.3lf,%8.3lf\n", p.X(), p.Y(), p.Z());
  }
};

class DataExporter {
 public:
  DataExporter() {}
  bool writeJpeg(std::vector<Point> *pointVec);
  bool writeCSV(std::vector<Point> *pointVec);
};
#endif
