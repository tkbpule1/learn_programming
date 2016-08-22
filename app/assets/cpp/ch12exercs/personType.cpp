#include <iostream>
#include "personType.h"


int main()
{
  std::string first;
  std::string last;

  personType student;

  student.print();

  student.setName("Mars", "Venus");

  student.setMiddleName("Odin");

  student.print();

  student.setFirstName("Jupiter");
  student.setLastName("Apollo");

  student.print();

  first = student.getFirstName();
  std::cout << first << std::endl;

  last = student.getLastName();
  std::cout<< last << std::endl;

  student.compareFirst("Mars");

  student.compareLast("Apollo");





  return 0;
}
