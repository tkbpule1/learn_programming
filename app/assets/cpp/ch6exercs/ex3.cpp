#include <iostream>

using namespace std;

bool isVowel(char);

int main()
{
  char letter;

  cout << "Enter a letter: ";
  cin >> letter;

  if (isVowel(letter) == true)
  {
    cout << "The letter is a vowel" << endl;
  }
  else
  {
    cout << "The letter is not a vowel" << endl;
  }
}

bool isVowel(char ch)
{
  switch (ch)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      return true;
      break;
    default:
      return false;
  }
}
