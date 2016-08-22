/*  Write a program that determines if a number is a palindrome.
    Use a function called isNumPalindrome
*/

#include <iostream>
#include <cmath>

bool isNumPalindrome (int);

int main()
{
  int num;

  std::cout << "Enter a number: ";
  std::cin >> num;

  // isNumPalindrome(num);
  if (isNumPalindrome(num) == true)
  {
    std::cout << "Num is a palindrome." << std::endl;
  }
  else
  {
    std::cout << "Num is not a palindrome." << std::endl;
  }
} // end main

bool isNumPalindrome (int x)
{
  int pwr = 0;
  int num;

  if (x < 10)
  {
    return true;
  }
  else
  {
    while (x / static_cast<int>(pow(10, pwr)) >= 10)
    {
      pwr++;
    }

    while (x >= 10)
    {
      int tenToPwr = static_cast<int>(pow(10, pwr));

      if (x / tenToPwr != x % 10)
      {
        return false;
      }
      else
      {
        return true;
      }
    }
  }
}
