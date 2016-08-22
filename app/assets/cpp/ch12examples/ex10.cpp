#include <iostream>
#include "ex10.h"

using namespace std;

int main()
{
	illustrate one(3);
  illustrate two(5);


  cout << endl << endl;



  cout << "After one(3) && two(3): " << endl;
  one.print();
  two.print();
  cout << endl;

  cout << "increment y using illustrate::incrementY()" << endl;
  illustrate::incrementY();

  cout << "increment count using illustrate::count++" << endl;
  illustrate::count++;

  cout << "one.print(): " << endl;
  one.print();

  cout << "two.print(): " << endl;
  two.print();

  cout << endl;




  cout << "increment y using * one.incrementY() * && one.setX(8)" << endl;
  
  one.incrementY();

  one.setX(8);

  cout << "one.print(): " << endl;
  one.print();

  cout << "two.print(): " << endl;
  two.print();

  cout << endl;



  cout << "increment y using * two.incrementY() * && two.setX(23)" << endl;
  two.incrementY();

  two.setX(23);

  cout << "one.print(): " << endl;
  one.print();

  cout << "two.print(): " << endl;
  two.print();

  cout << endl;



  cout << endl << endl;



	return 0;
}
