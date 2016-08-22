#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

// 2. Mark to following as valid or invalid:
    // int x;
    // int *p;
    // int *q;

  // a. p = q;      Valid;
  // b. *p = 56;    Valid;
  // c. p = x;      Invalid;     p must be a memory location;
  // d. *p = *q;    Valid;
  // e. q = &x;     Valid;
  // f. *p = q;     Invalid;    value of memory location pointed to by p cannot
  //                                        be another memory location;
  // g. x = q;      Invalid;     int variable, x, cannot hold memory location;

  cout << endl << endl;


// 3. What is the output of the following code:
  int x;
  int y;
  int *p = &x;
  int *q = &y;

  *p = 35;
  *q = 98;
  *p = *q;

  cout << "x: " << x << " ;  y: " << y << endl;
  cout << "*p: " << *p << " ; *q: " << *q << endl;

  // OUTPUT:
  // x: 98 ; y: 98
  // *p: 98 ; *q: 98

  cout << endl << endl;


// 4. What is the output of the following code:

  x = 35;
  y = 46;
  p = q;

  p = q;
  *p = 78;

  cout << "x: " << x << " ;  y: " << y << endl;
  cout << "*p: " << *p << " ; *q: " << *q << endl;

  // OUTPUT:
  // x: 35 ; y: 78
  // *p: 78 ; *q: 78


  cout << endl << endl;


// 5. Which of the following statement(s) increments the value of num:

  int num = 6;
  p = &num;

  // a. p++;        Incorrect;
  // b.
  (*p)++;         //Correct;
  // c. num++;      Correct;
  // d. (*num)++;   Incorrect;

  cout << "num: " << num << endl;

  cout << endl << endl;


// 6. What is the output of the following code:


  p = new int;

  q = p;
  *p = 46;
  *q = 39;

  cout << "*p: " << *p << ", " << "*q:" << *q << endl;


  // OUTPUT:
  // *p: 39, *q: 39


  delete p;
  p = NULL;

  cout << endl << endl;


// 7. What is the output of the following code:

  p = new int;
  *p = 43;
  q = p;
  *q = 52;
  p = new int;
  *p = 78;
  q = new int;
  *q = *p;

  cout << "*p: " << *p << ", " << "*q:" << *q << endl;

  // OUTPUT:
  // *p: 78, *q: 78


  delete p;
  p = NULL;
  delete q;
  q = NULL;

  cout << endl << endl;

// 8. What is wrong with the following code:

  p = new int;
  *p = 43;
  q = p;
  *q = 52;

  delete p;
  p = NULL;
  q = NULL;

  cout << "p: " << p << ", " << "q:" << q << endl;

  // ANSWER:
  // Shallow Copy, Thus when q is deleted p is also deleted;
  // OUTPUT:
  // *p: 30760992, *q: 30760992  ** Random Values **


  cout << endl << endl;


// 9. What is the output of the following code:


  p = new int[10];
  q = p;
  *q = 4;
  for (int i = 0; i < 10; i++)
  {
    x = *q;
    q++;
    if (i < 9)
    {
      *q = x + i;
    }
  }
  cout << endl;


  q = q - 10;
  for (int i = 0; i < 10; i++)
  {
    cout << *q << " ";
    q++;
  }
  cout << endl;

  cout << p << " " << q << endl;

  // OUTPUT:
  // 4 4 5 7 10 14 19 25 32 40

  delete [] p;
  p = NULL;
  q = NULL;

  cout << p << " " << q << endl;


  cout << endl << endl;



// 10. What is the output of the following code:

    int *secret;
    int j;

    secret = new int[10];
    secret[0] = 10;

    for (j = 1; j < 10; j++)
    {
      secret[j] = secret[j - 1] + 5;
    }

    for (j = 0; j < 10; j++)
    {
      cout << secret[j] << " ";
    }

    cout << endl;

    // OUTPUT: 10 15 20 25 30 35 40 45 50 55


    delete [] secret;
    secret = NULL;

    cout << endl << endl;


// 11. Explain the difference between Shallow Copy and Deep Copy of data.
/*
  In a Shallow Copy of data, two or more pointers point to the same memory
  space.  In a Deep Copy of data, each pointer has its own copy of the data.
*/




