/*
  Repeat Exercise 9 with do-while loops
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, y, z;
  int sum;


  cout << "Enter two integers, x < y: ";
  cin >> x >> y;
  cout << endl;

// b.
  cout << "Odd numbers between " << x << " and " << y << ": ";
  z = x;
  do
  {
    if (z % 2 != 0)
    {
      cout << z << " ";
    }
    z++;
  }
  while(z <= y);
  cout << endl << endl;

// c.
  cout << "Sum of even numbers between " << x << " and " << y << ": ";
  sum = 0;
  z = x;
  do
  {
    if (z % 2 == 0)
    {
      sum = sum + z;
    }
    z++;
  }
  while(z <= y);
  cout << sum << endl << endl;

// d.
  cout << "The numbers between 1 and 10: ";
  z = 1;
  do {
    cout << z << " ";
    z++;
  } while(z < 11);
  cout << endl;

  cout << "The squares of the numbers between 1 and 10: " << endl;
  z = 1;
  do {
    cout << pow(z, 2) << " ";
    z++;
  } while(z < 11);
  cout << endl << endl;

// e.
  cout << "The sum of the squares of the odd numbers between "
       << x << " and " << y << ": " << endl;
  z = x;
  sum = 0;
  do {
    if (z % 2 != 0) {
      sum = sum + pow(z, 2);
    }
    z++;
  } while(z <= y);
  cout << sum << endl << endl;

// f.
  cout << "Uppercase Letters: " << endl;
  z = 65;
  do {
    cout << static_cast<char>(z) << " ";
    z++;
  } while(z <= 90);
  cout << endl << endl;



  return 0;
}
