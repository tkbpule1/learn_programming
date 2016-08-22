#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch);
string rotate(string pStr);
string pigLatin(string pStr);

int main()
{
  string str;
  char ch;

  cout << "Enter text: ";
  cin >> str;

  cout << pigLatin(str) << endl;

  return 0;
}

bool isVowel(char ch)
{
  switch (ch)
  {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
    case 'Y':
    case 'y':
      return true;
    default:
      return false;
  }
}

string rotate(string pStr)
{
  string rStr;

  string::size_type len = pStr.length();


  rStr = pStr.substr(1, len - 1) + pStr[0];



  return rStr;
}

string pigLatin(string pStr)
{
  bool foundVowel;
  string::size_type len;
  string::size_type counter;

  if (isVowel(pStr[0]))
  {
    pStr = pStr + "-way";
  }
  else
  {
    pStr = pStr + "-";
    pStr = rotate(pStr);

    len = pStr.length();
    foundVowel = false;

    for (counter = 1; counter < len - 1; counter++)
    {
      if (isVowel(pStr[0]))
      {
        foundVowel = true;
        break;
      }
      else
      {
        pStr = rotate(pStr);
      }
    }

    if (!foundVowel)
    {
      pStr = pStr.substr(1, len) + "-way";
    }
    else
    {
      pStr = pStr + "ay";
    }
  }

  return pStr;
}
