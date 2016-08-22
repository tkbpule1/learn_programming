#include <iostream>
using namespace std;

const int length = 5;

void bubbleSort(int list[], int length);
void selectionSort(int list[], int length);
int binarySearch(int list[], int length, int searchItem, int& index);
void printArray(int list[], int length);

int main()
{
  int index;
  int array[length] = {2, 4, 5, 3, 1};

  // bubbleSort(array, length);
  selectionSort(array, length);
  printArray(array, length);
  binarySearch(array, length, 3, index);
  cout << index << endl;
  cout << array[index] << endl;

  return 0;
}

void bubbleSort(int list[], int length)
{
  int temp;

  for (int i = 0; i < length -1; i++)
  {
    for (int j = 0; j < length - i - 1; j++)
    {
      if (list[j + 1] < list[j])
      {
        temp = list[j];
        list[j] = list[j + 1];
        list[j + 1] = temp;
      }
    }
  }
}

void selectionSort(int list[], int length)
{
  int smallestIndex;
  int temp;

  for (int i = 0; i < length - 1; i++)
  {
    smallestIndex = i;
    for (int minIndex = i + 1; minIndex < length; minIndex++)
    {
      if (list[minIndex] < list[smallestIndex])
      {
        smallestIndex = minIndex;
      }
      temp = list[smallestIndex];
      list[smallestIndex] = list[i];
      list[i] = temp;
    }
  }
}

int binarySearch(int list[], int length, int searchItem, int& index)
{
  int first = 0;
  int last = length - 1;
  int mid;
  bool found = false;

  while (first <= last && !found)
  {
    mid = (first + last) / 2;
    if (list[mid] == searchItem)
    {
      found = true;
    }
    else if (list[mid] > searchItem)
    {
      last = mid - 1;
    }
    else
    {
      first = mid + 1;
    }
  }

  if (found)
  {
    index = mid;
    return index;
  }
  else
  {
    return -1;
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
