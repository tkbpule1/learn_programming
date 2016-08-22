#include <iostream>

using namespace std;

enum triangleType {scalene, isosceles, equilateral, noTriangle};

triangleType triangleShape(int a, int b, int c);

int main()
{
  int a, b, c;
  triangleType type;

  cout << "Enter the sides of a triangle: ";
  cin >> a >> b >> c;

  type = triangleShape(a, b, c);

  switch(type)
  {
    case noTriangle:
      cout << "This is not a triangle" << endl;
      break;
    case equilateral:
      cout << "This is an equilateral triangle" << endl;
      break;
    case isosceles:
      cout << "This is an isosceles triangle" << endl;
      break;
    case scalene:
      cout << "This is a scalene triangle" << endl;
      break;
  }

  return 0;
}


triangleType triangleShape(int sideA, int sideB, int sideC)
{
  triangleType type;
  if (sideA + sideB < sideC || sideA + sideC < sideB || sideB + sideC < sideA)
  {
    type = noTriangle;
  }
  else if (sideA == sideB && sideA == sideC)
  {
    type = equilateral;
  }
  else if (sideA == sideB && sideA != sideC)
  {
    type = isosceles;
  }
  else
  {
    type = scalene;
  }
  return type;
}
