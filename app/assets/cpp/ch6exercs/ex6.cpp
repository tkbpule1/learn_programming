#include <iostream>
#include <cmath>

using namespace std;

double distance(double, double, double, double);
double radius(double, double, double, double);
double circumferece(double);
double area(double);


int main()
{
  double x1, x2, y1, y2;
  double r;


  cout << "Enter the x-coordinates: ";
  cin >> x1 >> x2;
  cout << "Enter the y-coordinates: ";
  cin >> y1 >> y2;

  r = radius(x1, x2, y1, y2);



  cout << "distance: " << distance(x1, x2, y1, y2) << endl;
  cout << "radius: " << radius(x1, x2, y1, y2) << endl;

  cout << "circumferece: " << circumferece(r) << endl;
  cout << "area: " << area(r) << endl;

  return 0;
}

double distance(double x1, double x2, double y1, double y2)
{
  return sqrt((pow((x2-x1),2))+pow((y2-y1),2));
}

double radius(double x1, double x2, double y1, double y2)
{
  distance(x1, x2, y1, y2);
}

double circumferece(double r)
{
  double c;

  c = 3.1416 * r;

  return c;
}

double area(double r)
{
  double a;

  a = 3.1416 * pow(r, 2);

  return a;
}
