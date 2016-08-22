#include <iostream>

class listType
{
public:
  void initLen(int);
  bool isListEmpty() const;
  bool isListFull() const;
  int search(int searchItem) const;
  void fill();
  void insert(int newElement);
  void removeElement(int Element);
  void destroyList();
  void printList() const;
  listType(); // Default Constructor

private:
  int length;
  int list[1000];
};

int main()
{
  int a;
  listType array;

  array.isListEmpty();
  std::cout << std::endl;
  // array.printList();
  array.isListFull();

  array.fill();
  array.printList();

  a = array.search(100);
  if (a != -1)
  {
    std::cout << "SearchItem found at index: " << a << std::endl;
  }
  else
  {
    std::cout << "SearchItem not found!" << std::endl;
  }

  array.insert(50);
  array.printList();

  array.removeElement(50);

  array.destroyList();
  array.printList();

  return 0;
} // end main;


void listType::destroyList()
{
  for (int i = 0; i < 1000; i++)
  {
    list[i] = 0;
  }
}

void listType::insert(int newElement)
{
  list[999] = newElement;
}

void listType::removeElement(int Element)
{
  int temp;
  int index;
  length = 1000;

  index = search(Element);

  for (int i = index; i < length; i++)
  {
    list[i] = list[i + 1];
  }
  std::cout << "removeElement: " << std::endl;
  for (int i = 0; i < 999; i++)
  {
    std::cout << list[i] << " ";
    if ((i+1) % 20 == 0 && i > 0)
    {
      std::cout << std::endl;
    }
  }
  std::cout << std::endl;
}

void listType::fill()
{
  for (int i = 0; i < 1000; i++)
  {
    list[i] = i;
  }
}

int listType::search(int searchItem) const
{
  int first = 0;
  int last = 999;
  int mid;
  bool found = false;

  while (first <= last && !found)
  {
    mid = (first + last) / 2;
    if (list[mid] == searchItem)
    {
      found = true;
    }
    else if (list[mid] > searchItem)
    {
      last = mid - 1;
    }
    else
    {
      first = mid + 1;
    }
  }
  if (found)
  {
    return mid;
  }
  else
  {
    return -1;
  }
}

listType::listType()
{
  for (int i = 0; i < 1000; i++)
  {
    list[i] = 0;
  }
}

bool listType::isListEmpty() const
{
  bool empty = false;
  if (length == 0)
  {
    empty = true;
  }
  if (empty == 0)
  {
    std::cout << "List is not empty" << std::endl;
  }
  else
  {
    std::cout << "List is empty" << std::endl;
  }
  return empty;
}

// Assuming that if you fill one you fill all elements of list[]
bool listType::isListFull() const
{
  int count = 0;
  bool full = false;

  for (int i = 0; i < 1000; i++)
  {
    if (list[i] == 0)
    {
      count++;
    }
  }

  if (count == 1000)
  {
    std::cout << "List is not full" << std::endl;
  }
  else
  {
    std::cout << "List is full" << std::endl;
  }
  return full;
}

void listType::printList() const
{
  for (int i = 0; i < 1000; i++)
  {
    std::cout << list[i] << " ";
    if (i > 0 && (i + 1) % 20 == 0)
    {
      std::cout << std::endl;
    }
  }
  std::cout << std::endl;
}
