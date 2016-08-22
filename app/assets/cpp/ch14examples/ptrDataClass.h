#ifndef ptr_h
#define ptr_h

class pointerDataClass
{
public:

  void print() const;

  void insertAt(int index, int num);

  pointerDataClass(int size = 10);
  // Constructor;

  ~pointerDataClass();
  // Destructor;

  pointerDataClass(const pointerDataClass& object);
  // Copy Constructor;

private:
  int maxSize;
  int length;
  int *p;

};


#endif
