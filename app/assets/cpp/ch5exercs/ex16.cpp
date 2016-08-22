#include <iostream>

using namespace std;


int main()
{
  int students;
  int numLockers; // num of lockers
  int visits = 0;
  int numClosed =  0;
  int lockerNum;
  int numOpen;

  cout << "Enter the number of lockers: ";
  cin >> numLockers;
  numOpen = 0;

  for (int students = 1; students <= numLockers; students++)
  {

      for (lockerNum = 1; lockerNum <= numLockers; lockerNum++)
      {
        if (lockerNum % students == 0 )
        {
          visits++;
          cout << "visits: " << visits << endl;
        }

      } // end inner for loop
      if (visits % 2 == 1)
      {
        numOpen++;
      }
      visits = 0;
    } // end outer for loop


  cout << endl;
  numClosed = numLockers - numOpen;
  cout << "Num open lockers: " << numOpen << endl;
  cout << "Num closed lockers: " << numClosed << endl;



  return 0;
} // end main function
