#include <iostream>
#include "point.h"

void pointType::setCoordinates(int a, int b)
{
  x = a;
  y = b;
}

int pointType::returnXCoordinate() const
{
  return x;
}

int pointType::returnYCoordinate() const
{
  return y;
}

void pointType::print() const
{
  std::cout << "x: " << x << ", y: " << y;
}

pointType::pointType(int a, int b)
{
  x = a;
  y = b;
}
