#include <iostream>
#include <iomanip>
#include "boxType.h"
#include "rectangleType.h"

int main()
{
  boxType myBox1;
  boxType myBox2(10, 7, 3);


  std::cout << "myBox1: ";
  myBox1.print();
  std::cout << std::endl;
  myBox1.setDimension(5, 5, 5);

  std::cout << "After setDimension(), myBox1: ";
  myBox1.print();
  std::cout << std::endl;

  std::cout << "Surface Area of myBox1: " << myBox1.area();
  std::cout << std::endl;

  std::cout << "Volume of myBox1: " << myBox1.volume();
  std::cout << std::endl;


  std::cout << "myBox2: ";
  myBox2.print();
  std::cout << std::endl;

  std::cout << "Surface Area of myBox2: " << myBox2.area();
  std::cout << std::endl;

  std::cout << "Volume of myBox2: " << myBox2.volume();
  std::cout << std::endl;

  return 0;
}
