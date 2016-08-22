#include <iostream>

using namespace std;

int main()
{
  int x;
  int count = 0;

  cout << "Enter a number: ";
  cin >> x;
  cout << "Perfect squares are: ";

  for (int num = 1; num <= x; num++)
  {
    for (int i = 1; i <= x; i++)
    {
      if (i * i == num)
      {
        cout << num << " ";
        count++;
      }
    }
  }
  cout << endl;
  cout << "Number of prime numbers: " << count << endl;

  return 0;
}
