#ifndef h_friend
#define h_friend

class classIllusFriend
{
  friend void two(classIllusFriend cIFObject);

public:
  void print() const;
  void setX(int a);

private:
  int x;
};


#endif
