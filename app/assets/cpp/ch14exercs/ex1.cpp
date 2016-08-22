// Write a program that prompts the user to enter a string and output the string
// in all uppercase letters. (use a dynamic array)

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void getstr(string& str);
void setLen(string str, int& len);
void convertToC_Str(string& str);
void store(char array[], string str, int len);
void capitalize(char array[], int len);
void print(char array[], int len);
void destroy(char array[]);


int main()
{
  int length;
  string str;

  char *array;

  getstr(str);

  setLen(str, length);

  array = new char[length];

  convertToC_Str(str);

  store(array, str, length);

  capitalize(array, length);

  cout << endl;

  print(array, length);

  cout << endl;

  destroy(array);

  cout << endl;
  cout << endl;

  return 0;
}

void getstr(string& str)
{
  cout << "Enter a string: ";
  getline(cin, str);
}

void setLen(string str, int& len)
{
  len = str.length();
}

void convertToC_Str(string& str)
{
  str = str.c_str();
}

void store(char array[], string str, int len)
{
  for (int i = 0; i < len; i++)
  {
    array[i] = str[i];
  }
}

void capitalize(char array[], int len)
{
  for (int i = 0; i < len; i++)
  {
    if (array[i] > 96 && array[i] < 123)
    {
      array[i] = array[i] - 32;
    }
  }

}

void print(char array[], int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << array[i];
  }
}

void destroy(char array[])
{
  delete [] array;
  array = NULL;
}
