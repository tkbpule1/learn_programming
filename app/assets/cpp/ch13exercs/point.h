#ifndef h_point
#define h_point

class pointType
{
public:
  void setCoordinates(int a, int b);
  // Function to set the x and y coordinates;
  // Postcondition: x = a; y = b;

  int returnXCoordinate() const;
  // Function to return x coordinates;

  int returnYCoordinate() const;
  // Function to return y coordinates;

  void print() const;
  // Function to print x and y coordinates;

  pointType(int a = 0, int b = 0);
  // Constructor


private:
  int x;
  int y;
};

#endif
