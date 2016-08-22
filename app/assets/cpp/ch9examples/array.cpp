#include <iostream>
using namespace std;

const int ARRAY_SIZE = 50;

void initializeArray(int x[], int ARRAY_SIZE);
void printArray(const int x[], int ARRAY_SIZE);

int main()
{
  // make an alias for int that is an array of size 50 called list of type int
  typedef int list[ARRAY_SIZE];

  // Declare an array called x of size 50 of type int;
  list x;

  cout << "Before initializing x[]: ";
  printArray(x, ARRAY_SIZE);
  cout << endl << endl;

  initializeArray(x, ARRAY_SIZE);
  cout << "After initializing x[]: ";
  printArray(x, ARRAY_SIZE);
  cout << endl << endl;

  return 0;
}

void initializeArray(int x[], int ARRAY_SIZE)
{
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    x[i] = i;
  }
}

void printArray(const int x[], int ARRAY_SIZE)
{
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    cout << x[i] << " ";
  }
}
