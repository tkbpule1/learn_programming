// Definitions of  class rectangleType

#include <iostream>
#include "rectangleType.h"

void rectangleType::setDimension(double l, double w)
{
  if (l >= 0)
  {
    length = l;
  }
  else
  {
    length = 0;
  }

  if (w >= 0)
  {
    width = w;
  }
  else
  {
    width = 0;
  }
}

double rectangleType::getLength() const
{
  return length;
}

double rectangleType::getWidth() const
{
  return width;
}

double rectangleType::area() const
{
  return length * width;
}

double rectangleType::perimeter() const
{
  return (2 * (length + width));
}

void rectangleType::print() const
{
  std::cout << "Length = " << length << "; Width = " << width;
}

rectangleType::rectangleType(double l, double w)
{
  setDimension(l, w);
}

rectangleType::rectangleType()
{
  length = 0;
  width = 0;
}
