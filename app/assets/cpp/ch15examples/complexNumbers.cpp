#include <iostream>
#include "complexNumbers.h"

using namespace std;

int main()
{
  complexType num1(23, 34);
  complexType num2;
  complexType num3;

  cout << endl << endl;

  cout << "num1: " << num1 << endl;
  cout << "num2: " << num2 << endl;
  cout << "num3: " << num3 << endl;

  cout << "Enter the complex number in the form (a, b): ";
  cin >> num2;
  cout << endl;

  cout << "New value of num2: " << num2 << endl;

  cout << "num3 = num1 + num2" << endl;

  num3 = num1 + num2;

  cout << "num3: " << num3 << endl;

  cout << num1 << " + " << num2 << " = ";
  cout << num1 + num2;

  cout << endl;

  cout << num1 << " * " << num2 << " = ";
  cout << num1 * num2;

  cout << endl;


  return 0;
}
