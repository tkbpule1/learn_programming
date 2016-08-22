// Divisors and number of divisors of a number
#include <iostream>

using namespace std;

int main()
{
  int num;
  int count = 0;

  cout << "Enter a number: ";
  cin >> num;

  cout << "The divisors of " << num << " are: ";
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      cout << i << ", ";
      count++;
    }
  }
  cout << endl;
  cout << "The number of divisors is: " << count << "." << endl;
  if (count % 2 == 0)
  cout << "Closed" << endl;
  else
  cout << "Open" << endl;


  return 0;
}
