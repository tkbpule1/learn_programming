#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double riverWidth = 0.5; // miles;

void conversion(int& costPerfoot);
void distanceUnder(double riverWidth, double& dist, double theta);
void distanceOver(double riverWidth, double& dist, double theta);
void cost(int underwaterCost, int overlandCost,
  double distanceUnder, double distanceOver, double& total);
void calcTheta(int underwaterCost, int overlandCost, double& theta);

int main()
{
  int underwaterCost = 9; // dollars per foot;
  int overlandCost = 7; // dollars per foot;
  double distanceUnderwater = 0;
  double distanceOverland = 0;
  double totalCost = 0;
  double theta = 0;

  conversion(underwaterCost);
  conversion(overlandCost);

  calcTheta(underwaterCost, overlandCost, theta);
  cout << "theta: " << theta << endl;

  distanceUnder(riverWidth, distanceUnderwater, theta);
  distanceOver(riverWidth, distanceOverland, theta);

  cost(underwaterCost, overlandCost, distanceUnderwater, distanceOverland, totalCost);

  cout << showpoint << fixed << setprecision(2);

  cout << "Cost per mile underwater: $" << underwaterCost << endl;
  cout << "Cost per mile over land: $" << overlandCost << endl;

  cout << "Distance underwater: " << distanceUnderwater << " mile(s)";
  cout << endl;
  cout << "Distance over land: " << distanceOverland << " miles";
  cout << endl;

  cout << "Total cost: $" << totalCost << endl;


  return 0;
}

void conversion(int& costPerft)
{
  int ftPerMile = 5280;
  costPerft *= ftPerMile;
}

void distanceUnder(double riverWidth, double& dist, double theta)
{
  dist = riverWidth * (1 / cos(theta));
}

void distanceOver(double riverWidth, double& dist, double theta)
{
  dist = (8 - tan(theta) * riverWidth);
}


void cost(int underwaterCost, int overlandCost,
  double distanceUnder, double distanceOver, double& total)
{
  total = underwaterCost * distanceUnder + overlandCost * distanceOver;;
}

void calcTheta(int underwaterCost, int overlandCost, double& theta)
{
  double a = underwaterCost/2;
  double b = overlandCost/2;

  theta = asin(b/a);
}
