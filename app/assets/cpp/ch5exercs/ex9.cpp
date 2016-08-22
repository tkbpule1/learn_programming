/*
  Write a program that uses while loops to perform the following steps:
  a. Prompt the user to input two integers: x, y; x < y;
  b. Output all odd numbers between x and y;
  c. Output the sum of all even numbers between x and y;
  d. Output the numbers and their squares between 1 and 10
  e. Output the sum of the square of the odd numbers between x and y;
  f. Output all uppercase letters.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, y;   // first and second numbers, respectively
  int sum;    // sum of even numbers between x and y
  int z, a;
  int odd;    // odd numbers between x and y
  int sumOfSquares; // sum of squares of odd numbers between x and y

// a.
cout << endl;
cout << "Enter two integers, x < y: ";
cin >> x >> y;
cout << endl;

// b. Output all odd numbers between x and y;
z = x;
cout << "All odd numbers between " << x << " and " << y << " : ";
while (z <= y)
{
    if (z % 2 != 0)
    cout << z << " ";
  z++;
}
cout << endl << endl;

// c. Output the sum of all even numbers between x and y
z = x;
sum = 0;

cout << "Even numbers between " << x << " and " << y << ": ";
while (z <= y)
{
  if (z % 2 == 0)
  {
    sum = sum + z;
    cout << z << " ";
  }
  z++;
}
cout << endl;
cout  << "Sum of all even numbers between " << x << " and " << y << " : "
      << sum << endl << endl;
// d. Output the numbers and their squares between 1 and 10
z = 1;
cout << "The numbers between 1 and 10: ";
while (z < 11)
{
  cout << z << ", ";
  z++;
}
cout << endl;

z = 1;
cout << "The square of the numbers between 1 and 10: ";
while (z < 11)
{
  cout << pow(z, 2) << "; ";
  z++;
}
cout << endl << endl;
// e. Output the sum of the squares of the odd numbers between x and y
z = x;
sum = 0;
while (z <= y)
{
  if (z % 2 != 0)
  {
    sum = sum + pow(z, 2);
  }
  z++;
}
cout  << "Sum of the squares of the odd numbers between "
      << x << " and " << y << ": "
      << sum << endl << endl;
// f. Output all uppercase letters
z = 65;
cout << "The uppercase letters: ";
while (z <= 'Z')
{
  cout << static_cast<char>(z) << " ";
  z++;
  z = static_cast<int>(z);

}
cout << endl << endl;


  return 0;
}
