#include <iostream>
#include <iomanip>

using namespace std;

const double INTEREST = 0.10; // per year

int main()
{
  int initAmount;
  double balance; // at the end of the year

  cout << "Enter the initial balance: ";
  cin >> initAmount;

  balance = initAmount;

  for (int age = 16; age <= 60; age++)
  {
      balance = balance + (balance * INTEREST);
      cout << balance << endl;
  }
  cout << "Balance at age 60: " << balance << endl;

  return 0;
}
