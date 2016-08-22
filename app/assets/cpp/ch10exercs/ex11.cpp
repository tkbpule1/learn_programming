#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  string temp;
  int location;
  bool found = false;
  unsigned int length = 10;
  string array[] = {"tim", "joe", "ashley", "johnny", "kyle", "kali",
                    "linux", "ubuntu", "quora", "c++"};

  vector<string> list(10);


  for (int i = 0; i < length; i++)
  {
    list[i] = array[i];
    cout << list[i] << " ";
  }
  cout << endl;

  // Vector;
  for (int i = 1; i < length; i++)
  {
    if (list[i] < list[i - 1])
    {
      temp = list[i];
      location = i;
      do
      {
        list[location] = list[location - 1];
        location--;
      }
      while(location > 0 && list[location - 1] > temp);
      list[location] = temp;
    }
  }

  for (int i = 0; i < length; i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;



  // Array;
  // for (int i = 1; i < length; i++)
  // {
  //   if (array[i] < array[i - 1])
  //   {
  //     temp = array[i];
  //     location = i;
  //     do
  //     {
  //       array[location] = array[location - 1];
  //       location--;
  //     }
  //     while(location > 0 && array[location - 1] > temp);
  //     array[location] = temp;
  //   }
  // }
  //
  // for (int i = 0; i < length; i++)
  // {
  //   cout << array[i] << " ";
  // }
  // cout << endl;

  return 0;
}
