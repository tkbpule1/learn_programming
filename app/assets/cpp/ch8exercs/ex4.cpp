#include <iostream>
#include <iomanip>

namespace constants
{
  const int SINGLE = 4000; // standard exemption
  const int MARRIED = 7000; // standard exemption
  const double FIRST = 15; // first tax bracket 0 - 15000
  const double SECOND = 25; // for income over 15000
  const int TAX2 = 2250; // initial tax for bracket 2
  const double THIRD = 35; // for income over 40000
  const int TAX3 = 8460; // initial tax for bracket 3
  const int PERSONALEXEMP = 1500; // per person
}
using namespace constants;
using namespace std;

void getData(char& status, int& kids, double& grossIncome, double& pension);
double taxableAmount(char status, int kids, double grossIncome, double pension);
void taxAmount(double netIncome);


int main()
{
  char s;
  int kids = 0;
  double grossIncome;
  double pension;
  double netIncome;

  cout << fixed << showpoint << setprecision(2);

  getData(s, kids, grossIncome, pension);
  netIncome = taxableAmount(s, kids, grossIncome, pension);
  taxAmount(netIncome);
  cout << endl;

  return 0;
}

void getData(char& status, int& kids, double& grossIncome, double& pension)
{
  bool stat = false;

  cout << "Enter your marital status: ";
  cin >> status;

  while (stat == false)
  {
    if (status == 's' || status == 'S')
    {
      stat = true;
      cout << "single" << endl;
    }
    else if (status == 'm' || status == 'M')
    {
      stat = true;
      cout << "married" << endl;
      cout << "Enter the number of kids: ";
      cin >> kids;
    }
    else
    {
      cout << "invalid" << endl;
      cout << "Enter status: ";
      cin >> status;
    }
  }

  cout << "Enter your gross income: ";
  cin >> grossIncome;

  cout << "Enter the percentage of your gross income "
      << "contributed to pension(as integer): ";
  cin >> pension;
}

double taxableAmount(char status, int kids, double grossIncome, double pension)
{
  double netIncome;
  double p = pension * grossIncome / 100;

  if (status == 's' || status == 'S')
  {

    netIncome = grossIncome - (SINGLE + PERSONALEXEMP + p);
    cout << netIncome << endl;
  }
  else
  {
    netIncome = grossIncome - (MARRIED + PERSONALEXEMP*(kids + 2) + p);
    cout << netIncome << endl;
  }

  return netIncome;
}


void taxAmount(double netIncome)
{
  double taxOwed;


  if (netIncome <= 15000)
  {
    taxOwed = FIRST * netIncome / 100;
  }
  else if (netIncome > 15000 && netIncome <= 40000)
  {
    taxOwed = (SECOND / 100 * (netIncome - 15000)) + TAX2;
  }
  else
  {
    taxOwed = (THIRD / 100 * (netIncome - 40000)) + TAX3;
  }

  cout << taxOwed << endl;

}
