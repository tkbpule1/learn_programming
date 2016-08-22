#include <iostream>
#include <iomanip>
#include "studentType.h"


using namespace std;




void studentType::setInfo(string first, string last, int id,
                      int numCourses, bool isPaid, courseType courses[],
                      char cGrades[])
{
  setName(first, last);

  stId = id;

  isTuitionPaid = isPaid;

  numberOfCourses = numCourses;

  for (int i = 0; i < numberOfCourses; i++)
  {
    coursesEnrolled[i] = courses[i];
    courseGrades[i] = cGrades[i];
  }

  sortCourses();
}


void studentType::print(ostream& out, double tuitionRate) const
{
  out << "Student Name: " << getFirstName() << " " << getLastName() << endl;

  out << "Student ID: " << stId << endl;

  out << "Number of courses enrolled: " << numberOfCourses << endl;
  out << endl;

  out << setw(12) << "Course No" << setw(15) << "Course Name"
      << setw(10) << "Credits" << setw(6) << "Grade" << endl;
  out << endl;

  out << right;
  for (int i = 0; i < numberOfCourses; i++)
  {
    coursesEnrolled[i].print(out);

    if (isTuitionPaid)
    {
      out << setw(9) << courseGrades[i] << endl;
    }
    else
    {
      out << setw(10) << "***" << endl;
    }
  }

  out << endl;

  out << "Total number of credit hours: " << getHoursEnrolled() << endl;

  out << fixed << showpoint << setprecision(2);

  if (isTuitionPaid)
  {
    out << "Mid-Semester GPA: " << getGpa() << endl;
  }
  else
  {
    out << "*** Grades are being held for not paying the tuition. ***";
    out << endl;
    out << "Amount Due: $" << billingAmount(tuitionRate) << endl;
  }

  out << "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*";
  out << endl << endl;
}

int studentType::getHoursEnrolled() const
{
  int totalCredits = 0;

  for (int i = 0; i < numberOfCourses; i++)
  {
    totalCredits += coursesEnrolled[i].getCredits();
  }

  return totalCredits;
}

double studentType::billingAmount(double tuitionRate) const
{
  return tuitionRate * getHoursEnrolled();
}

double studentType::getGpa() const
{
  double sum;

  for (int i = 0; i < numberOfCourses; i++)
  {
    switch (courseGrades[i])
    {
      case 'A':
        sum += coursesEnrolled[i].getCredits() * 4;
        break;

      case 'B':
        sum += coursesEnrolled[i].getCredits() * 3;
        break;

      case 'C':
        sum += coursesEnrolled[i].getCredits() * 2;
        break;

      case 'D':
        sum += coursesEnrolled[i].getCredits() * 1;
        break;

      case 'F':
        sum += coursesEnrolled[i].getCredits() * 0;
        break;

      default:
        cout << "Invalid Course Grade" << endl;
    }
  }

  return sum / getHoursEnrolled();
}

void studentType::sortCourses()
{
  int i, j;
  int minIndex;
  courseType temp;
  char tempGrade;
  string course1;
  string course2;

  for (i = 0; i < numberOfCourses; i++)
  {
    minIndex = i;

    for (j = 0; j < numberOfCourses; j++)
    {
      course1 = coursesEnrolled[minIndex].getCourseNo();
      course2 = coursesEnrolled[j].getCourseNo();

      if (course1 > course2)
      {
        minIndex = j;
      }
    }// end inner for loop

    temp = coursesEnrolled[minIndex];
    coursesEnrolled[minIndex] = coursesEnrolled[i];
    coursesEnrolled[i] = temp;

    tempGrade = courseGrades[minIndex];
    courseGrades[minIndex] = courseGrades[i];
    courseGrades[i] = tempGrade;
  } // end outer for loop
}

studentType::studentType()
{
  numberOfCourses = 0;
  stId = 0;
  isTuitionPaid = false;

  for (int i = 0; i < 6; i++)
  {
    courseGrades[i] = '*';
  }
}
