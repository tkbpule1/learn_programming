#include <iostream>
#include <iomanip>
#include "rectangleType.h"

int main()
{
  rectangleType myRectangle1;
  rectangleType myRectangle2(8, 6);

  std::cout << std::fixed << std::showpoint << std::setprecision(2);

  std::cout << "myRectangle1: ";
  myRectangle1.print();
  std::cout << std::endl;

  myRectangle1.setDimension(2, 3);

  std::cout << "After myRectangle1.setDimension(): ";
  myRectangle1.print();
  std::cout << std::endl;

  std::cout << "Area of myRectangle1 = " << myRectangle1.area();
  std::cout << std::endl;


  std::cout << "myRectangle2: ";
  myRectangle2.print();
  std::cout << std::endl;

  std::cout << "Area of myRectangle2 = " << myRectangle2.area();
  std::cout << std::endl;


  return 0;
}
