/*
  If n = 8784204, then t = 4 - 0 + 2 - 4 + 8 - 7 + 8 = 11.
  Because 11 is divisible by 11, it follows that n is divisible by 11.

  Write a program that prompts the user to enter a positive integer
  and then uses this criterion to determine whether the number is divisible
  by 11.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, y, z, t;
  int sum = 0;
  int count = 0;
  int num;
  int power;

  cout << "Enter an integer: ";
  cin >> num;

  x = num;
  while (x / 10 >= 1)
  {
    x % 10;
    count++;
    x = x / 10;
  }

  z = 1;
  power = pow(10, count);
  x = num;
  while (z <= count + 1)
  {
    y = x % 10;
    x = x / 10;
    if (z % 2 != 0)
      sum = sum + y;
    else
      sum = sum - y;
    cout << "sum: " << sum << endl;
    z++;
  }


  cout << "Sum = " << sum << endl;

  if (sum % 11 == 0)
    cout << num << " is divisible by 11." << endl;
  else
    cout << num << " is not divisible by 11." << endl;


  return 0;
}
