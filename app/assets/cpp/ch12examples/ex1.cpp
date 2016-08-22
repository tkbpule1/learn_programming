#include <iostream>
using namespace std;

class clockType
{
public:
  void setTime(int, int, int);
  void getTime(int&, int&, int&) const;
  void printTime() const;
  void incrementSeconds();
  void incrementMinutes();
  void incrementHours();
  bool equalTime(const clockType&) const;
  clockType(int = 0, int = 0, int = 0); // Constructor with Default Parameters;
  // clockType(); // Default Constructor

private:
  int hr;
  int min;
  int sec;
};

int main()
{
  clockType myClock;
  clockType yourClock;
  clockType clock1(5);
  clock1.printTime();
  cout << endl;

  int hours, minutes, seconds;

  myClock.setTime(5, 4, 30);

  cout << "myClock: ";
  myClock.printTime();
  cout << endl;

  cout << "yourClock: ";
  yourClock.printTime();
  cout << endl;

  yourClock.setTime(5, 4, 30);

  cout << "After setTime(), yourClock: ";
  yourClock.printTime();
  cout << endl;

  if (myClock.equalTime(yourClock))
  {
    cout << "Both times are eqaul!" << endl;
  }
  else
  {
    cout << "Times are different" << endl;
  }

  cout << "Enter hours, minutes, and seconds: ";
  cin >> hours >> minutes >> seconds;

  myClock.setTime(hours, minutes, seconds);
  cout << "myClock: ";
  myClock.printTime();
  cout << endl;

  myClock.incrementSeconds();

  cout << "After incrementing time by 1 second, myClock: ";
  myClock.printTime();
  cout << endl;

  myClock.getTime(hours, minutes, seconds);

  cout << "hours = " << hours << ", minutes = " << minutes << " and seconds = "
       << seconds << endl;

  return 0;
} // end main;

// clockType::clockType()
// {
//   hr = 0;
//   min = 0;
//   sec = 0;
// }

clockType::clockType(int hours, int minutes, int seconds)
{
  if (hours >= 0 && hours <= 24)
  {
    hr = hours;
  }
  else
  {
    hr = 0;
  }

  if (minutes >= 0 && minutes <= 24)
  {
    min = minutes;
  }
  else
  {
    min = 0;
  }

  if (seconds >= 0 && seconds <= 24)
  {
    sec = seconds;
  }
  else
  {
    sec = 0;
  }
}

void clockType::setTime(int hours, int minutes, int seconds)
{
  if (hours >= 0 && hours <= 24)
  {
    hr = hours;
  }
  else
  {
    hr = 0;
  }

  if (minutes >= 0 && minutes <= 60)
  {
    min = minutes;
  }
  else
  {
    min = 0;
  }

  if (seconds >= 0 && seconds <= 60)
  {
    sec = seconds;
  }
  else
  {
    sec = 0;
  }
}

void clockType::getTime(int& hours, int& minutes, int& seconds) const
{
  hours = hr;
  minutes = min;
  seconds = sec;
}


void clockType::incrementHours()
{
  hr++;
  if (hr > 23)
  {
    hr = 0;
  }
}

void clockType::incrementMinutes()
{
  min++;
  if (min > 59)
  {
    min = 0;
    incrementHours();
  }
}

void clockType::incrementSeconds()
{
  sec++;
  if (sec > 59)
  {
    sec = 0;
    incrementMinutes();
  }
}

void clockType::printTime() const
{
  if (hr < 10)
  {
    cout << "0";
  }
  cout << hr << ":";

  if (min < 10)
  {
    cout << "0";
  }
  cout << min << ":";

  if (sec < 10)
  {
    cout << "0";
  }
  cout << sec;
}

bool clockType::equalTime(const clockType& otherClock) const
{
  return (hr == otherClock.hr &&
          min == otherClock.min &&
          sec == otherClock.sec);
}
