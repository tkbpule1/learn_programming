/*
  P + B*P/100 - D*P/100
  B - D = Pgrowthrate
*/

#include <iostream>
#include <cmath>

using namespace std;

double growthRate(double, double);
double estimatedPopulation(double, double, double);

int main()
{
  double currentPopulation;
  double birthRate;
  double deathRate;
  double n;  // number of years
  double g, a; // growth rate

  cout << "Enter the current population: ";
  cin >> currentPopulation;
  if (currentPopulation < 2)
  {
    cout << "Current population must be greather than 2" << endl;
    return 1;
  }

  cout << "Enter the birth rate: ";
  cin >> birthRate;
  if (birthRate < 0)
  {
    cout << "Birth rate must be positive" << endl;
    return 1;
  }

  cout << "Enter the death rate: ";
  cin >> deathRate;
  if (deathRate < 0)
  {
    cout << "Death rate must be positive" << endl;
  }

  cout << "Enter the number of years: ";
  cin >> n;

  g = growthRate(birthRate, deathRate);

  a = estimatedPopulation(currentPopulation, g, n);

  cout  << "Esimated population after " << n << " years: "
        << a << endl;


  return 0;
}

double growthRate(double b, double d)
{
  double growthRate;

  growthRate = b - d; // b is birth rate and d is death rate

  return growthRate;
}

double estimatedPopulation(double c, double g, double n)
{
  double pop;

  cout << g/100 * n;

  // pop = c + ((c / 100) * (g * n));
  pop = c * (1 + ((g/100) * n));

  return pop;
}
