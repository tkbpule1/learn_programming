#include <iostream>
#include <string>
#include "ex9.h"


using namespace std;

void personType::print() const
{
	cout << firstName << " " << lastName << endl;
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

	// Constructor
personType::personType(string first, string last)
{
	firstName = first;
	lastName = last;
}
