// Functions with Default Parameters;
#include <iostream>
#include <iomanip>

using namespace std;

int volume(int l = 1, int w = 1, int h = 1);
void funcOne(int& x, double y = 12.34, char z = 'B');

int main()
{
  int a = 23;
  double b = 48.78;
  char ch = 'M';

  cout << fixed << showpoint << setprecision(2);

  cout << "Initially: a = " << a << ", b = " << b << ", ch = " << ch << endl;
  cout << "Initially: Volume = " << volume() << endl;
  cout << "With parameters 5 and 4 volume = " << volume(5, 4) << endl;
  cout << "With parameter 34 volume = " << volume(34) << endl;
  cout << "With parameters 6, 5 and 4 volume = " << volume(6, 5, 4) << endl;

  funcOne(a);
  funcOne(a, 42.68);
  funcOne(a, 34.65, 'Q');

  cout << "After all calls to funcOne(): a = " << a << ", b = " << b
      << ", ch = " << ch << endl;

  return 0;
}

int volume(int l, int w, int h)
{
  return l * w * h;
}

void funcOne(int& x, double y, char z)
{
  x = 2 * x;

  cout << "Inside funcOne(): x = " << x << ", y = " << y
  << ", z = " << z << endl;
}
