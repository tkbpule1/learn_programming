#include <iostream>
#include <string>
#include "ex9.h"

using namespace std;

int main()
{
	string first;
	string last;

	personType student("Bubby", "Arora");

	student.print();

	student.setName("Susan", "Gilbert");

	student.print();

	return 0;
}
