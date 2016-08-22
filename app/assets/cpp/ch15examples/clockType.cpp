#include <iostream>
#include "clockType.h"

using namespace std;

int main()
{
  clockType myClock(5, 6, 23);
  clockType yourClock;

  cout << endl << endl;

  cout << "myClock: " << myClock << endl;
  cout << "yourClock: " << yourClock << endl;

  cout << "Enter the time (hr:min:sec): ";
  cin >> myClock;

  cout << "The new time of myClock is: ";
  cout << myClock << endl;

  ++myClock;

  cout << "After incrementing myClock: ";
  cout << myClock << endl;

  yourClock.setTime(12, 35, 38);

  cout << "After setting the time of yourClock: ";
  cout << yourClock << endl;

  if (myClock == yourClock)
  {
    cout << "The time of myClock and yourClock are equal." << endl;
  }
  else
  {
    cout << "The time of myClock and yourClock are NOT equal!" << endl;
  }

  if (myClock < yourClock)
  {
    cout << "The time of myClock is less than the time of yourClock!" << endl;
  }
  else
  {
    cout << "The time of myClock is greater than the time of yourClock!";
    cout << endl;
  }


  return 0;
}
