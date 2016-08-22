#include <iostream>
#include <iomanip>
using namespace std;

void initialize(int& x, int& y, char& z);
void getHoursRate(double& hours, double& rate);
double payCheck(double hours, double rate);
void printCheck(double hours, double rate);
void funcOne(int& x, int y);
void nextChar(char& z);

int main()
{
  int x, y;
  char z;
  double rate, hours;
  double amount;

  initialize(x, y, z);
  cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
  getHoursRate(hours, rate);
  cout << "hours: " << hours << ", rate: " << rate << endl;
  amount = payCheck(hours, rate);
  cout << "paycheck amount: " << amount << endl;
  printCheck(hours, rate);
  funcOne(x, y);
  cout << "after funcOne(): x = " << x << ", y = " << y << endl;
  nextChar('M');
  cout << "z = " << z << endl;

  return 0;
}  // end main function;

void initialize(int& x, int& y, char& z)
{
  x = 0;
  y = 0;
  z = ' ';
} // end initialize function;

void getHoursRate(double& hours, double& rate)
{
  cout << "Enter the number of hours worked: ";
  cin >> hours;
  cout << "Enter the rate per hour: ";
  cin >> rate;
} // end getHoursRate function;

double payCheck(double hours, double rate)
{
  double amount;
  double hoursOvertime;
  double overtimeRate = rate * 1.5;

  cout << fixed << showpoint << setprecision(2);

  if (hours <= 40)
  {
    amount = hours * rate;
    return amount;
  }
  else
  {
    hoursOvertime = hours - 40;
    amount = 40 * rate + hoursOvertime * overtimeRate;
    return amount;
  }
} // end payCheck function;

void printCheck(double hours, double rate)
{
  cout << "Hours worked: " << hours << endl;
  cout << "Rate: $" << rate << endl;

  cout << "Pay check amount: $" << payCheck(hours, rate) << endl;
} // end printCheck function;


void funcOne(int& x, int y)
{
  int num;
  cout << "Enter a number: ";
  cin >> num;

  x = 2 * x + y - num;
  cout << "inside funcOne(): x = " << x << ", y = " << y << ", num = " << num;
  cout << endl;
} // end funcOne function;


void nextChar(char& ch)
{
  char z;
  z = ch;
} // end nextChar function;
