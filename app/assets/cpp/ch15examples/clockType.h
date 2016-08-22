#ifndef h_clocktype
#define h_clocktype

#include <iostream>

using namespace std;

class clockType
{
  friend ostream& operator<< (ostream&, const clockType&);
  friend istream& operator>> (istream&, clockType&);

public:
  void setTime(int hours, int minutes, int seconds);
  // Function to set the time;
  // Postcondition: hr = hours; min = minutes; sec = seconds;

  void getTime(int& hours, int& minutes, int& seconds);
  // Function to return the time;
  // Postcondition: hr = hours; min = minutes; sec = seconds;

  clockType operator++();
  // Function to overload the pre-increment operator ++;
  // Postcondition: The time is incremented by one second;

  bool operator== (const clockType& otherClock) const;
  // Function to overload the operator ==;

  bool operator!= (const clockType& otherClock) const;
  // Function to overload the operator !=;

  bool operator<= (const clockType& otherClock) const;
  // Function to overload the operator <=;

  bool operator< (const clockType& otherClock) const;
  // Function to overload the operator <;

  bool operator>= (const clockType& otherClock) const;
  // Function to overload the operator >-;

  bool operator> (const clockType& otherClock) const;
  // Function to overload the operator >;

  clockType(int hours = 0, int minutes = 0, int seconds = 0);
  // Constructor with default parameters;

private:
  int hr;
  int min;
  int sec;
};


// Function to set the time;
void clockType::setTime(int hours, int minutes, int seconds)
{
  if (hours >= 0 && hours < 24)
  {
    hr = hours;
  }
  else
  {
    hr = 0;
  }

  if (minutes >= 0 && minutes < 60)
  {
    min = minutes;
  }
  else
  {
    min = 0;
  }

  if (seconds >= 0 && seconds < 60)
  {
    sec = seconds;
  }
  else
  {
    sec = 0;
  }
}

// Function to return the time;
void clockType::getTime(int& hours, int& minutes, int& seconds)
{
  hours = hr;
  minutes = min;
  seconds = sec;
}

// Function to overload the pre-increment operator ++;
clockType clockType::operator++()
{
  sec++;

  if (sec > 59)
  {
    sec = 0;
    min++;

    if (min > 59)
    {
      min = 0;
      hr++;

      if (hr > 23)
      {
        hr = 0;
      }
    }
  }
  return *this;
}

// Function to overload the operator ==;
bool clockType::operator== (const clockType& otherClock) const
{
  return (hr == otherClock.hr &&
          min == otherClock.min &&
          sec == otherClock.sec);
}

// Function to overload the operator !=;
bool clockType::operator!= (const clockType& otherClock) const
{
  return (hr != otherClock.hr ||
          min != otherClock.min ||
          sec != otherClock.sec);
}

// Function to overload the operator <=;
bool clockType::operator<= (const clockType& otherClock) const
{
  return (hr < otherClock.hr ||
          hr == otherClock.hr && min < otherClock.min ||
          hr == otherClock.hr && min == otherClock.min &&
                                 sec <= otherClock.sec);
}

// Function to overload the operator <;
bool clockType::operator< (const clockType& otherClock) const
{
  return (hr < otherClock.hr &&
          min < otherClock.min &&
          sec < otherClock.sec);
}

// Function to overload the operator >-;
bool clockType::operator>= (const clockType& otherClock) const
{
  return (hr > otherClock.hr ||
          hr == otherClock.hr && min > otherClock.min ||
          hr == otherClock.hr && min == otherClock.min &&
                                 sec >= otherClock.sec);
}

// Function to overload the operator >;
bool clockType::operator> (const clockType& otherClock) const
{
  return (hr > otherClock.hr &&
          min > otherClock.min &&
          sec > otherClock.sec);
}

// Constructor with default parameters;
clockType::clockType(int hours, int minutes, int seconds)
{
  setTime(hours, minutes, seconds);
}


ostream& operator<< (ostream& osObject, const clockType& timeOut)
{
  if (timeOut.hr < 10)
  {
    osObject << '0';
  }
  osObject << timeOut.hr << ':';

  if (timeOut.min < 10)
  {
    osObject << '0';
  }
  osObject << timeOut.min << ':';

  if (timeOut.sec < 10)
  {
    osObject << '0';
  }
  osObject << timeOut.sec;

  return osObject;
}

istream& operator>> (istream& isObject, clockType& timeIn)
{
  char discard;


  isObject >> timeIn.hr;
  isObject.get(discard);

  isObject >> timeIn.min;
  isObject.get(discard);

  isObject >> timeIn.sec;
}



#endif
