#include <iostream>
#include "pointer.h"

using namespace std;

int main()
{
  {
  arrayClass intList1(10);
  arrayClass intList2;
  arrayClass intList3;

  int i;
  int number;

  cout << "Enter 5 integers: ";
  for (i = 0; i < 5; i++)
  {
    cin >> number;
    intList1.insert(number);
  }

  cout << endl;

  cout << "intList1: " << endl;
  intList1.print();

  intList3 = intList2 = intList1;

  cout << "intList2: " << endl;
  intList2.print();

  cout << "intList3: " << endl;
  intList3.print();

  cout << endl;


  cout << endl;

  cout << "****After deleting intList2****" << endl;

  intList2.destroyList();
  cout << endl;

  cout << "intList1: " << endl;
  intList1.print();

  cout << "intList2: " << endl;
  intList2.print();

  cout << "intList3: " << endl;
  intList3.print();
  }

  
  return 0;
}
