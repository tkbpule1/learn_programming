#include <iostream>
using namespace std;

void insertionSort(int list[], int length);

int main()
{
  int length = 10;
  int array[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};

  for (int i = 0; i < length; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;

  insertionSort(array, length);

  cout << "After sorting, list elements are: ";

  for (int i = 0; i < length; i++)
  {
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}

void insertionSort(int list[], int length)
{
  int firstOutOfOrder, location;
  int temp;

  for(firstOutOfOrder = 1; firstOutOfOrder < length; firstOutOfOrder++)
  {
    if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
    {
      temp = list[firstOutOfOrder];
      location = firstOutOfOrder;

      do
      {
        list[location] = list[location - 1];
        location--;
      }
      while (location > 0 && list[location - 1] > temp);

      list[location] = temp;
    }
  }
}
