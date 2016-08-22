#include <iostream>
#include "point.h"


int main()
{
  pointType point;

  std::cout << std::endl;

  point.print();
  std::cout << std::endl;

  point.setCoordinates(2, 3);

  point.print();
  std::cout << std::endl;

  std::cout << point.returnXCoordinate() << " " << point.returnYCoordinate();
  std::cout << std::endl;

  std::cout << std::endl;

  return 0;
}
