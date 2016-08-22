#include <iostream>
using namespace std;

void bubbleSort(int list[], int length);

int main()
{
  int list[10] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};

  for (int i = 0; i < 10; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;

  bubbleSort(list, 10);

  cout << "After sorting, the list elements are: " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;

  return 0;
}

void bubbleSort(int list[], int length)
{
  int temp;
  int iteration;
  int index;

  for (iteration = 1; iteration < length; iteration++)
  {
    for (index = 0; index < length - iteration; index++)
    {
      if (list[index] > list[index + 1])
      {
        temp = list[index];
        list[index] = list[index + 1];
        list[index + 1] = temp;
      }
    }
  }
}
