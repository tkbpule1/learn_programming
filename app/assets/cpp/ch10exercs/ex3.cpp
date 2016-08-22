#include <iostream>
using namespace std;


void removeElement(int list[], int& length, int removeItem);
void printArray(const int list[], int length);

int main()
{
  int length = 10;
  int removeItem = 18;

  int array[] = {2, 10, 4, 16, 4, 2, 10, 4, 17, 18};

  cout << "Before removeElement: " << endl;
  printArray(array, length);

  removeElement(array, length, removeItem);

  cout << "After removeElement, length: " << length << endl;
  printArray(array, length);

  return 0;
}

void removeElement(int list[], int& length, int removeItem)
{
  int temp;

  for (int i = 0; i < length; i++)
  {
    if (list[i] == removeItem)
    {
      for (int j = i; j < length - 1; j++)
      {
        temp = list[j + 1];
        cout << temp << endl;
        list[j] = list[j + 1];
        list[j + 1] = temp;
      }
      length--;
      break;
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
