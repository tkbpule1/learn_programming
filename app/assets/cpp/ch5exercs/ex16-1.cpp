#include <iostream>

using namespace std;

int main()
{
  int students;
  int numLockers;
  int lockerNum;
  int numClosed;
  int numOpen;

  cout << "Enter the number of lockers: ";
  cin >> numLockers;
  numClosed = numLockers;

  for (students = 1; students <= numLockers; students++)
  {
    for (lockerNum = 1; lockerNum <= numLockers; lockerNum++)
    {
      if (students * students == lockerNum)
      {
        numClosed--;
      }
    }
  }

  numOpen = numLockers - numClosed;
  cout << "The number of open lockers: " << numOpen << endl;
  cout << "The number of closed lockers: " << numClosed << endl;
  return 0;
}
