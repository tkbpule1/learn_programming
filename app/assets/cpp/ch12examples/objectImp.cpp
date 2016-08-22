#include <iostream>
#include "object.h"

using namespace std;

void integer::getNum()
{
  int n;
  cout << "Enter an integer: ";
  cin >> n;
  cout << "Your integer is " << n << "!" << endl;
};
