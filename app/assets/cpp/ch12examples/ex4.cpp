#include <iostream>
#include "clockType.h"

using namespace std;

int main()
{
  clockType myClock;
  clockType yourClock;
  clockType clock1(5, 5, 5);
  clock1.printTime();
  std::cout << std::endl;

  int hours, minutes, seconds;

  myClock.setTime(5, 4, 30);

  std::cout << "myClock: ";
  myClock.printTime();
  std::cout << std::endl;

  std::cout << "yourClock: ";
  yourClock.printTime();
  std::cout << std::endl;

  yourClock.setTime(5, 4, 30);

  std::cout << "After setTime(), yourClock: ";
  yourClock.printTime();
  std::cout << std::endl;

  if (myClock.equalTime(yourClock))
  {
    std::cout << "Both times are eqaul!" << std::endl;
  }
  else
  {
    std::cout << "Times are different" << std::endl;
  }

  std::cout << "Enter hours, minutes, and seconds: ";
  std::cin >> hours >> minutes >> seconds;

  myClock.setTime(hours, minutes, seconds);
  std::cout << "myClock: ";
  myClock.printTime();
  std::cout << std::endl;

  myClock.incrementSeconds();

  std::cout << "After incrementing time by 1 second, myClock: ";
  myClock.printTime();
  std::cout << std::endl;

  myClock.getTime(hours, minutes, seconds);

  std::cout << "hours = " << hours << ", minutes = " << minutes << " and seconds = "
       << seconds << std::endl;

  return 0;
}
