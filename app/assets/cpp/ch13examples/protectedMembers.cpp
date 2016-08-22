#include <iostream>
#include "protectedMembers.h"

using namespace std;

int main()
{
  baseClass baseObject;
  derivedClass derivedObject;

  baseObject.print();
  cout << endl;

  cout << "*** Derived Class Object ***" << endl;

  derivedObject.setData('&', 2.5, 7);

  derivedObject.print();

  return 0;
}
