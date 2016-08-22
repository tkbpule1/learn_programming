#include <iostream>

using namespace std;

void menu(char& ch);
void getData(int& a, int& b, int& c, int& d);
void addFractions(int a, int b, int c, int d, int& n, int& den);
void subtractFractions(int a, int b, int c, int d, int& n, int& den);
void divideFractions(int a, int b, int c, int d, int& n, int& den);
void multiplyFractions(int a, int b, int c, int d, int& n, int& den);
void reduce(int& n, int& den);

int main()
{
  char operation;
  int a, b, c, d;
  int numerator, denominator;

  menu(operation);
  getData(a, b, c, d);

  if (operation == '+')
  {
    cout << a << " / " << b << " + " << c << " / " << d << " = ";
    addFractions(a, b, c, d, numerator, denominator);
  }
  else if (operation == '-')
  {
    cout << a << " / " << b << " - " << c << " / " << d << " = ";
    subtractFractions(a, b, c, d, numerator, denominator);
  }
  else if (operation == '*')
  {
    cout << a << " / " << b << " * " << c << " / " << d << " = ";
    multiplyFractions(a, b, c, d, numerator, denominator);
  }
  else if (operation == '/')
  {
    cout << a << " / " << b << " * " << c << " / " << d << " = ";
    divideFractions(a, b, c, d, numerator, denominator);
  }

  cout << numerator << " / " << denominator << endl;
  cout << endl;

  return 0;
}

void menu(char& ch)
{
  bool bad = true;

  cout << "This program lets you perform arithmetic operations on fractions.";
  cout << endl << endl;

  cout << "Data is to be entered with integers only, separated by spaces.";
  cout << endl << endl;

  cout << "Choose the operation to be performed( +, -, *, / ): ";
  cin >> ch;

  while (bad == true)
  {
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
      bad = false;
    }
    else
    {
      cout << "Invalid operation" << endl;
      cout << "Enter an operation( +, -, *, / ): ";
      cin >> ch;
    }
  }
}

void getData(int& a, int& b, int& c, int& d)
{
  cout << "Enter the numerator and denominator of the first fraction: ";
  cin >> a >> b;
  cout << "Enter the numerator and denominator of the second fraction: ";
  cin >> c >> d;
}

void addFractions(int a, int b, int c, int d, int& n, int& den)
{
  int num1, num2;
  num1 = a;
  num2 = c;

  if (b == d)
  {
    den = d;
  }
  else if (b % d == 0)
  {
    num1 = a;
    num2 = c *(b/d);
    den = b;
  }
  else if (d % b == 0)
  {
    num1 = a * (d/b);
    num2 = c;
    den = d;
  }
  else
  {
    num1 = a * d;
    num2 = c * b;
    den = b * d;
  }

  n = num1 + num2;
  reduce(n, den);
}

void subtractFractions(int a, int b, int c, int d, int& n, int& den)
{
  int num1, num2;
  num1 = a;
  num2 = c;

  if (b == d)
  {
    den = d;
  }
  else if (b % d == 0)
  {
    num1 = a;
    num2 = c *(b/d);
    den = b;
  }
  else if (d % b == 0)
  {
    num1 = a * (d/b);
    num2 = c;
    den = d;
  }
  else
  {
    num1 = a * d;
    num2 = c * b;
    den = b * d;
  }

  n = num1 - num2;
  reduce(n, den);
}

void multiplyFractions(int a, int b, int c, int d, int& n, int& den)
{
  n = a * c;
  den = b * d;
  reduce(n, den);
}

void divideFractions(int a, int b, int c, int d, int& n, int& den)
{
    // a/b / c/d = a/b * d/c
    n = a * d;
    den = b * c;
    reduce(n, den);
}

void reduce(int& n, int& den)
{
  while (n % 29 == 0 && den % 29 == 0)
  {
    n = n / 29;
    den = den / 29;
  }
  while (n % 23 == 0 && den % 23 == 0)
  {
    n = n / 23;
    den = den / 23;
  }
  while (n % 19 == 0 && den % 19 == 0)
  {
    n = n / 19;
    den = den / 19;
  }
  while (n % 17 == 0 && den % 17 == 0)
  {
    n = n / 17;
    den = den / 17;
  }
  while (n % 13 == 0 && den % 13 == 0)
  {
    n = n / 13;
    den = den / 13;
  }
  while (n % 11 == 0 && den % 11 == 0)
  {
    n = n / 11;
    den = den / 11;
  }
  while (n % 7 == 0 && den % 7 == 0)
  {
    n = n / 7;
    den = den / 7;
  }
  while (n % 5 == 0 && den % 5 == 0)
  {
    n = n / 5;
    den = den / 5;
  }
  while (n % 3 == 0 && den % 3 == 0)
  {
    n = n / 3;
    den = den / 3;
  }
  while (n % 2 == 0 && den % 2 == 0)
  {
    n = n / 2;
    den = den / 2;
  }
}
