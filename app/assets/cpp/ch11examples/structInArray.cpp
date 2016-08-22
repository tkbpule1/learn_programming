#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct employeeType
{
  string firstName;
  string lastName;
  int personalID;
  string deptID;
  double yearlySalary;
  double monthlySalary;
  double paidYearToDate;
  double monthlyBonus;
};

int main()
{
  // declare an array employees of 50 components of type employeeType;
  employeeType employees[50];

  ifstream infile;
  infile.open("/home/tim/Desktop/cpp/ch11examples/employees.txt");
  if(!infile)
  {  return 1;  }

  for (int i = 0; i < 3; i++)
  {
    infile >> employees[i].firstName;
    cout << employees[i].firstName << endl;
    infile >> employees[i].lastName;
    cout << employees[i].lastName << endl;
    infile >> employees[i].personalID;
    cout << employees[i].personalID << endl;
    infile >> employees[i].deptID;
    cout << employees[i].deptID << endl;
    infile >> employees[i].yearlySalary;
    cout << employees[i].yearlySalary << endl;
    infile >> employees[i].monthlyBonus;
    cout << employees[i].monthlyBonus << endl;

    employees[i].monthlySalary = employees[i].yearlySalary / 12;
    employees[i].paidYearToDate = 0;
  }

  double paycheck;

  for (int i = 0; i < 3; i++)
  {
    cout << employees[i].firstName << " "
         << employees[i].lastName << " ";
    paycheck = employees[i].monthlySalary + employees[i].monthlyBonus;
    employees[i].paidYearToDate += paycheck;

    cout << fixed << showpoint << setprecision(2);
    cout << paycheck << endl << endl;

  }

  return 0;
}
