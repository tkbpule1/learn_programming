#include <iostream>
#include <cmath>

using namespace std;

void getData(int& m, int& n);
int calcA(int m, int n);
int calcB(int m, int n);
int calcC(int m, int n);
void display(int a, int b, int c);


int main()
{
  int m, n, a, b, c;

  getData(m, n);
  a = calcA(m, n);
  b = calcB(m, n);
  c = calcC(m, n);

  display(a, b, c);
}

void getData(int& m, int& n)
{
  cout << "Enter m and n: ";
  cin >> m >> n;
}

int calcA(int m, int n)
{
  int a;
  a = abs(pow(m, 2) - pow(n, 2));
  return a;
}

int calcB(int m, int n)
{
  int b;
  b = 2 * m * n;
  return b;
}

int calcC(int m, int n)
{
  int c;
  c = pow(m, 2) + pow(n, 2);
  return c;
}

void display(int a, int b, int c)
{
  cout << "The value of a is: " << a << endl;
  cout << "The value of b is: " << b << endl;
  cout << "The value of c is: " << c << endl;
}
