#include <iostream>

using namespace std;

class baseClass
{
public:
  void print() const;
  baseClass(string s = " ", int a = 0);
  int getX();
  int e;
protected:
  int x;
private:
  string str;
};

class derivedClass : public baseClass
{
public:
  void print() const;
  derivedClass(string s = " ", int a = 0, int b = 0);
private:
  int y;
};

int main()
{
  baseClass base("This is the base class", 2);
  derivedClass derived("DDDD", 3, 7);

  base.print();
  derived.print();

  cout << "base: x = " << base.getX() << endl;


  return 0;
}

void baseClass::print() const
{
  cout << "x: " << x << " " << "str: " << str << endl;
}

baseClass::baseClass(string s, int a)
{
  str = s;
  x = a;
}

int baseClass::getX()
{
  return x;
}


void derivedClass::print() const
{
  cout << "Derived Class: " << y << endl;
  baseClass::print();
}

derivedClass::derivedClass(string s, int a, int b)
                                                : baseClass("Hello base", a + b)
{
  y = b;
}
