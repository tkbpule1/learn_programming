#ifndef test
#define test

class baseClass
{
public:
  void setData(double);
  void setData(char, double);
  void print() const;

  baseClass(char = '*', double = 0.0);

protected:
  char bCh;

private:
  double bX;
};

class derivedClass : public baseClass
{
public:
  void setData(char, double, int);
  void print() const;

private:
  int dA;
};

#endif
