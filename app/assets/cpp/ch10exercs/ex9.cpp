#include <iostream>
#include <vector>

using namespace std;

int main()
{
  bool found = false;
  unsigned int length = 10;
  string array[] = {"tim", "joe", "ashley", "johnny", "kyle", "kali",
                    "linux", "ubuntu", "quora", "c++"};

  vector<string> list(10);
  cout << endl;

  for (int i = 0; i < length; i++)
  {
    list[i] = array[i];
    cout << list[i] << " ";
  }
  cout << endl;


  // Selection Sort
  // int smallestIndex;
  // string temp;
  // for (int i = 0; i < length - 1; i++)
  // {
  //   smallestIndex = i;
  //   for (int j = i + 1; j < length; j++)
  //   {
  //     if (list[j] < list[smallestIndex])
  //     {
  //       smallestIndex = j;
  //     }
  //   }
  //   temp = list[smallestIndex];
  //   list[smallestIndex] = list[i];
  //   list[i] = temp;
  // }

  // Bubble Sort
  string temp;

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length - i - 1; j++)
    {
      if (list[j] > list[j + 1])
      {
        temp = list[j];
        list[j] = list[j + 1];
        list[j + 1] = temp;

      }
    }
  }
  cout << endl;

  for (int i = 0; i < length; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl << endl;

  return 0;
}
