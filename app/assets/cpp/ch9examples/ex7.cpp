#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

void initializeArray(int x[], int sizeX);
void fillArray(int x[], int sizeX);
void printArray(const int x[], int sizeX);
int sumArray(const int x[], int sizeX);
int indexLargestElement(const int x[], int sizeX);
void copyArray(const int x[], int y[], int length);

int main()
{
  /* Declare the array listA of 10 components
     Initialize each component to 0;
  */
  int listA[ARRAY_SIZE] = {0};

  // Declare the array listB of 10 components;
  int listB[ARRAY_SIZE];

  // Output the elements of listA using the function printArray;
  cout << "listA elements are: " << endl;
  printArray(listA, ARRAY_SIZE);
  cout << endl << endl;

  // Initialize listB using the function initializeArray;
  initializeArray(listB, ARRAY_SIZE);
  cout << endl;

  // Output the elements of listB using the printArray function;
  cout << "listB elements: " << endl;
  printArray(listB, ARRAY_SIZE);
  cout << endl << endl;

  // Input data into listA using the fillArray function;
  cout << "Enter " << ARRAY_SIZE << " integers: ";
  fillArray(listA, ARRAY_SIZE);
  cout << endl;

  // Output elements of listA after using the fillArray function;
  cout << "After fillArray(listA, ARRAY_SIZE), listA elements are: "
      << endl;
  printArray(listA, ARRAY_SIZE);
  cout << endl << endl;

  // Output the sum of the elements of listA using the sumArray function;
  cout << "The sum of the elements of listA is: " << endl
       << sumArray(listA, ARRAY_SIZE) << endl << endl;

  // Find and output the position of the largest element in listA
  // using the indexLargestElement function;
  cout << "The position of the largest element in listA is: " << endl
       << indexLargestElement(listA, ARRAY_SIZE) << endl << endl;

  // Find and output the largest element in listA;
  cout << "The largest element in listA is: "
       << listA[indexLargestElement(listA, ARRAY_SIZE)]
       << endl << endl;

  // Copy the elements of listA into listB using the copyArray function;
  copyArray(listA, listB, ARRAY_SIZE);

  // Output listB elements after copying listA into listB;
  cout << "After copying listA to listB, listB elements are: ";
  printArray(listB, ARRAY_SIZE);
  cout << endl << endl;

  return 0;
}

void initializeArray(int x[], int sizeX)
{
  for (int i = 0; i < sizeX; i++)
  {
    x[i] = 0;
  }
}
void fillArray(int x[], int sizeX)
{
  for (int i = 0; i < sizeX; i++)
  {
    cin >> x[i];
  }
}
void printArray(const int x[], int sizeX)
{
  for (int i = 0; i < sizeX; i++)
  {
    cout << x[i] << " ";
  }
}
int sumArray(const int x[], int sizeX)
{
  int sum = 0;

  for (int i = 0; i < sizeX; i++)
  {
    sum = sum + x[i];
  }
  return sum;
}
int indexLargestElement(const int x[], int sizeX)
{
  int maxIndex = 0;
  for (int i = 1; i < sizeX; i++)
  {
    if (x[maxIndex] < x[i])
    {
      maxIndex = i;
    }
  }
  return maxIndex;
}
void copyArray(const int x[], int y[], int length)
{
  for (int i = 0; i < length; i++)
  {
    y[i] = x[i];
  }
}
