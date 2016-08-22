#include <iostream>
#include "pointerThis.h"

pointer& pointer::setX(int a)
{
  x = a;
  return *this;
}

pointer& pointer::setY(int b)
{
  y = b;
  return *this;
}

pointer& pointer::setZ(int c)
{
  z = c;
  return *this;
}

pointer pointer::updateXYZ()
{
  x = 2 * x;
  y = 2 + y;
  z = z * z;

  return *this;
}

void pointer::print() const
{
  std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
}


pointer::pointer(int a, int b, int c)
{
  x = a;
  y = b;
  z = c;
}
