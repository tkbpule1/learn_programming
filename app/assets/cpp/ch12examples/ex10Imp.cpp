#include <iostream>
#include "ex10.h"
using namespace std;

int illustrate::count = 0;
int illustrate::y = 0;

void illustrate::print() const
{
	cout << "x = " << x << ", y = " << y << ", count = " << count;
	cout << endl;
}

void illustrate::setX(int a)
{
	x = a;
}

void illustrate::incrementY()
{
	y++;
}

illustrate::illustrate(int a)
{
	x = a;
}
