#ifndef h_pointer
#define h_pointer


class pointer
{
public:
  pointer& setX(int a);
  pointer& setY(int b);
  pointer& setZ(int c);
  void print() const;
  pointer updateXYZ();
  pointer(int a = 0, int b = 0, int c = 0);

private:
  int x;
  int y;
  int z;
};



#endif
