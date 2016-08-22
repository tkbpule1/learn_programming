#ifndef s_test
#define s_test

#include "personType.h"
#include "courseType.h"


class studentType : public personType
{
public:
  void setInfo(std::string first, std::string last, int id, int numCourses,
                bool isTuitionPaid, courseType courses[], char courseGrades[]);

  void print(std::ostream& outFile, double tuitionRate) const;

  int getHoursEnrolled() const;
  // Function to return credit hours
  // Postcondition: The total number of credit hours is calculated and returned;

  double getGpa() const;
  // Function to return the Gpa;
  // Postcondition: The gpa is calculated and returned;

  double billingAmount(double tuitionRate) const;
  // Function to return the tuition fees;
  // Postcondition: The billing amount is calculated and returned;

  studentType();
  // Default constructor;

private:
  void sortCourses();
  // Function to sort the courses;
  // Postcondition: The array coursesEnrolled is sorted.
  //                For each course there is a corresponding grade stored in
  //                  courseGrades[]; Therefore, when coursesEnrolled[] is
  //                  sorted, the corresponding entries in courseGrades[]
  //                  is adjusted.

  int stId;
  int numberOfCourses;

  bool isTuitionPaid;

  courseType coursesEnrolled[6];
  char courseGrades[6];

};

#endif
