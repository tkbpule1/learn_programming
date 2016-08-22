#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
  char str1[26];
  char str2[26];
  char discard;
  int len1;
  int len2;
  ifstream infile;
  infile.open("/home/tim/Desktop/cpp/ch9examples/test.txt");
  if (!infile)
  {
    cout << "Input failure.";
    return 0;
  }

  infile.get(str1, 26);
  infile.get(discard);
  infile.get(str2, 26);
  len1 = strlen(str1);
  len2 = strlen(str2);
  cout << len1 << len2 << endl;

  // cout << str1 << endl;
  // cout << str2 << endl;
  for (int i = 0; i < len1; i++)
  {
    cout << static_cast<char>(toupper(str1[i])) << " ";
  }
  cout << endl;

  for (int i = 0; i < len2; i++)
  {
    cout << str2[i] << " ";
  }
  cout << endl;

  infile.close();
  return 0;
}
