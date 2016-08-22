#include <iostream>
#include "protectedMembers.h"

using namespace std;

void baseClass::setData(double u)
{
  bX = u;
}

void baseClass::setData(char ch, double u)
{
  bCh = ch;
  bX = u;
}

void baseClass::print() const
{
  cout << "Base Class: bCh = " << bCh << ", bX = " << bX << endl;
}

baseClass::baseClass(char ch, double u)
{
  bCh = ch;
  bX = u;
}


void derivedClass::setData(char ch, double v, int a)
{
  baseClass::setData(v);

  bCh = ch; // protected member can be accessed directly

  dA = a;
}

void derivedClass::print() const
{
  baseClass::print();

  cout << "Derived Class: dA = " << dA << endl;
}
