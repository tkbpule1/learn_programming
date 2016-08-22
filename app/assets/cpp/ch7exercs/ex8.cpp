#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double lengthOfSide(double witdth);
void input(double& a);

int main()
{
  double area = 0;
  double w;
  double x;

  cout << fixed << showpoint << setprecision(3);

  input(area);

  w = pow(area, 0.5);

  x = lengthOfSide(w);

  cout << "The length of the side to be cut from the corner is: x = "
      << x << endl;
  return 0;
}

void input(double& a)
{
  cout << "Enter the area of the cardboard: ";
  cin >> a;
}

double lengthOfSide(double width)
{
  double x;

  x = (8 * width + sqrt(16 * pow(width ,2))) / 24;

  return x;
}
