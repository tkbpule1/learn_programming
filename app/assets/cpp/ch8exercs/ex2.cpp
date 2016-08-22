#include <iostream>
#include <iomanip>
#include <string>

namespace constants
{
  const double Rbase = 10.00;
  const int Rmins = 50;
  const double RCostPerMin = 0.20;
  const double Pbase = 25.00;
  const int PDayMins = 75;
  const double PDayCostPerMin = 0.10;
  const int PNightMins = 100;
  const double PNightCostPerMin = 0.05;
}

using namespace constants;
using namespace std;

enum accountType { regular, premium };
enum timeOfDay { day, night };

accountType getServiceCode();
timeOfDay getPremiumTime();
int getAccountNumber();
double getMins();
double premiumCost(timeOfDay t, int minutes);
double regularCost(int minutes);
void premiumOutput(double totalCost, timeOfDay t, int accountNum, int mins);
void regularOutput(double totalCost, int accountNum, int mins);
void displayAccNum(int accountNum);
void displayMins(int mins);

int main()
{
  double cost;
  int mins;
  int accountNum;
  timeOfDay t;
  accountType type;

  cout << fixed << showpoint << setprecision(2);

  accountNum = getAccountNumber();
  mins = static_cast<int>(getMins() + 0.99);

  type = getServiceCode();

  if (type == regular)
  {
    cost = regularCost(mins);
    regularOutput(cost, accountNum, mins);
  }
  else
  {
    t = getPremiumTime();
    cost = premiumCost(t, mins);
    premiumOutput(cost, t, accountNum, mins);
  }

  return 0;
}             // end main function

int getAccountNumber()
{
  bool good = false;
  int accountNum;
  cout << "Enter your account number: ";
  cin >> accountNum;

  if (cin)
  {
    while (good == false)
    {
      if (accountNum > 0 && accountNum <= 10000)
      {
        good = true;
        return accountNum;
      }
      else
      {
        cout << "You entered an invalide account number" << endl;
        cout << "Enter your account number: ";
        cin >> accountNum;
      }
    }
  }
  else
  {
    return 1;
  }

}

accountType getServiceCode()
{
  char code;
  bool validCode = false;
  accountType type;

  cout << "Enter your service code(r,R,p,P): ";
  cin >> code;

  while (validCode == false)
  {
    if (code == 'r' || code == 'R' || code == 'p' || code == 'P')
    {
      validCode = true;
    }
    else
    {
      cout << "You entered an invalid code." << endl;
      cout << "Enter your service code: ";
      cin >> code;
    }
  }

  switch(code)
  {
    case 'r':
    case 'R':
      type = regular;
      break;
    case 'p':
    case 'P':
      type = premium;
      break;
  }

  return type;
}

timeOfDay getPremiumTime()
{
  char t;
  timeOfDay tOfDay;
  bool validtime = false;

  cout << "Enter whether the service was used during the day or at "
        << "night(d,D,n,N): ";
  cin >> t;

  while (validtime == false)
  {
    if (t == 'd' || t == 'D' || t == 'n' || t == 'N')
    {
      validtime = true;
    }
    else
    {
      cout << "You entered an invalid time." << endl;
      cout << "Enter your time: ";
      cin >> t;
    }
  }

  switch(t)
  {
    case 'd':
    case 'D':
      tOfDay = day;
      break;
    case 'n':
    case 'N':
      tOfDay = night;
      break;
  }

  return tOfDay;
}

double getMins()
{
  double mins;
  bool good = false;

  cout << "Enter the number of minutes you used this service: ";
  cin >> mins;

  while (good == false)
  {
    if (mins > 0 && mins <= 10000)
    {
      good = true;
      return mins;
    }
    else
    {
      cout << "You entered an invalide number of minutes" << endl;
      cout << "Enter the number of minutes you used this service: ";
      cin >> mins;
    }
  }
}

double premiumCost(timeOfDay t, int mins)
{
  double cost;

  if (t == day)
  {
    if (mins <= PDayMins)
    {
      cost = Pbase;
    }
    else
    {
      cost = Pbase + (PDayCostPerMin * (mins - PDayMins));
    }
  }
  else
  {
    if (mins <= PNightMins)
    {
      cost = Pbase;
    }
    else
    {
      cost = Pbase + (PNightCostPerMin * (mins - PNightMins));
    }
  }
  return cost;
}

double regularCost(int minutes)
{
  double cost;

  if (minutes <= Rmins)
  {
    cost = Rbase;
  }
  else
  {
    cost = Rbase + (RCostPerMin * (minutes - Rmins));
  }
  return cost;
}

void premiumOutput(double totalCost, timeOfDay t, int accountNum, int mins)
{
  cout << endl;

  displayAccNum(accountNum);
  cout << "You have a premium account" << endl;

 displayMins(mins);

  if (t == day)
  {
    cout << "You used the services during the day" << endl;
  }
  else
  {
    cout << "You used the services at night" << endl;
  }
  cout << "Your total cost for the service is: $" << totalCost << endl;
}

void regularOutput(double totalCost, int accountNum, int mins)
{
  cout << endl;

  displayAccNum(accountNum);
  cout << "You have a regular account" << endl;


  displayMins(mins);

  cout << "Your total cost for the service is: $" << totalCost << endl;
}

void displayAccNum(int accountNum)
{
  cout << "Your account number: " << accountNum << endl;
}

void displayMins(int mins)
{
  cout << "You used " << mins << " minutes." << endl;
}
