// Classifying Numbers;
#include <iostream>
#include <iomanip>

using namespace std;

const int N = 20;

// Function Prototypes
void initialize(int& zeroCount, int& oddCount, int& evenCount);
void getNumber(int& num);
void classifyNumber(int num, int& zeroCount, int& oddCount, int& evenCount);
void printResults(int zeroCount, int oddCount, int evenCount);

int main()
{
  // Variable declarations
  int counter;  // loop control variable;
  int number;   // variable to store new number;
  int zeros;    // variable to store # of zeros;
  int odds;     // variable to store # of odd nums;
  int evens;    // variable to store # of even nums;

  // Call initialize function;
  initialize(zeros, odds, evens);

  // Ask user for numbers;
  cout << "Please enter " << N << " numbers: ";

  // Get and Classify numbers;
  for (counter = 1; counter <= N; counter++)
  {
    // Get numbers;
    getNumber(number);
    // classify numbers;
    classifyNumber(number, zeros, odds, evens);
  }

  cout << endl;

  // Print results;
  printResults(zeros, odds, evens);

  return 0;
} // End main function;

// Initialize function;
void initialize(int& zeroCount, int& oddCount, int& evenCount)
{
  // Initialize variables to 0;
  zeroCount = 0;
  oddCount = 0;
  evenCount = 0;
} // end of initialize function;

// getNumber fucntion;
void getNumber(int& num)
{
  cin >> num;
} // end getNumber function;

// classifyNumber function;
void classifyNumber(int num, int& zeroCount, int& oddCount, int& evenCount)
{
  if (num == 0)
  {
    zeroCount++;
  }

  if (num != 0)
  {
    switch (num % 2)
    {
      case 0:
        evenCount++;
        break;
      case 1:
      case -1:
        oddCount++;
        break;
    } // end switch;
  } // end if(num != 0);
} // end classifyNumber;

// printResults function;
void printResults(int zeroCount, int oddCount, int evenCount)
{
  cout << "There are " << zeroCount << " zeros, " << oddCount
      << " odd numbers, and " << evenCount << " even numbers." << endl;
} // end printResults function;
