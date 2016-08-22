#include <iostream>
#include <cstring>
using namespace std;


int main()
{
  int x;
  int *original = new int[10];
  int *p = original;
  char *name;

  name = new char[4];

  strcpy(name, "Tim");

  cout << name << endl;

  for (int i = 0; i < 4; i++)
  {
    name[i] = static_cast<char>(i + 65);
  }

  cout << name << endl;


  string *str;

  str = new string;

  *str = "Sunny Day";

  cout << *str << endl;


  *p = 4;

  for (int i = 0; i < 10; i++)
  {
    cout << *p << " ";
    x = *p;
    p++;
    *p = x + i;
  }


  delete [] original;

  cout << endl;


  return 0;
}
