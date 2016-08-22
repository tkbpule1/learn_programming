#ifndef h_circle
#define h_circle

#include "point.h"

class circleType
{
public:
  void setData(int a, int b, int r);
  // Function to set x and y coordinates and the radius of a circle;
  // Postcondition: x = a; y =b; radius = r;

  double calcArea();
  // Function to calculate and return the area of a circle;
  // Postcondition: area = PI * r^2;

  double calcPerimeter();
  // Function to calculate and return the perimeter of a circle;
  // Postcondition: perimeter = 2* PI * r;

  void printC() const;
  // Function to print x and y coordinates and the radius of a circle;

  circleType(int a = 0, int b = 0, int r = 0);
  // Constructor with default parameters;

private:
  int radius;
  double area;
  double perimeter;
  double PI;
  pointType point;
};


#endif
