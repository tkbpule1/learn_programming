#ifndef h_cylinder
#define h_cylinder

#include "circle.h"

class cylinderType
{
public:
  void setCylData(int a, int b, int r, int h);
  double calcSurfArea();
  // Function to calculate and return surface area of the cylinder;
  double calcVolume();
  // Function to calculate and return the volume of the cylinder;
  void printCyl() const;

  cylinderType(int a = 0, int b = 0, int r = 0, int h = 0);
  // Constructor with default parameters;

private:
  int height;
  double surfaceArea;
  double volume;

  circleType circle;

};

#endif
