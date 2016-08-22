#include <iostream>
#include "personType.h"

using namespace std;

void personType::setName(string first, string last)
{
  firstName = first;
  lastName = last;
}

void personType::print() const
{
  cout << firstName << " " << lastName;
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
