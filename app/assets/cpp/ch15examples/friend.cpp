#include <iostream>
#include "friend.h"

using namespace std;

int main()
{
  classIllusFriend aObject;

  aObject.setX(32);

  cout << "aObject.x: ";
  aObject.print();
  cout << endl;

  cout << "*_*_*_*_*_*Testing Friend Function*_*_*_*_*_*" << endl;

  two(aObject);

  cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;

  cout << aObject.x << endl;

  return 0;
}
