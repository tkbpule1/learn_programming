#include <iostream>
using namespace std;

struct nameInfo
{
  string firstName;
  string middleName;
  string lastName;
};

struct addressInfo
{
  string street;
  string city;
  string state;
  string zip;
};

struct dateInfo
{
  int month;
  int day;
  int year;
};

struct contactInfo
{
  string phone;
  string cellPhone;
  string fax;
  string email;
};

struct employee
{
  nameInfo name;
  string empID;
  addressInfo address;
  dateInfo hireDate;
  dateInfo quitDate;
  contactInfo contact;
  string deptID;
  double salary;
};

struct customer
{
  nameInfo customerName;
  string customerID;
  addressInfo customerAddress;
  contactInfo customerContact;
};

int main()
{
  employee newEmployee;
  employee currentEmployees[10];
  customer newCustomer;
  customer currentCustomers[10];

  newEmployee.name.firstName = "Tim";
  currentEmployees[0].name.firstName = newEmployee.name.firstName;
  newEmployee.name.middleName = "Keli'i";
  currentEmployees[0].name.middleName = newEmployee.name.middleName;
  newEmployee.name.lastName = "Beyer";
  currentEmployees[0].name.lastName = newEmployee.name.lastName;
  newEmployee.address.street = "7823 Chesapeake Rd";
  currentEmployees[0].address.street = newEmployee.address.street;
  newEmployee.address.city = "Pasadena";
  currentEmployees[0].address.city = newEmployee.address.city;
  newEmployee.address.state = "Maryland";
  currentEmployees[0].address.state = newEmployee.address.state;
  newEmployee.address.zip = "21122";
  currentEmployees[0].address.zip = newEmployee.address.zip;
  newEmployee.hireDate.month = 6;
  currentEmployees[0].hireDate.month = newEmployee.hireDate.month;
  newEmployee.hireDate.day = 1;
  currentEmployees[0].hireDate.day = newEmployee.hireDate.day;
  newEmployee.hireDate.year = 2016;
  currentEmployees[0].hireDate.year = newEmployee.hireDate.year;
  newEmployee.contact.phone = "N/A";
  currentEmployees[0].contact.phone = newEmployee.contact.phone;
  newEmployee.contact.cellPhone = "443-891-4644";
  currentEmployees[0].contact.cellPhone = newEmployee.contact.cellPhone;
  newEmployee.contact.fax = "N/A";
  currentEmployees[0].contact.fax = newEmployee.contact.fax;
  newEmployee.contact.email = "pule1@tutanota.com";
  currentEmployees[0].contact.email = newEmployee.contact.email;
  newEmployee.empID = "bey1117";
  currentEmployees[0].empID = newEmployee.empID;
  newEmployee.deptID = "bey184";
  currentEmployees[0].deptID = newEmployee.deptID;
  newEmployee.salary = 75125.00;
  currentEmployees[0].salary = newEmployee.salary;

  cout << currentEmployees[0].name.middleName << endl;
  cout << currentEmployees[0].salary << endl;
  cout << currentEmployees[0].contact.email << endl;


  return 0;
}
