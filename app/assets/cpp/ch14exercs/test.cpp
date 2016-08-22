#include <iostream>

using namespace std;

int main()
{
  int count = 0;
  int *p;
  p = NULL;
  int *w = p;
  w = NULL;
  int x;


  p = new int[10];
  // w = new int[10];
  *p = 4;

  for (int i = 0; i < 10; i++)
  {
    cout << "*w: " << *w << endl;
    x = *w;
    if (i < 9)
    {
      w++;
      count++;
      cout << "count: " << count << endl;
    }
    cout << "w: " << w << endl;
    *w = x + i;
  }
  cout << endl;
  cout << "count: " << count << endl;


  for (int j = 0; j < 10; j++)
  {
    cout << w[j] << ' ';
  }
  cout << endl;

  cout << &p << " " << &w << endl;



  // delete w;
  // w = NULL;
  // cout << w << endl;
  delete [] p;
  p = NULL;
  cout << p << endl;
  cout << &p << endl;
  cout << &w << endl;


  // OUTPUT:
  // 4 4 5 7 10 14 19 25 32 40


  return 0;
}
