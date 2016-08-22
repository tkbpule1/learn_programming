#include <iostream>
using namespace std;


class pointer
{
public:
  void setVar(int a, int b);
  void print() const;
  pointer();
  ~pointer();

private:
  int x;
  int lenP;
  int *p;
};


int main()
{

  {
    pointer test;

    test.setVar(1, 5);

    test.print();

  }

  cout << "test" << endl;



  {
    pointer test;

    test.setVar(4, 10);

    test.print();

  }

  cout << "test #2" << endl;


  return 0;
}

void pointer::setVar(int a, int b)
{
  x = a;
  lenP = b;

  p = new int[lenP];

  for (int i = 0; i < lenP; i++)
  {
    p[i] = i;
  }
}

void pointer::print() const
{
  cout << "x: " << x;
  cout << ", lenP: " << lenP;
  cout << endl;

  for (int i = 0; i < lenP; i++)
  {
    cout << p[i] << " ";
  }

  cout << endl;
}

pointer::pointer()
{
  x = 0;
  lenP = 0;
  p = NULL;
}

pointer::~pointer()
{
  cout << "Object is out of scope." << endl;

  delete [] p;
  p = NULL;

  cout << "Object is deleted." << endl;
}
