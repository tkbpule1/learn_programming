#include <iostream>
#include "newString.h"
#include "template.h"

using namespace std;

int main()
{
  listType<int> intList(100);
  listType<newString> stringList;
  int index;
  int number;

  std::cout << "Processing intList" << std::endl << std::endl;

  std::cout << "Enter 5 integers: ";
  for (index = 0; index < 5; index++)
  {
    cin >> number;
    intList.insertAt(number, index);
  }

  std::cout << std::endl;

  std::cout << "intList: ";
  intList.print();
  std::cout << std::endl;

  std::cout << "Afer sorting intList: ";
  intList.sort();
  intList.print();
  std::cout << std::endl;

  newString str;

  std::cout << "Processing stringList" << std::endl;

  std::cout << "Enter 5 strings: ";
  for (index = 0; index < 5; index++)
  {
    cin >> str;
    stringList.insertAt(str, index);
  }

  std::cout << std::endl;

  std::cout << "stringList: ";
  stringList.print();
  std::cout << std::endl;

  // Sort stringList;
  stringList.sort();

  std::cout << "After sorting stringList: ";
  stringList.print();
  std::cout << std::endl;
  std::cout << std::endl;

  int intListSize;

  std::cout << "Enter the size of the integer list: ";
  cin >> intListSize;
  std::cout << std::endl;

  listType<int> intList2(intListSize);

  std::cout << "Processing the integer list" << std::endl;

  std::cout << "Enter " << intListSize << " integers: ";
  for (index = 0; index < intListSize; index++)
  {
    cin >> number;
    intList2.insertAt(number, index);
  }

  std::cout << std::endl;

  std::cout << "intList2: ";
  intList2.print();
  std::cout << std::endl;

  // Sort intList2;
  intList2.sort();

  std::cout << "After sorting intList2: ";
  intList2.print();
  std::cout << std::endl;

  std::cout << "Length of intList2: "
            << intList2.getLength() << std::endl;
  std::cout << "Maximum size of intList2: "
            << intList2.getMaxSize() << std::endl;



  return 0;
}
