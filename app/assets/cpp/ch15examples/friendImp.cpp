#include <iostream>
#include "friend.h"

using namespace std;

void classIllusFriend::print() const
{
  cout << "In class classIllusFriend: x = " << x << endl;
}

void classIllusFriend::setX(int a)
{
  x = a;
}

void two(classIllusFriend cIFObject)
{
  cout << "Friend functions have direct access to private member variables.";
  cout << endl << " Thus, localTwoObject.x is a valid statement." << endl;
  classIllusFriend localTwoObject;

  localTwoObject.x = 45;

  localTwoObject.print();

  cout << "In Friend Function two accessing private member variable x = "
       << localTwoObject.x << endl;

  cIFObject.x = 88;

  cIFObject.print();

  cout << "In Friend Function two accessing private member variable x = "
       << cIFObject.x << endl;

}
