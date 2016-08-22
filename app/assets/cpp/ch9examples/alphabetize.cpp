#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
  string name[10];
  char discard;
  ifstream infile;
  int compare;
  string n;

  infile.open("/home/tim/Desktop/cpp/ch9examples/list.txt");

  for(int i = 0; i < 10; i++)
  {
    infile >> name[i];
  }

  for (int i = 0; i < 10; i++)
  {
    cout << name[i] << endl;
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (name[i] < name[j])
      {
        
      }
    }
  }

  infile.close();

  return 0;
}
