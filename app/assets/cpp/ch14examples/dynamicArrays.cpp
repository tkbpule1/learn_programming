#include <iostream>

using namespace std;

int main()
{
  int *p;

  p = new int[5];

  cout << p << endl;


// This way is correct but long and cumbersome; C++ allows us to use the array
//   notation.

  // *p = 25;
  // p++;
  // *p = 35;
  // p++;
  // *p = 55;
  // p++;
  // *p = 65;
  // p++;
  // *p = 75;

  for (int i = 0; i < 5; i++)
  {
    p[i] = 25 + (i * 10);
    cout << p[i] << " ";
  }
  cout << endl << endl;

  delete [] p;

  p = NULL;

  cout << p << endl;

  return 0;
}
