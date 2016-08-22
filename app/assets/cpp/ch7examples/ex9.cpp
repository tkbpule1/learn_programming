#include <iostream>

using namespace std;

int t;

void funOne(int& a, int& x);

int main()
{
  int num1, num2;

  num1 = 10;
  num2 = 20;
  t = 15;

  cout << "Inside main: num1 = " << num1
      << ", num2 = " << num2 << " and t = " << t << endl;

  funOne(num1, t);

  cout << "Inside main, after funOne: num1 = " << num1
      << ", num2 = " << num2 << " and t = " << t << endl;

  return 0;
}

void funOne(int& a, int& x)
{
  int z;

  z = a + x;

  cout << "Inside funOne: a = " << a
      << ", x = " << x << ", z = " << z << " and t = " << t << endl;

  x = x + 5;
  cout << "Inside funOne: a = " << a
      << ", x = " << x << ", z = " << z << " and t = " << t << endl;

  a = a + 12;
  cout << "Inside funOne: a = " << a
      << ", x = " << x << ", z = " << z << " and t = " << t << endl;

  t = t + 13;
  cout << "Inside funOne: a = " << a
      << ", x = " << x << ", z = " << z << " and t = " << t << endl;

}
