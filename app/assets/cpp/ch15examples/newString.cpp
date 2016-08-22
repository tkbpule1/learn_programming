#include <iostream>
#include "newString.h"

using namespace std;

int main()
{
  newString str1 = "Sunny";
  const newString str2("Warmy");
  newString str3;
  newString str4;

  std::cout << "str1: " << str1 << std::endl;
  std::cout << "str2: " << str2 << std::endl;
  std::cout << "str3: " << str3 << std::endl;
  std::cout << "str4: " << str4 << std::endl;

  std::cout << std::endl;

  std::cout << "Compare str1 and str2" << std::endl;

  if (str1 == str2)
  {
    std::cout << "str1 and str2 are equal" << std::endl;
  }
  else
  {
    std::cout << "str1 and str2 are NOT equal" << std::endl;
  }

  if (str1 <= str2)
  {
    if (str1 < str2)
    {
      std::cout << "str1 is less than str2" << std::endl;
    }
  }

  if (str1 >= str2)
  {
    if (str1 > str2)
    {
      std::cout << "str1 is greater than str2" << std::endl;
    }
  }

  std::cout << std::endl;

  std::cout << "Enter a string that is at least 7 characters long: ";
  cin >> str1;

  std::cout << "The new value of str1: " << str1 << std::endl;
  std::cout << std::endl;

  str4 = str3 = "Birth Day";

  std::cout << "str3: " << str3 << std::endl;

  std::cout << "str4: " << str4 << std::endl;
  std::cout << std::endl;


  std::cout << "str3 = str1" << std::endl;

  str3 = str1;

  std::cout << "The new value of str3: " << str3 << std::endl;
  std::cout << std::endl;

  std::cout << "str3[1] = str1[5]" << std::endl;

  str3[1] = str1[5];

  std::cout << "The new value of str3: " << str3 << std::endl;
  std::cout << std::endl;

  std::cout << "str3[2] = str2[0]" << std::endl;

  str3[2] = str2[0];

  std::cout << "The new value of str3: " << str3 << std::endl;
  std::cout << std::endl;

  std::cout << "str3[5] = 'g'" << std::endl;

  str3[5] = 'g';

  std::cout << "The new value of str3: " << str3 << std::endl;
  std::cout << std::endl;


  return 0;
}
