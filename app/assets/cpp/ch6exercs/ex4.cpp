#include <iostream>

using namespace std;

int one(int, int);
double two(int, double);

int main()
{
  int x, y, z;
  double dec;


  cout << "Enter two numbers: ";
  cin >> x >> y;

  cout << "output of one(): " << one(x, y) << endl;

  cout << "Enter two numbers: ";
  cin >> x >> dec;

  cout << "output of two(): " << two(x, dec) << endl;

  return 0;
}

int one(int x, int y)
{
  if (x > y)
  {
    return (x + y);
  }
  else
  {
    return ((x - 2) * y);
  }
}

double two(int x, double a)
{
  int first;
  double z;

  cout << "Enter a number: ";
  cin >> z;

  z += a;
  cout << "z: " << z << endl;

  first = one(6, 8);
  cout << "first1: " << first << endl;

  first += x;
  cout << "first2: " << first << endl;

  cout << "return z if z * 2 > first: " << z << endl;
  cout << "else return: " << ((2 * first) - z) << endl;

  if (z * 2 > first)
  {
    return z;
  }
  else
  {
    return ((2 * first) - z);
  }
}
