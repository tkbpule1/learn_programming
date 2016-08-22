/*
  Repeat Exercise 9 with for loops
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int x, y, z;
  int sum;
  int i;
  int sumOfSquares;

cout << "Enter two integers, x < y: ";
cin >> x >> y;

// b. output all odd numbers between x and y
cout << "Odd numbers between " << x << " and " << y << ": ";
for (i = x; i <= y ; i++)
{
  if (i % 2 != 0)
    cout << i << " ";
}
cout << endl << endl;


// c. output the sum of all even numbers between x and y
sum = 0;
cout << "Sum of even numbers between " << x << " and " << y << ": ";
for (i = x; i <= y; i++)
{
  if (i % 2 == 0)
    sum = sum + i;
}
cout << sum << endl << endl;

// d. output the numbers and their squares between 1 and 10
cout << "The numbers between 1 and 10: ";
for (i = 1; i < 11; i++)
{
  cout << i << " ";
}
cout << endl;

cout << "The square of the numbers: ";
for (i = 1; i < 11; i++)
{
  z = pow(i, 2);
  cout << z << " ";
}
cout << endl << endl;

// e. output the sum of the squares of the numbers between x and y
cout << "The sum of the squares of the odd numbers between "
      << x << " and " << y << ": ";
      sumOfSquares = 0;
for (i = x; i <= y; i++)
{
  if (i % 2 != 0)
  {
    z = pow(i, 2);
    sumOfSquares = sumOfSquares + z;
  }
}
cout << sumOfSquares << endl << endl;

// f. output all uppercase letters
cout << "The uppercase letters: ";
for (i = 65; i <= 90; i++)
{
  cout << static_cast<char>(i) << " ";
}
cout << endl << endl;

return 0;
}
