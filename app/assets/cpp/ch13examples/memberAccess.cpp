#include <iostream>
using namespace std;

class Base
{
public:
  int myPublicInt;
  int returnPrivate() { return myPrivateInt; };
  Base() { myPrivateInt = 1; myProtectedInt = 2; myPublicInt = 3; };
protected:
  int myProtectedInt;
private:
  int myPrivateInt;
};

class Derived : public Base
{
public:
  // int foo1() { return myPrivateInt;} // Won't compile
  int foo2() { return myProtectedInt; } // Okay
  int foo3() { return myPublicInt; } // Okay
};

class notDerived
{
public:
  // int foo1() { return B.myPrivateInt;} // Won't compile
  // int foo2() { return B.myProtectedInt;} // Won't compile
  int foo3() { return B.myPublicInt; } // Okay
private:
  Base B;
};

int main()
{
  Base baseClass;

  cout << baseClass.returnPrivate() << endl;

  Derived derivedClass;

  cout << derivedClass.foo2() << endl;
  cout << derivedClass.foo3() << endl;

  notDerived unrelated;

  cout << unrelated.foo3() << endl;


  return 0;
}
