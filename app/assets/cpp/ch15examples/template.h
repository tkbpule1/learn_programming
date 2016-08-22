#ifndef h_template
#define h_template


#include <iostream>
#include <cassert>

template <class elemType>
class listType
{
public:
  bool isEmpty() const;
  bool isFull() const;
  int getLength() const;
  int getMaxSize() const;
  void sort();
  void print() const;
  void insertAt(const elemType& item, int position);
  listType(int listSize = 10);
  ~listType();

private:
  int maxSize;
  int length;
  elemType *list;
};

template <class elemType>
bool listType<elemType>::isEmpty() const
{
  return (length == 0);
}

template <class elemType>
bool listType<elemType>::isFull() const
{
  return (length == maxSize);
}

template <class elemType>
int listType<elemType>::getLength() const
{
  return length;
}

template <class elemType>
int listType<elemType>::getMaxSize() const
{
  return maxSize;
}

template <class elemType>
listType<elemType>::listType(int listSize)
{
  maxSize = listSize;
  length = 0;
  list = new elemType[maxSize];
}

template <class elemType>
listType<elemType>::~listType()
{
  delete [] list;
}

template <class elemType>
void listType<elemType>::sort()
{
  int i, j;
  int min;
  elemType temp;

  for (i = 0; i < length; i++)
  {
    min = i;
    for (j = i + 1; j < length; j++)
    {
      if (list[j] < list[min])
      {
        min = j;
      }
    }
    temp = list[i];
    list[i] = list[min];
    list[min] = temp;
  }
}

template <class elemType>
void listType<elemType>::insertAt(const elemType& item, int position)
{
  assert(position >= 0 && position < maxSize);
  list[position] = item;
  length++;
}

template <class elemType>
void listType<elemType>::print() const
{
  for (int i = 0; i < length; i++)
  {
    std::cout << list[i] << " ";
  }
  std::cout << std::endl;
}


#endif
