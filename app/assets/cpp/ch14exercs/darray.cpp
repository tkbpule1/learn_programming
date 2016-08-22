#include <iostream>
using namespace std;

int main()
{
  int *p;
  p = new int[10];

  *p = 0;
  p++;
  *p = 1;
  p++;
  *p = 2;
  p++;
  *p = 3;
  p++;
  *p = 4;
  p++;
  *p = 5;
  p++;
  *p = 6;
  p++;
  *p = 7;
  p++;
  *p = 8;
  p++;
  *p = 9;

  p = p - 9;

  for (int i = 0; i < 10; i++)
  {
    cout << p[i] << endl;
  }

  delete [] p;

  return 0;
}
