#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, y, z;
  int i;
  int count;
  int sum;
  int power;

  cout << "Enter an integer: ";
  cin >> x;

  count = 0;

  y = x;
  while (y >= 10)
  {
    y / 10;
    count++;
    y = y / 10;
  }


  power = pow(10, count);


  cout << "Integer: ";
  y = x;
  for (i = count; i >= 0; i--)
  {
    z = y / power;
    y = y % power;
    power = power / 10;
    cout << z << " ";
  }

  cout << endl;
  sum = 0;
  for (y = x; y >= 1; y = y / 10)
  {
    sum = sum + y % 10;
  }

  cout << "Sum = " << sum << endl;

  return 0;
}
