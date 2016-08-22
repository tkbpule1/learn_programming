#include <iostream>

using namespace std;

class personType
{
public:
  void print() const;
  void setName(std::string first, std::string last);
  std::string getFirstName() const;
  std::string getLastName() const;
  personType(std::string first = "", std::string last = "");

private:
  std::string firstName;
  std::string lastName;
};

class dateType
{
public:
  void setDate(int month, int day, int year);
  int getDay() const;
  int getMonth() const;
  int getYear() const;
  void printDate() const;
  dateType(int month = 1, int day = 1, int year = 1990);

private:
  int dMonth;
  int dDay;
  int dYear;
};

class personalInfo
{
public:
  void setPersonalInfo(std::string first, std::string last,
                        int month, int day, int year, int ID);

void printPersonalInfo() const;

personalInfo(std::string first = "", std::string last = "",
              int month = 1, int day = 1, int year = 1990, int ID = 0);

private:
  personType name;
  dateType dob;
  int personID;
};


int main()
{
  personType student;
  dateType dBirth;
  personalInfo info;

  student.setName("Tim", "Beyer");

  student.print();
  cout << endl;

  cout << student.getFirstName() << endl;


  dBirth.setDate(12, 25, 100);

  dBirth.printDate();

  cout << dBirth.getMonth() << endl;

  cout << endl;

  info.setPersonalInfo("Tim", "Beyer", 11, 17, 1987, 123421);

  info.printPersonalInfo();
  cout << endl;



  return 0;
}


void personType::print() const
{
  cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
  firstName = first;
  lastName = last;
}

string personType::getFirstName() const
{
  return firstName;
}

string personType::getLastName() const
{
  return lastName;
}

personType::personType(string first, string last)
{
  firstName = first;
  lastName = last;
}


void dateType::setDate(int month, int day, int year)
{
  dMonth = month;
  dDay = day;
  dYear = year;
}

int dateType::getDay() const
{
  return dDay;
}

int dateType::getMonth() const
{
  return dMonth;
}

int dateType::getYear() const
{
  return dYear;
}

void dateType::printDate() const
{
  cout << dMonth << "-" << dDay << "-" << dYear << endl;
}

dateType::dateType(int month, int day, int year)
{
  dMonth = month;
  dDay = day;
  dYear = year;
}


void personalInfo::setPersonalInfo(string first, string last,
                                    int month, int day, int year, int ID)
{
  name.setName(first, last);
  dob.setDate(month, day, year);
  personID = ID;
}

void personalInfo::printPersonalInfo() const
{
  name.print();
  cout << "'s date of birth is ";
  dob.printDate();
  cout << "and personal ID is " << personID;
}

personalInfo::personalInfo(string first, string last, int month, int day,
                            int year, int ID)
          : name(first, last), dob(month, day, year)
{
  personID = ID;
}
