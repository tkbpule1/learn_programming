#include <iostream>
using namespace std;

const int SIZE = 25;

int seqSearch(const int list[], int length, int searchItem);

int main()
{
  int list[SIZE];
  int index;
  int length = 0;
  int number;

  cout << "Enter the length of the list(<25): ";
  cin >> length;

  cout << "Enter less than 26 integers: ";

  for (index = 0; index < length; index++)
  {
    cin >> list[index];
  }
  cout << endl;


  cout << "Enter the number to be searched: ";
  cin >> number;

  index = seqSearch(list, length, number);

  if (index != -1)
  {
    cout << number << " is found at location " << index << "." << endl;
  }
  else
  {
    cout << number << " is not in the list." << endl;
  }

  return 0;
}

int seqSearch(const int list[], int length, int searchItem)
{
  bool found = false;
  int i;

  for (i = 0; i < length; i++)
  {
    if (list[i] == searchItem)
    {
      found = true;
      break;
    }
  }

  if (found == true)
  {
    return i;
  }
  else
  {
    return -1;
  }
}
