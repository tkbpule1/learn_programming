#include <iostream>
#include "personType.h"

void personType::print() const
{
  std::cout << firstName << ' ' << middleName << ' ' << lastName;
  std::cout << std::endl;
}

void personType::setName(std::string first, std::string last)
{
  firstName = first;
  lastName = last;
}

void personType::setFirstName(std::string first)
{
  firstName = first;
}

void personType::setLastName(std::string last)
{
  lastName = last;
}

void personType::setMiddleName(std::string middle)
{
  middleName = middle;
}

std::string personType::getFirstName() const
{
  return firstName;
}

std::string personType::getLastName() const
{
  return lastName;
}

bool personType::compareFirst(std::string first)
{
  bool same = false;

  if (first == firstName)
  {
    same = true;
    std::cout << "true" << std::endl;
  }
  else
  {
    std::cout << "false" << std::endl;
  }

  std::cout << same << std::endl;

  return same;
}

bool personType::compareLast(std::string last)
{
  bool same = false;

  if (last == lastName)
  {
    same = true;
    std::cout << "true" << std::endl;
  }
  else
  {
    std::cout << "false" << std::endl;
  }
  
  std::cout << same << std::endl;

  return same;
}

personType::personType(std::string first, std::string middle, std::string last)
{
 firstName = first;
 middleName = middle;
 lastName = last;
}
