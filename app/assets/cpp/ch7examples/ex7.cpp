#include <iostream>

using namespace std;

void funOne(int a, int& b, char v);
void funTwo(int& x, int y, char& w);

int main()
{
  int num1, num2;
  char ch;

  num1 = 10;
  num2 = 15;
  ch = 'A';

  cout << "Inside main: num1 = " << num1 << ", num2 = " << num2
      << ", ch = " << ch << endl;

  funOne(num1, num2, ch);

  cout << "Inside main, after funOne(): num1 = " << num1 << ", num2 = " << num2
      << ", ch = " << ch << endl;

  funTwo(num2, 25, ch);

  cout << "Inside main, after funTwo(): num1 = " << num1 << ", num2 = " << num2
      << ", ch = " << ch << endl;

  return 0;
} // end main

void funOne(int a, int& b, char v)
{
  int one;

  one = a;
  a++;
  b = b * 2;
  v = 'B';

  cout << "Inside funOne: a = " << a << ", b = " << b
      << ", v = " << v << endl;
}

void funTwo(int& x, int y, char& w)
{
  x++;
  y = y * 2;
  w = 'G';

  cout << "Inside funTwo: x = " << x << ", y = " << y
      << ", w = " << w << endl;
}
