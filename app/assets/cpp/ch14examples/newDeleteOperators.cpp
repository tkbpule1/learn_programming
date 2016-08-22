#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
  int x = 0;
  int y = 1;
  int z = 2;

  int *p;
  char *q;
  string *str;


  p = new int;

  *p = 23;

  cout << "p1: " << p << endl;

  cout << "*p1: " << *p << endl;

  delete p;

  p = NULL;

  cout << endl << endl;



  p = new int;

  *p = 45;

  cout << "p1: " << p << endl;

  cout << "*p1: " << *p << endl;

  delete p;
  p = NULL;

  cout << endl << endl;



  str = new string;

  *str = "Timmy";

  cout << "str: " << str << endl;

  cout << "*str:" << *str << endl;

  delete str;
  str = NULL;

  cout << endl << endl;



  q = new char[10];

  strcpy(q, "Tim Beyer");

  cout << "q: " << q << endl;

  delete [] q;
  q = NULL;


  return 0;
}
