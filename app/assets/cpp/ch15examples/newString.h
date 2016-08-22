#ifndef h_string
#define h_string

#include <iostream>

class newString
{
  // Overload the stream insertion and extraction operators;
  friend std::ostream& operator<< (std::ostream&, const newString&);
  friend std::istream& operator>> (std::istream&, newString&);

public:
  const newString& operator= (const newString&);
  // Function to overload the assignment operator;

  newString(const char*);
  // Constructor; conversion from the char string;

  newString();
  // Default constructor;

  newString(const newString&);
  // Copy Constrctor;

  ~newString();
  // Destructor;

  char &operator[] (int);
  // Function to overload the subscript operator for **non-constant** array

  const char &operator[] (int) const;
  // Function to overload the subscript operator for **constant** array


  // Overload the relational operators;
  bool operator== (const newString&) const;
  bool operator!= (const newString&) const;
  bool operator<= (const newString&) const;
  bool operator< (const newString&) const;
  bool operator>= (const newString&) const;
  bool operator> (const newString&) const;

private:
  char *strPtr;
  int strLength;
};


#endif
