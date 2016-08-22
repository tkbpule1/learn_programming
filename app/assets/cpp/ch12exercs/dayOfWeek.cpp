#include <iostream>
#include <string>
#include "dayOfWeek.h"


int main()
{
  dayType weekDay;
  
  std::string next;
  std::string previous;
  std::string nthDay;
  std::string day;


  weekDay.setDay();

  weekDay.print();

  day = weekDay.returnDOW();
  std::cout << "day: " << day << std::endl;

  next = weekDay.returnNext();
  std::cout << "next day: " << next << std::endl;

  previous = weekDay.returnPrevious();
  std::cout << "previous day: " << previous << std::endl;

  nthDay = weekDay.returnNthDay();
  std::cout << "nth day: " << nthDay << std::endl;

  return 0;
}
