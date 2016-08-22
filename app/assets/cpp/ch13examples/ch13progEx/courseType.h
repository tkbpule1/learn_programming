#ifndef c_test
#define c_test

class courseType
{
public:
  void setCourseInfo(std::string cName, std::string num, int credits);
  // Function to set the course information;
  // Postcondition: courseName = cName; courseNo = num; courseCredits = credits;

  void print(std::ostream& outFile) const;
  // Function to print the course information;
  // Function sends the course info to the output device specified by the
  // parameter outF.
  // If the actual parameter is the object cout, then the output is shown
  // on the standard output device.
  // If the actual parameter is an ofstream variable, then the output is
  // stored in the file specified by the ofstream variable.

  int getCredits() const;
  // Function to return the credit hours;
  // Postcondition: The value of courseCredits is returned;

  std::string getCourseName() const;
  // Function to return the course name;
  // Postcondition: The value of courseName is returned;

  std::string getCourseNo() const;
  // Function to return the course number;
  // Postcondition: The value of courseNo is returned;

  courseType(std::string cName = "", std::string num = "", int credits = 0);
  // Constructor with parameters;
  // The object is initialized according to the parameters;
  // Postcondition: courseName = cName; courseNo = num; courseCredits = credits;


private:
  std::string courseName;
  std::string courseNo;
  int courseCredits;

};

#endif
