// Write a program that declares an array alpha of 50 components
// of type double.  Initialize the first 25 components to the square of the
// index variable, and the last 25 to three times the index variable.
// Output the array so that 10 elements per line are printed.
#include <iostream>
#include <cmath>
using namespace std;

const int SIZE = 50;

void initialize1(double alpha[], int SIZE);
void initialize2(double alpha[], int SIZE);
void output(const double alpha[], int SIZE);

int main()
{
  double alpha[SIZE];


  initialize1(alpha, SIZE);
  initialize2(alpha, SIZE);
  output(alpha, SIZE);
  cout << endl;

}

void initialize1(double alpha[], int SIZE)
{
  for (int i = 0; i < SIZE / 2; i++)
  {
    int pwr = pow(i, 2);
    alpha[i] = pwr;
  }
}
void initialize2(double alpha[], int SIZE)
{
  for (int i = SIZE / 2; i < SIZE; i++)
  {
    int a = 3 * i;
    alpha[i] = a;
  }
}

void output(const double alpha[], int SIZE)
{
  for (int i = 0; i < SIZE; i++)
  {
    int a = i + 1;
    cout << alpha[i] << " ";
    if (a % 10 == 0)
    {
      cout << endl;
    }
  }
}
