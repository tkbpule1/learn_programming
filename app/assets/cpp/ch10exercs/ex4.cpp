#include <iostream>

using namespace std;

void removeAt(int list[], int& length, int index);
void printArray(const int list[], int length);

int main()
{
  int index = 2;
  int length = 5;
  int array[] = {0, 1, 2, 3, 4};

  cout << "Before removeAt: " << endl;
  printArray(array, length);

  removeAt(array, length, index);

  cout << "After removeAt: " << endl;
  printArray(array, length);
  return 0;
}

void removeAt(int list[], int& length, int index)
{
  int temp;
  int last = length - 1;

  for (int i = index; i < length - 1; i++)
  {
    temp = list[i];
    list[i] = list[i + 1];
    list[i + 1] = temp;
  }
  list[length - 1] = 0;

  length--;
}

void printArray(const int list[], int length)
{
  for (int i = 0; i < length; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;
}
