#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  int x, y, z;
  int count;
  int i;
  int power;
  int sum;

  cout << "Enter an integer: ";
  cin >> x;

  count = 0;
  sum = 0;

  y = x;
  while (y >= 10)
  {
    y / 10;
    count++;
    y = y / 10;
  }

  power = pow(10, count);

  y = x;
  cout << "Integer = ";
  while (count >= 0)
  {
    z = y / power;
    y = y % power;
    power = power / 10;
    count--;
    cout << z << " ";
  }

  cout << endl;

  y = x;
  while (y >= 1)
  {
    sum = sum + y % 10;
    y = y / 10;
  }
  cout << "sum = " << sum << endl;

  return 0;
}
