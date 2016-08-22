class testClass
{
public:
  int sum();
  // Returns the sum of the private member variables;

  void print() const;
  // Prints the values of the private member variables;

  testClass();
  // Default Constructor;
  // Postcondition: x = 10; y = 10;

  testClass(int a, int b);
  // Constructor with parameters;
  // Postcondition: x = a; y = b;

private:
  int x;
  int y;
};
