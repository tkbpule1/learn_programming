/*
  Rewrite Example 5-5, Telephone Digits.  Replace the statements
  so that it uses only a switch structure to find the digits that correspond
  to an upper case leter
*/
#include <iostream>

using namespace std;

int main()
{
  char letter;

  cout << "Enter a letter: ";
  cin >> letter;

  while(letter != '#')
  {
    switch (letter)
    {
      case 'A':
      case 'B':
      case 'C':
        cout << "2" << endl;
        break;
      case 'D':
      case 'E':
      case 'F':
        cout << "3" << endl;
        break;
      case 'G':
      case 'H':
      case 'I':
        cout << "4" << endl;
        break;
      case 'J':
      case 'K':
      case 'L':
        cout << "5" << endl;
        break;
      case 'M':
      case 'N':
      case 'O':
        cout << "6" << endl;
        break;
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
        cout << "7" << endl;
        break;
      case 'T':
      case 'U':
      case 'V':
        cout << "8" << endl;
        break;
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
        cout << "9" << endl;
        break;
      default:
        cout << "Invalid input!" << endl;
    }
    cout << "To stop the program enter # : ";
    cout << "Enter another letter: ";
    cin >> letter;
  }

  return 0;
}
