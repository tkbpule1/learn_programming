// Definitions of class boxType:

#include <iostream>
#include "boxType.h"
#include "rectangleType.h"

// Do not have direct access to private member variables of base class
// Use base class name + :: + the public member function that returns the
//                            private member variables that need to be accessed

void boxType::setDimension(double l, double w, double h)
{
  // baseClassName::publicMemberFunction(var1, var2);
  rectangleType::setDimension(l, w);

  if (h >= 0)
  {
    height = h;
  }

  else
  {
    height = 0;
  }
}


double boxType::getHeight() const
{
  return height;
}


double boxType::area() const
{
  return (2 * (getLength() * getWidth()
             + getLength() * height
             + getWidth() * height));
}


double boxType::volume() const
{
  return rectangleType::area() * height;
}


void boxType::print() const
{
  rectangleType::print();

  std::cout << "; Height = " << height;
}


// If a class contains the default constructor and no values are specified
//    when the object is declared, the default constructor executes and
//    initializes the object.
// Thus, when writing the default constructor of a derived class, we do not
//    specify any constructor of the base class;

boxType::boxType()
{
  height = 0;
}


boxType::boxType(double l, double w, double h) : rectangleType(l, w)
{
  if (h >= 0)
  {
    height = h;
  }
  else
  {
    height = 0;
  }
}
