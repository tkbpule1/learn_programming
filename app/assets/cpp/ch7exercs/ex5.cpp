/*
  Print the day number of the year.
  Given: 1-1-2016 is day 1.
  A year is a leap year if it is divisible by 4, but not 100; or by 400.
*/

#include <iostream>
using namespace std;

bool leapYear(int& year);
void getInput(int& month, int& day, int& year);
void dayOfYear(int month, int& day, int year);

int main()
{
  int month;
  int day;
  int year;
  bool leap = false;

  getInput(month, day, year);
  leapYear(year);
  dayOfYear(month, day, year);
  if (leapYear(year) == true)
  {
    cout << "Leap Year!" << endl;
  }
  cout << "day of the year: " << day << endl;

  return 0;
} // end main function;

bool leapYear(int& year)
{
  if (year % 4 == 0 && year % 100 != 0)
  {
    return true;
  }
  else if (year % 400 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void getInput(int& month, int& day, int& year)
{
  char ch;
  int dayOfYear;

  cout << "Enter the date (1-1-2015): ";
  cin >> month;
  cin.get(ch);
  cin >> day;
  cin.get(ch);
  cin >> year;
}

void dayOfYear(int month, int& day, int year)
{
  int dayOfYear;
  int jan = 31;
  int feb = jan + 28;
  int march = feb + 31;
  int april = march + 30;
  int may = april + 31;
  int june = may + 30;
  int july = june + 31;
  int aug = july + 31;
  int sept = aug + 30;
  int oct = sept + 31;
  int nov = oct + 30;

    switch (month)
    {
      case 1:
        dayOfYear = day;
        break;
      case 2:
        dayOfYear = jan + day;
        break;
      case 3:
        dayOfYear = feb + day;
        break;
      case 4:
        dayOfYear = march + day;
        break;
      case 5:
        dayOfYear = april + day;
        break;
      case 6:
        dayOfYear = may + day;
        break;
      case 7:
        dayOfYear = june + day;
        break;
      case 8:
        dayOfYear = july + day;
        break;
      case 9:
        dayOfYear = aug + day;
        break;
      case 10:
        dayOfYear = sept + day;
        break;
      case 11:
        dayOfYear = oct + day;
        break;
      case 12:
        dayOfYear = nov + day;
        break;
    } // end switch;
  if (leapYear(year) == true && month > 2)
  {
    dayOfYear = dayOfYear + 1;
  } // end if;
  day = dayOfYear;
} // end dayOfYear function;
