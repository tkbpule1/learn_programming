#include <iostream>
#include <vector>

using namespace std;

void initialize(std::vector<int>& list);
bool isListEmpty(std::vector<int> list);
void insert(std::vector<int>& list, int item, int position);
void print(std::vector<int> list);

int main()
{
  bool empty = false;
  std::vector<int> array;

  empty = isListEmpty(array);
  std::cout << empty << std::endl;

  initialize(array);

  print(array);

  insert(array, 3, 3);

  print(array);

  return 0;
}

bool isListEmpty(std::vector<int> list)
{
  return list.empty();
}

void initialize(std::vector<int>& list)
{
  for (int i = 0; i < 5; i++)
  {
    list.push_back(i * 10);
    std::cout << list[i] << " ";
  }
  std::cout << std::endl;
}

void insert(std::vector<int>& list, int item, int position)
{
  int temp;
  int last = list.size();
  std::cout << last << std::endl;
  list.push_back(item);



  for (int i = last; i > position; i--)
  {
    temp = list[i - 1];
    // std::cout << temp << std::endl;
    list[i - 1] = list[i];
    // std::cout << list[i -1] << std::endl;
    list[i] = temp;
    // std::cout << list[i] << std::endl;
  }

}

void print(std::vector<int> list)
{
  for (int i = 0; i < list.size(); i++)
  {
    std::cout << list[i] << " ";
  }
  std::cout << std::endl;
}
