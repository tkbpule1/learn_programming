#include <iostream>

using namespace std;

void printStars(int blanks, int starsInLine);

int main()
{
  int noOfLines;
  int counter;
  int noOfBlanks;

  cout << "Enter the number of lines to be printed: ";
  cin >> noOfLines;
  cout << endl;

  noOfBlanks = 40;

  for (counter = 1; counter <= noOfLines; counter++)
  {
    printStars(noOfBlanks, counter);
    noOfBlanks--;
  }

  return 0;
}

void printStars(int blanks, int starsInLine)
{
  int count;

  for (count = 1; count <= blanks; count++)
  {
    cout << ' ';
  }
  for (count = 1; count <= starsInLine; count++)
  {
    cout << "# ";
  }
  cout << endl;
}
