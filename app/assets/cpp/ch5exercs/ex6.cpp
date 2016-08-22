/*
  Write a program that prompts the user to enter an integer.
  Then outputs the sum of the even and odd numbers.
*/

#include <iostream>

using namespace std;

int main()
{
  int x, y, z;
  int count = 0;
  int sumEven = 0;
  int sumOdd = 0;

  cout << endl;
  cout << "Enter an integer: ";
  cin >> x;
  cout << endl;
  z = x;

// Count the number of digits
  while (x > 0)
  {
    x = x / 10;
    count++;
  }

// Reset x to integer entered
// Initiate y
  x = z;
  y = x;

// determine if digit is even or odd using count as LCV
  while (count >= 0)
  {
    y = x % 10;
    if (y % 2 == 0)
      sumEven += y;
    else
      sumOdd += y;
    x = x / 10;
    count--;
  }

  cout << "The integer you entered is: " << z << endl;
  cout << endl;
  cout << "The sum of the even numbers is: " << sumEven << endl;
  cout << "The sum of the odd numbers is: " << sumOdd << endl;

  return 0;
}
