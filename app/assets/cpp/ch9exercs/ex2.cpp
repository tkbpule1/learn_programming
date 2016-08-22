#include <iostream>
using namespace std;

const int SIZE = 20;

void initialize(int array[], int SIZE);
void smallestIndex(const int array[], int SIZE);
void output(const int array[], int SIZE);

int main()
{
  int array[SIZE];

  initialize(array, SIZE);
  output(array, SIZE);
  smallestIndex(array, SIZE);

  return 0;
}

void initialize(int array[], int SIZE)
{
  for (int i = 0; i < SIZE; i++)
  {
    if (i % 2 == 0)
    {
      array[i] = i + 35;
    }
    else if (i % 3 == 0)
    {
      array[i] = 10 * i + 20;
    }
    else
    {
      array[i] = i + 40;
    }
  }
}

void smallestIndex(const int array[], int SIZE)
{
  int smallest = array[0];

  for (int i = 0; i < SIZE; i++)
  {
    if (array[i] < smallest)
    {
      smallest = array[i];
    }
  }
  cout << "The smallest element of the array: " << smallest << endl;
}

void output(const int array[], int SIZE)
{
  for (int i = 0; i < SIZE; i++)
  {
    cout << array[i] << " ";
    // if ((i + 1) % 5 == 0)
    // {
    //   cout << endl;
    // }
  }
  cout << endl;
}
