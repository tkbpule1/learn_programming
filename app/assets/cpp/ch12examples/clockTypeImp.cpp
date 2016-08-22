#include <iostream>
#include "clockType.h"

using namespace std;

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

void clockType::printTime() const
{
  if (hr < 10)
  {
    std::cout << "0";
  }
  std::cout << hr << ":";

  if (min < 10)
  {
    std::cout << "0";
  }
  std::cout << min << ":";

  if (sec < 10)
  {
    std::cout << "0";
  }
  std::cout << sec;
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

void clockType::incrementMinutes()
{
  min++;
  if (min > 59)
  {
    min = 0;
    incrementHours();
  }
}

void clockType::incrementHours()
{
  hr++;
  if (hr > 23)
  {
    hr = 0;
  }
}

bool clockType::equalTime(const clockType& otherClock) const
{
  return (hr == otherClock.hr &&
          min == otherClock.min &&
          sec == otherClock.sec);
}

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

clockType::clockType()
{
  hr = 0;
  min = 0;
  sec = 0;
}
