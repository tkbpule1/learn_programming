#include <iostream>
#include <iomanip>
#include "circle.h"

using namespace std;

int main()
{
  circleType circle;

  circle.printC();
  cout << endl;

  circle.setData(5, 5, 10);

  circle.printC();
  cout << endl;

  cout << fixed << showpoint << setprecision(6);

  cout << "Area: " << circle.calcArea() << endl;

  cout << "Perimeter: " << circle.calcPerimeter() << endl;


  return 0;
}
