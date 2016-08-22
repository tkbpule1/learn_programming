#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void getstr(char str[], int& strlength);
void toup(char str[], int strlength);
void output(const char str[], int strlength);
int main()
{
  int strlength;
  char str[31];

  getstr(str, strlength);
  toup(str, strlength);
  output(str, strlength);

  return 0;
}

void getstr(char str[], int& strlength)
{
  char ch;
  cout << "Enter a string < 30 characters: ";

  cin.get(str, 30);
  strlength = strlen(str);
}

void toup(char str[], int strlength)
{
  for (int i = 0; i < strlength; i++)
  {
    str[i] = static_cast<char>(toupper(str[i]));
  }
}

void output(const char str[], int strlength)
{
  for (int i = 0; i < strlength; i++)
  {
    cout << str[i];
  }
  cout << endl;
}
