#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int len;
  char ch2;
  char ch[12] = "Timmy Beyer";
  bool character = true;

  cout << ch << endl;

  cout << "Enter a string: ";
while (character)
{



  for (int i = 0; i < 10; i++)
  {
    ch2 = cin.peek();
    character = isalpha(ch2);
    if (ch2 == ' ') {character = true;}
    cout << "character: " << character << endl;
    if (character == false)
    {
      cout << "Ch2: " << ch2 << endl;
      cout << "Invalid Input" << endl;
      character = false;
      return 1;
    }
    else if (ch2 == ' ')
    {
      cout << "Char: " << ch2 << endl;
      ch[i] = ch2;
      cout << ch[i];
      cin.get(ch2);
    }
    else
    {
      cout << "Char2: " << ch2 << endl;
      ch[i] = ch2;
      cin.get(ch2);
    }
    cout << endl;

  }
}
  cout << "string: " << ch << endl;


  return 0;
}
