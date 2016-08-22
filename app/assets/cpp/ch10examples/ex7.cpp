#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int>intList;

  intList.push_back(13);
  intList.push_back(75);
  intList.push_back(28);
  intList.push_back(35);

  cout << "List Elements:    ";
  for (unsigned int i = 0; i < intList.size(); i++)
  {
    cout << intList[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < intList.size(); i++)
  {
    intList[i] = intList[i] * 2;
  }

  cout << "2: List Elements: ";
  for (int i = 0; i < intList.size(); i++)
  {
    cout << intList[i] << " ";
  }
  cout << endl;

  return 0;
}
