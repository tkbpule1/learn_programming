#ifndef h_pointer
#define h_pointer


class arrayClass
{
public:
  const arrayClass& operator= (const arrayClass&);
  // assignment operator overload;

  void print() const;
  // Print Function

  void insert(int item);

  void destroyList();

  arrayClass(int size = 0);

  ~arrayClass();

private:
  int *list;
  int length;
  int maxSize;

};

const arrayClass& arrayClass::operator= (const arrayClass& array)
{
  if (this != & array)
  {
    delete [] list;
    maxSize = array.maxSize;
    length = array.length;

    list = new int[maxSize];

    for (int i = 0; i < length; i++)
    {
      list[i] = array.list[i];
    }
  }

  return *this;
}


void arrayClass::print() const
{
  if (length == 0)
  {
    std::cout << "The list is empty" << std::endl;
  }
  else
  {
    for (int i = 0; i < length; i++)
    {
      std::cout << list[i] << " ";
    }
    std::cout << std::endl;
  }
}

void arrayClass::insert(int item)
{
  if (length == maxSize)
  {
    std::cout << "List is full" << std::endl;
  }
  else
  {
    list[length++] = item;
  }
}

void arrayClass::destroyList()
{
  delete [] list;
  list = NULL;
  length = 0;
  maxSize = 0;
}

arrayClass::arrayClass(int size)
{
  maxSize = size;
  length = 0;

  if (maxSize == 0)
  {
    list = NULL;
  }
  else
  {
    list = new int[maxSize];
  }
}

arrayClass::~arrayClass()
{
  delete [] list;
  list = NULL;
  length = 0;
  maxSize = 0;
}


#endif
