/*
  Output the first four perfect integers
  Takes as input a positive integer and outputs whether the integer is perfect.

  Integer is perfect if it is the sum of its positive proper divisors
  Proper divisor if m < n and remainder = 0
  ex. 28 has 5 proper dividers: 1, 2, 4, 7, 14; thus 28 is perfect
*/

#include <iostream>

using namespace std;

int main()
{

  int num, x, y;
  int z = 0;
  int i; // count variable
  int sum = 0;

  // num = 2;
  // while (z < 4)
  // {
  //   if (num % i)
  //     {
  //       sum = sum + i;
  //       x++;
  //     }
  // }



while (z < 4)
    for (i = 1; i <= num ;)
    {
      for (num = 2; ;)
      {
        if (num % i == 0)
        {
          cout << "num1: " << num << endl;
          cout << "i: " << i << endl;
          sum = sum + i;
          cout << "sum: " << sum << endl;
          i++;
          if (sum == num)
          {
          cout << "num2: " << num << endl;
          num++;
          z++;
          sum = 0;
          }
          else if (sum != num)
          {
            num++;
            i++;
          }
          else if(i = num)
          {
            i = 1;
            break;
          }
        }
      }
    }













  return 0;
}
