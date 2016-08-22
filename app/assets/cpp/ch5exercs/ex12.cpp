/*
  Fibonacci Number
*/

#include <iostream>
#include <climits>

using namespace std;

int main()
{
  int x, y;
  int nth;
  int sum = 0;
  bool foo = true;

  cout << "Enter the first two numbers of the sequence: ";
    cin >> x >> y;

  if(x > y)
  {
    cout << "First number must be less than second number." << endl;
    return 0;
  }
  if (x < 0 || y < 0)
  {
    cout << "Numbers must be positive." << endl;
    return 0;
  }


  cout << "Enter the nth term you wish to find of the sequence: ";
  cin >> nth;

  if (nth < 1)
  {
    cout << "\nNumber must be greater than or equal to 1." << endl;
    return 0;
  }

  if (nth == 1)
  {
    cout << "The nth term is: " << x << endl;
  }
  else if (nth == 2)
  {
    cout << "The nth term is: " << y << endl;
  }

  if (nth > 2)
  {
    for (int i = 2; i < nth; i++)
    {
      sum = x + y;
      x = y;
      y = sum;
    }
    cout << "The nth term is: " << sum << endl;
  }

  return 0;
}
