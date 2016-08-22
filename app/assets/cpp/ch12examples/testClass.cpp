#include <iostream>
#include "testClass.h"


int main()
{
  int summation;
  testClass test1(2, 4);

  test1.print();

  summation = test1.sum();
  std::cout << summation << std::endl;

  test1.print();

  testClass test2;

  test2.print();

  summation = test2.sum();
  std::cout << summation << std::endl;

  test2.print();

  return 0;
}
