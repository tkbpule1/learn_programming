#include <iostream>
#include "cylinder.h"

void cylinderType::setCylData(int a, int b, int r, int h)
{
  circle.setData(a, b, r);

  height = h;
}

double cylinderType::calcSurfArea()
{
  surfaceArea = circle.calcPerimeter() * height + 2 * circle.calcArea();
  return surfaceArea;
}

double cylinderType::calcVolume()
{
  volume = circle.calcArea() * height;
}

void cylinderType::printCyl() const
{
  circle.printC();
  std::cout << ", height: " << height;
  std::cout << std::endl;
  std::cout << "Surface Area: " << surfaceArea << std::endl;
  std::cout << "Volume: " << volume << std::endl;
}

cylinderType::cylinderType(int a, int b, int r, int h) : circle(a, b, r)
{
  height = h;
  surfaceArea = 0;
  volume = 0;
}
