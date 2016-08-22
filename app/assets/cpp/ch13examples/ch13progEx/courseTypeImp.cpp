#include <iostream>
#include <iomanip>
#include "courseType.h"


using namespace std;

void courseType::setCourseInfo(string cName, string num, int credits)
{
  courseName = cName;
  courseNo = num;
  courseCredits = credits;
}

void courseType::print(ostream& outFile) const
{
  outFile << left;
  outFile << setw(12) << courseNo << setw(15) << courseName;
  outFile << right;
  outFile << setw(4) << courseCredits;
}

int courseType::getCredits() const
{
  return courseCredits;
}

string courseType::getCourseName() const
{
  return courseName;
}

string courseType::getCourseNo() const
{
  return courseNo;
}

courseType::courseType(string cName, string num, int credits)
{
  courseName = cName;
  courseNo = num;
  courseCredits = credits;
}
