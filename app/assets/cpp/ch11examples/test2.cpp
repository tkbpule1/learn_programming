#include <iostream>
using namespace std;

const int size = 100;

struct listType
{
  int listElem[size];
  int listLength;
};

int seqSearch(const listType& list, int searchItem)
{
  int loc;

  bool found = false;

  for (loc = 0; loc < list.listLength; loc++)
  {
    if (list.listElem[loc] == searchItem)
    {
      found = true;
      break;
    }
  }

  if (found)
  {
    return loc;
    cout << loc << endl;
  }

}

int main()
{
  listType intList;

  intList.listLength = 0;

  for (int i = 0; i < 50; i++)
  {
    intList.listElem[i] = i;
    intList.listLength++;
  }
  for (int i = 0; i < intList.listLength; i++)
  {
    cout << intList.listElem[i] << " ";
  }
  cout << endl;



  cout << "length: " << intList.listLength << endl;

  int index = seqSearch(intList, 0);
  cout << "index: " << index << endl;
}
