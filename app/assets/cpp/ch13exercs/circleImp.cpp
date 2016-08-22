#include <iostream>
#include "circle.h"

void circleType::setData(int a, int b, int r)
{
  point.setCoordinates(a, b);
  radius = r;
}

double circleType::calcArea()
{
  area = PI * radius * radius;
  return area;
}

double circleType::calcPerimeter()
{
  perimeter = 2 * PI * radius;
  return perimeter;
}

void circleType::printC() const
{
  point.print();
  std:: cout << ", radius: " << radius;
}

circleType::circleType(int a, int b, int r) : point(a, b)
{
  radius = r;
  PI = 3.1415926;
}
