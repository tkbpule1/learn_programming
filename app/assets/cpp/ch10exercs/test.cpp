#include <iostream>
#include <vector>

using namespace std;

void getData(vector<int>& list, unsigned int length);

int main()
{
  unsigned int length = 4;

  vector<int> list;
  vector<int> array;

  getData(list, length);
  for (int i = 0; i < list.size(); i++)
  {
    cout << list[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < length; i++)
  {
    array[i] = list[i];
    cout << array[i] << " ";
  }
  cout << endl;

  return 0;
}

void getData(vector<int> & list, unsigned int length)
{
  for (int i = 0; i < length; i++)
  {
    list.push_back(i);
  }
  cout << endl;

}
