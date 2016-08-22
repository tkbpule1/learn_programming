// Pipe problem
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void getInput(int& x, int& y);
double calcTheta(int x, int y);
double calcLength(int x, int y, double theta);

int main()
{
  int x, y;
  double theta;
  double length;

  getInput(x, y);
  cout << "You entered: " << x << " feet, " << y << " feet" << endl;
  theta = calcTheta(x, y);
  length = calcLength(x, y, theta);
  cout << "length: " << length << endl;
  return 0;
}

void getInput(int& x, int& y)
{
  cout << "Enter the widths of the hallways in feet: ";
  cin >> x >> y;
}

double calcTheta(int x, int y)
{
  double theta;
  double ratio = static_cast<double>(x) / y;
  double toPwr = 1.00 / 3.00;
  double pwr = pow(ratio, toPwr);

  theta = atan(pwr);
  cout << theta << endl;
  return theta;
}

double calcLength(int x, int y, double theta)
{
  double length;
  length = x/sin(theta) + y/cos(theta);
  return length;
}
