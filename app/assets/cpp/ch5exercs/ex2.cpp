#include <iostream>
// #include <climits>

using namespace std;

int main()
{
  int x;
  int num;

  cout << "Enter an integer: ";
  cin >> x;

  cout << "Integer in reverse: ";
  while (x > 0)
  {
    num = x % 10;
    x = x / 10;
    cout << num << " ";
  }

  cout << endl;
  // cout << "Max int value = " << INT_MAX << endl;
  return 0;
}
