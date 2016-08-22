#include <iostream>
using namespace std;

const int size = 10;

void selectionSort(int list[], int length);

int main()
{
  int list[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};

  for (int i = 0; i < size; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;

  selectionSort(list, size);

  cout << "After sorting, the list elements are: ";
  for (int i = 0; i < size; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;

  return 0;
}

void selectionSort(int list[], int length)
{
  int index;
  int smallestIndex;
  int minIndex;
  int temp;

  for (index = 0; index < length - 1; index++)
  {
    smallestIndex = index;

    for (minIndex = index + 1; minIndex < length; minIndex++)
    {
      if (list[minIndex] < list[smallestIndex])
      {
        smallestIndex = minIndex;
      }
    }
    temp = list[smallestIndex];
    list[smallestIndex] = list[index];
    list[index] = temp;
  }
}
