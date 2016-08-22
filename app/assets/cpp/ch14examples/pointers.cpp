#include <iostream>

using namespace std;

class classExample
{
public:
  void setX(int a);
  // Function to set the value of x;
  // Postcondition: x = a;

  void print() const;

private:
  int x;
};

int main()
{
  classExample *cExPtr;
  classExample cExObject;

  cExPtr = NULL;

  cout << endl;

  cout << "Value of cExPtr (cExPtr): " << cExPtr << endl;
  cout << endl;


  cExPtr = &cExObject;


  cExObject.setX(1);
  cout << "cExObject.setX(1): " << endl;
  cExObject.print();
  cout << endl;

  cExPtr->setX(5);
  cout << "cExPtr->setX(5): " << endl;
  cExPtr->print();
  cout << endl;

  (*cExPtr).setX(15);
  cout << "(*cExPtr).setX(15)" << endl;
  (*cExPtr).print();

  cout << endl;

  // Note: (*cExPtr).setX() is equal to cExPtr->setX();

  cout << "Address of cExPtr (&cExPtr): " << &cExPtr << endl;
  cout << "Value of cExPtr (cExPtr): " << cExPtr << endl;
  cout << endl;


  int *p;

  p = new int;

  *p = 25;

  cout << "p1: " << p << endl;

  cout << "*p1: " << *p << endl;

  delete p;

  cout << "*p2: " << *p << endl;

  cout << "p2: " << p << endl;

  p = 0;

  cout << "p3: " << p << endl;

  p = new int;

  cout << "p4: " << p << endl;

  *p = 15;

  cout << "*p4: " << *p << endl;

  delete p;

  p = 0;

  cout << "p5: " << p << endl;

  p = new int;

  int *z;

  z = new int;

  cout << "z1: " << z << endl;
  cout << "p6: " << p << endl;

  *z = 9;
  *p = 5;

  cout << "*z1: " << *z << endl;
  cout << "*p6: " << *p << endl;

  delete p;
  delete z;

  p = NULL;

  cout << "p7: " << p << endl;

  



  return 0;
}

void classExample::setX(int a)
{
  x = a;
}

void classExample::print() const
{
  cout << "x: " << x << endl;
}
