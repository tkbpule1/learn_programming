#include <iostream>
#include <climits>

using namespace std;

const int length = 5;

int seqOrderedSearch(int list[], int length, int searchItem, int& index);
void bubbleSort(int list[], int length);
void selectionSort(int list[], int length);
void printArray(int list[], int length);

int main()
{
  int index;

  int array[length] = {3, 1, 5, 4, 2};

  printArray(array, length);

  // bubbleSort(array, length);
  // cout << "After bubbleSort: " << endl;
  // printArray(array, length);

  selectionSort(array, length);
  cout << "After selectionSort: " << endl;
  printArray(array, length);

  seqOrderedSearch(array, length, 2, index);

  cout << index << endl;
  cout << array[index] << endl;

  return 0;
}

int seqOrderedSearch(int list[], int length, int searchItem, int& index)
{
  bool found = false;

  for (index = 0; index < length; index++)
  {
    if (list[index] == searchItem)
    {
      found = true;
      break;
    }
  }
  if (found)
  {
    return index;
  }
  else
  {
    return -1;
  }
}

void bubbleSort(int list[], int length)
{
  int temp;
  int i; // iteration number;
  int j; // index number;

  for (i = 0; i < length - 1; i++)
  {
    for (j = 0; j < length - i - 1; j++)
    {
      if (list[j + 1] < list[j])
      {
        temp = list[j];
        list[j] = list[j + 1];
        list[j + 1] = temp;
      }
      cout << list[j] << " " << list[j+1] << endl;
    }
  }
}

void selectionSort(int list[], int length)
{
  int smallestIndex;
  int temp;

  for (int index = 0; index < length - 1; index++)
  {
    smallestIndex = index;
    for (int minIndex = index + 1; minIndex < length; minIndex++)
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

void printArray(int list[], int length)
{
  for (int i = 0; i < length; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;
}
