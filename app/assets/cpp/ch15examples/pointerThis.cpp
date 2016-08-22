#include <iostream>
#include "pointerThis.h"

using namespace std;

int main()
{
  pointer object1(1, 3, 5);
  pointer object2;
  pointer object3;

  object2 = object1.updateXYZ();

  object1.print();
  cout << endl;

  object2.print();
  cout << endl;

  object2.setX(9).setY(11).setZ(13);

  object3 = object2;
  object3.print();
  cout << endl;

  return 0;
}
