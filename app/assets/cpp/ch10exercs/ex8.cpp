#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
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

  for (int i = 0; i < length; i++)
  {

    if (list[i] == "quora")
    {
      found = true;
      cout << "Found at position: " << i + 1 << endl;
      break;
    }
  }
  return 0;
}
