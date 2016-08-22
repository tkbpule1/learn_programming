#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
  double maleSum, femaleSum;
  // double fgpa, mgpa;
  double gpa;
  double avgMgpa, avgFgpa;
  int x, o;
  char gender, ch; // a is for new line

  ifstream infile;

  infile.open("/home/tim/Desktop/cpp/ch5exercs/ex17.txt");
  if (!infile)
  {
    cout << "Cannot open the input file" << endl;
    return 1;
  }

  maleSum = 0;
  femaleSum = 0;
  x = 0;
  o = 0;

  while (infile)
  {
    cout << fixed << showpoint << setprecision(2);

    infile >> gender;

    switch (gender)
    {
      case 'm':
        infile >> gpa;
        maleSum += gpa;
        ++x;
        break;

      case 'f':
        infile >> gpa;
        femaleSum += gpa;
        o++;
        break;
    }
    gender = 'a';
  }

  avgMgpa = maleSum / x;
  cout << "Average male GPA: " << avgMgpa << endl;

  avgFgpa = femaleSum / o;
  cout << "Average female GPA: " << avgFgpa << endl;

  return 0;
}
