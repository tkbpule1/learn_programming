#include <iostream>
#include <fstream>
#include "studentType.h"

const int MAX_NO_STUDENTS = 10;

void getStudentData(std::ifstream& infile, studentType studentList[],
                                    int numberOfStudents);
void printGradeReports(std::ofstream& outfile, studentType studentList[],
                                    int numberOfStudents, double tuitionRate);



int main()
{
  studentType studentList[MAX_NO_STUDENTS];

  int noOfStudents;
  double tuitionRate;
  std::ifstream infile;
  std::ofstream outfile;

  infile.open("/home/tim/Desktop/cpp/ch13examples/ch13progEx/stData.txt");
  if (!infile)
  {
    std::cout << "Input Error" << std::endl;
    return 1;
  }

  outfile.open("/home/tim/Desktop/cpp/ch13examples/ch13progEx/stDataOut.txt");

  infile >> noOfStudents; // get the number of students;
  infile >> tuitionRate;  // get the tuition rate;


  getStudentData(infile, studentList, noOfStudents);
  printGradeReports(outfile, studentList, noOfStudents, tuitionRate);


  return 0;
}


void getStudentData(std::ifstream& infile, studentType studentList[],
                                    int numberOfStudents)
{
  std::string first;  // Variable to store the first name;
  std::string last;   // Variable to store the last name;
  int ID;             // variable to store the student id;
  int noOfCourses;    // variable to store the number of courses;
  char isPaid;        // variable to store Y/N, is tuition paid;
  bool isTuitionPaid; // variable to store true/false;
  std::string cName;  // variable to store the course name;
  std::string cNo;    // variable to store the course number;
  int credits;        // variable to store the course credit hours;
  courseType courses[6];  // array of objects to store the course information;
  char cGrades[6];        // array to store the course grades;
  int count;          // loop control variable;
  int i;              // loop control variable;



  for (count = 0; count < numberOfStudents; count++)
  {
    infile >> first >> last >> ID >> isPaid;

    if (isPaid == 'Y')
    {
      isTuitionPaid = true;
    }
    else
    {
      isTuitionPaid = false;
    }

    infile >> noOfCourses;

    for (i = 0; i < noOfCourses; i++)
    {
      infile >> cName >> cNo >> credits >> cGrades[i];

      courses[i].setCourseInfo(cName, cNo, credits);
    }

    studentList[count].setInfo(first, last, ID, noOfCourses,
                              isTuitionPaid, courses, cGrades);

  } // end for loop
} // end getStudentData;

void printGradeReports(std::ofstream& outfile, studentType studentList[],
                                    int numberOfStudents, double tuitionRate)
{
  int count;

  for (count = 0; count < numberOfStudents; count++)
  {
    studentList[count].print(outfile, tuitionRate);
  }
}
