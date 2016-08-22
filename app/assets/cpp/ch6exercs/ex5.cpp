#include <iostream>

using namespace std;

int reverseDigits(int);

int main()
{
  int x;
  cout << "Enter a number: ";
  cin >> x;

  cout << reverseDigits(x) << endl;

  return 0;
}

int reverseDigits(int x)
{

  int y;

  while (x >= 10)
  {
    y = x % 10;
    cout << y << " ";
    x = x / 10;

  }
  return x;
}
