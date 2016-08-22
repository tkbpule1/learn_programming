#include <iostream>
#include "operatorOverload.h"

using namespace std;

int main()
{
  rectangleType myRectangle(23, 45);
  rectangleType yourRectangle;
  rectangleType herRectangle;


  cout << "myRectangle: " << myRectangle << endl;

  cout << "Enter the length and width of the rectangle: ";
  cin >> yourRectangle;

  cout << "yourRectangle: " << yourRectangle << endl;

  cout << "myRectangle + yourRectangle = "
       << myRectangle + yourRectangle
       << endl;

  cout << "herRectangle = myRectangle: ";
  herRectangle = myRectangle;
  cout << herRectangle << endl;

  cout << "myRectangle * yourRectangle = "
       << myRectangle * yourRectangle << endl;

  if (herRectangle == myRectangle)
  {
    cout << "herRectangle and myRectangle are equal!" << endl;
  }

  else
  {
    cout << "herRectangle and myRectangle are NOT equal!" << endl;
  }

  if (yourRectangle != myRectangle)
  {
    cout << "yourRectangle and myRectangle are NOT equal!" << endl;
  }

  else
  {
    cout << "yourRectangle and myRectangle are equal!" << endl;
  }


  return 0;
}
