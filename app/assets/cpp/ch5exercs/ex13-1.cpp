#include <iostream>
using namespace std;
int main()
{
  int num, i, z;
  int sum = 0;

// Output the first four perfect integers.
z = 1;
  for (num = 1; z <= 4; num++)
  {
    for (i = 1; i < num; i++)
    {
      //  cout << "i: " << i << endl;
      if (num % i == 0)
      {
        sum = sum + i;
        //  cout << "sum: " << sum << endl;
      }
    } // end inner for loop
    if (sum == num)
    {
      cout << "Perfect integer: " << num << endl;
      z++;
    }
    sum = 0;

  } // end outer for loop

// Take an integer as input and output whether it is a perfect integer.
cout << "Enter an integer to determine if it is perfect: ";
cin >> num;
sum = 0;
for (i = 1; i <= num / 2; i++)
{
  if (num % i == 0)
    sum = sum + i;
}
if (sum == num)
{
  cout << "The number is perfect! Yay!" << endl;

}
else if (sum != num)
{
  cout << "The number is not perfect." << endl;

}

  return 0;
}
