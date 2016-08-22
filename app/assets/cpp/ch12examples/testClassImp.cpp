#include <iostream>
#include "testClass.h"


int testClass::sum()
{
  return (x + y);
}

void testClass::print() const
{
  std::cout << "x = " << x << ", y = " << y << std::endl;
}

testClass::testClass()
{
  x = 10;
  y = 10;
}

testClass::testClass(int a, int b)
{
  x = a;
  y = b;
}
