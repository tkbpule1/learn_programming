#include <iostream>
using namespace std;

void insertAt(int list[], int& length, int insertItem, int index);
void printArray(const int list[], int length);

int main()
{
  int length = 100;
  int insertItem = 10;
  int index = 10;

  int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                  0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                  0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                  0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                  0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                  0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                  0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                  0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                  0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };

  cout << "Before insertAt: " << endl;
  printArray(array, length);

  insertAt(array, length, insertItem, index);

  cout << "After insertAt: " << endl;
  printArray(array, length);

  return 0;
}

void insertAt(int list[], int& length, int insertItem, int index)
{
  int temp;
  int store;
  length++;
  int last = length - 1;

  for(int i = last; i > index; i--)
  {
    temp = list[i];
    list[i] = list[i - 1];
    list[i - 1] = temp;
  }

  list[index] = insertItem;

}

void printArray(const int list[], int length)
{
  for (int i = 0; i < length; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;
}
