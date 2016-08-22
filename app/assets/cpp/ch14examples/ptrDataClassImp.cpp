#include <iostream>
#include <cassert>
#include "ptrDataClass.h"

using namespace std;

void pointerDataClass::print() const
{
  for (int i = 0; i < length; i++)
  {
    cout << p[i] << " ";
  }
}

void pointerDataClass::insertAt(int index, int num)
{
  assert(index >= 0 && index < maxSize);

  int temp;

  if (index < length)
  {
    p[index] = num;
  }
  else
  {
    p[length] = num;
    length++;
  }
}

pointerDataClass::pointerDataClass(int size)
{
  if (size <= 0)
  {
    cout << "The array size must be positive." << endl;
    cout << "Creating an array of the size 10." << endl;

    maxSize = 10;
  }
  else
  {
    maxSize = size;
  }

  length = 0;

  p = new int[maxSize];
}

pointerDataClass::~pointerDataClass()
{
  cout << "Out of scope." << endl;
  delete [] p;
  cout << "Object and Pointer Deleted." << endl;
}

pointerDataClass::pointerDataClass(const pointerDataClass& object)
{
  maxSize = object.maxSize;
  length = object.length;
  p = new int [maxSize];
  for (int i = 0; i < length; i++)
  {
    p[i] = object.p[i];
  }
}