// 12. What is wrong with the following code?

  p = new int[5];
  *p = 2;

  for (int i = 1; i < 5; i++)
  {
    p[i] = p[i - 1] + i;
  }

  q = p;

  // delete [] p;  This statement is too soon.

  for (int j = 0; j < 5; j++)
  {
    cout << q[j] << " ";
  }
  cout << endl;

  delete [] p;
  p = NULL;
  q = NULL;

  cout << endl << endl;




// 13. What is the output of the following code?
  p = new int[5];
  p[0] = 5;

  for (int i = 1; i < 5; i++)
  {
    p[i] = p[i - 1] + 2 * i;
  }

  cout << "Array p: ";
  for (int i = 0; i < 5; i++)
  {
    cout << p[i] << " ";
  }
  cout << endl;

  q = new int[5];

  for (int i = 0; i < 5; i++)
  {
    q[i] = p[4 - i];
  }

  cout << "Array q: ";
  for (int i = 0; i < 5; i++)
  {
    cout << q[i] << " ";
  }
  cout << endl;

  // OUTPUT: p: 5 7 11 17 25
  //         q: 25 17 11 7 5


  cout << endl << endl;



// 14.
/*
   a. Write a statement that delcares table to be a pointer to a pointer of
         type double.
   b. Write statements that create table to be a two-dimensional array of
        5 rows and 7 columns.
*/


  double **table;

  table = new double*[5];

  for (int row = 0; row < 5; row ++)
  {
    table[row] = new double[7];
  }

  for (int row = 0; row < 5; row++)
  {
    for (int col = 0; col < 7; col++)
    {
      table[row][col] = row * col;
    }
  }

  for (int row = 0; row < 5; row++)
  {
    for (int col = 0; col < 7; col++)
    {
      cout << setw(5) << table[row][col];
    }
    cout << endl;
  }

  cout << endl << endl;



// 15. What is the purpose of a copy constructor?
/*
  A copy constructor makes a copy of the actual variable.
  The default copy constructor results in a shallow copy.
  This is the reason for writing a definition of the copy constructor.
*/




// 16. Name three situations when a copy constructor executes?
/*
  1) When an object is declared and initialized using the value of
            another object.
  2) When, as a parameter, an object is passed by value.
  3) When the return value of a function is an object.
*/



/* 17. Name the three things you should do for classes with pointer member
          variables.

      Classes with pointers data members should include:
      1) the destructor,
      2) overload the assignment operator, and
      3) explicitly provide the copy constructor by including it in the class
          definition and providing its definition.

*/




// 18. Suppose you have the following class. what is the output of the
//          statements that follow?

  class classA
  {
  public:
    virtual void print() const
    {
      cout << "classA, x: " << x << endl;
    }

    void doubleNum()
    {
      x = 2 * x;
    }

    classA(int a = 0)
    {
      x = a;
    }

  private:
    int x;
  };

  class classB : public classA
  {
  public:
    void print() const
    {
      classA::print();
      cout << "classB y: " << y << endl;
    }

    void doubleNum()
    {
      classA::doubleNum();
      y = 2 * y;
    }

    classB(int a = 0, int b = 0) : classA(a)
    {
      y = b;
    }

  private:
    int y;

  };

  classA *ptrA;
  classA objectA(2);

  classB objectB(3, 5);

  ptrA = &objectA;
  ptrA->doubleNum();
  ptrA->print();
  cout << endl;

  ptrA = &objectB;

  ptrA->doubleNum();
  ptrA->print();

  cout << endl;

/* OUTPUT:
    classA, x: 4

    classA, x: 6
    classB, y: 5

    The reason y is 5 and not 10 is because doubleNum() is not virtual.
*/





// 19. What is the output of the above function if the definition of
//        doubleNum() in classA was a virtual function?

/* OUTPUT: would be:

      classA, x: 4

      classA, x: 6
      classB, y: 10
*/




// 20. What is the difference between compile-time binding and run-time binding?
/*
    Binding: connecting the function call to the function implementation

    Compile-time Binding: binding that occurs before execution

    Run-Time Binding: binding that occurs durring run-time,
                      ie. virutal functions use run-time binding;
*/


/*

21. Is it legal to have an abstract class with all member functions pure virtual functions?

    Yes, it is legal to have all member functions of an abstract class be pure
    virtual functions.

*/

// 22. Write the definition of the class studentType so that the functions
//      print and calculateGPA are pure virtual functions.

/*
  class studentType
  {
    virtual void print();
    virtual calculateGPA();
  }
*/
  return 0;
}
