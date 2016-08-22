#include <iostream>
#include "ptrDataClass.h"

using namespace std;


void testCopyConst(pointerDataClass temp);

int main()
{
  pointerDataClass listOne;

  int num;
  int index;

  cout << endl;

  cout << "Enter 5 integers: ";

  for (index = 0; index < 5; index++)
  {
    cin >> num;
    listOne.insertAt(index, num);
  }

  cout << endl;

  cout << "listOne: ";
  listOne.print();
  cout << endl << endl;

  pointerDataClass listTwo(listOne);

  cout << "listTwo: ";
  listTwo.print();
  cout << endl << endl;

  listTwo.insertAt(5, 34);
  listTwo.insertAt(2, -76);

  cout << "After modifying listTwo: " << endl;
  listTwo.print();
  cout << endl << endl;

  cout << "listOne: ";
  listOne.print();
  cout << endl << endl;


  cout << "Call to function testCopyConst: " << endl;

  testCopyConst(listOne);

  cout << "listOne: ";
  listOne.print();
  cout << endl << endl;

  cout << "listTwo: ";
  listTwo.print();
  cout << endl << endl;


  return 0;
}

void testCopyConst(pointerDataClass temp)
{
  cout << endl << "****Inside testCopyConst****" << endl << endl;

  cout << "Object temp data: ";
  temp.print();
  cout << endl << endl;

  temp.insertAt(3, -199);

  cout << "After changing temp: ";
  temp.print();
  cout << endl << endl;

  cout << endl << "***Exit testCopyConst***" << endl << endl << endl;
}
