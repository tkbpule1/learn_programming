#include <iostream>
#include <string>
#include "dayOfWeek.h"

void dayType::setDay()
{
  std::cout << "Enter the day of the week(M, T, W, Th, F, Sat, Sun): ";
  std::cin >> d;
}

void dayType::print() const
{
  std::cout << "The day is: " << d << std::endl;
}

std::string dayType::returnDOW() const
{
  return d;
}

std::string dayType::returnNext()
{
  bool found = false;

  for (int i = 0; i < 7; i++)
  {
    if (array[i] == d)
    {
      found = true;
      dow = i;
    }
  }

  if (found)
  {
    if (dow == 6)
    {
      return array[0];
    }
    else
    {
      return array[dow + 1];
    }
  }
  else
  {
    std::cout << "Invalid Input!" << std::endl;
  }
}

std::string dayType::returnPrevious() const
{
  if (dow == 0)
  {
    return array[6];
  }
  else
  {
    return array[dow - 1];
  }
}


std::string dayType::returnNthDay()
{
  int index;

  std::cout << "Enter the number of days after the day of the week you are ";
  std::cout << "looking for: ";

  std::cin >> num;

  index = ((dow + num + 1) % 7) - 1;

  return array[index];
}

dayType::dayType()
{
  array[0] = "Sun";
  array[1] = "M";
  array[2] = "T";
  array[3] = "W";
  array[4] = "Th";
  array[5] = "F";
  array[6] = "Sat";

  dow = 0;
  num = 0;
}
