#include <iostream>
using namespace std;

void removeAll(int list[], int& length, int removeItem);
void printArray(const int list[], int length);

int main()
{
  int length = 10;
  int removeItem = 4;

  int array[] = {2, 10, 4, 16, 4, 2, 10, 4, 17, 18};

  printArray(array, length);
  removeAll(array, length, removeItem);
  printArray(array, length);
}

void removeAll(int list[], int& length, int removeItem)
{
  int temp;
  int last;

  for (int i = 0; i < length; i++)
  {
    if (list[i] == removeItem)
    {
      for (int j = i; j < length - 1; j++)
      {
        temp = list[j];
        list[j] = list[j + 1];
        list[j + 1] = temp;
      }
      last = length - 1;
      list[last] = 0;
      length--;
    }
  }
}

void printArray(const int list[], int length)
{
  for (int i = 0; i < length; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;
}
