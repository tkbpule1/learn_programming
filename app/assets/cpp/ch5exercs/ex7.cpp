/*
  Write a program that prompts the user to enter a positive integer.
  Output a message indicating whether the number is prime.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, y;
  int num;
  bool isprime;

  cout << endl;

  cout << "Enter an integer: ";
  cin >> num;
  cout << endl;

// Even integers
  if (num == 2)
    cout << num << " is prime." << endl;
  else if (num == 3)
    cout << num << " is prime." << endl;
  else if (num == 5)
    cout << num << " is prime." << endl;
  else if (num == 7)
    cout << num << " is prime." << endl;

  else if (num % 2 == 0)
    cout << num << " is not prime." << endl;

// Odd integers

  else
  {
            if (num % 3 == 0)
            {
              cout << num << " is not prime*." << endl;
            }
            else if (num % 5 == 0)
            {
              cout << num << " is not prime*." << endl;
            }
            else if (num % 7 == 0)
              cout << num << " is not prime*." << endl;
            else
              cout << num << " is prime*." << endl;

  }
  return 0;
}
