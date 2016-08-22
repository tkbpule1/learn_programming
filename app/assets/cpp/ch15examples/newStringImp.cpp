#include <iostream>
#include <iomanip>
#include <cstring>
#include <cassert>

#include "newString.h"

// Constructor: Conversion from the char string to newString;
newString::newString(const char *str)
{
  strLength = strlen(str);
  strPtr = new char[strLength + 1];

  strcpy(strPtr, str);
}

// Default constructor;
newString::newString()
{
  strLength = 0;
  strPtr = new char[1];
  strcpy(strPtr, "");
}

// Copy Constrctor;
newString::newString(const newString& rightStr)
{
  strLength = rightStr.strLength;
  strPtr = new char[strLength + 1];
  strcpy(strPtr, rightStr.strPtr);
}

// Destructor
newString::~newString()
{
  delete [] strPtr;
}

// Overload the assignment operator;
const newString& newString::operator= (const newString& rightStr)
{
  if (this != &rightStr) // avoid self-copy
  {
    delete [] strPtr;
    strLength = rightStr.strLength;
    strPtr = new char[strLength + 1];
    strcpy(strPtr, rightStr.strPtr);
  }

  return *this;
}


// Overload the subscript operator for non-constant array
char& newString::operator[] (int index)
{
  assert(0 <= index && index < strLength);
  return strPtr[index];
}

// Overload the subscript operator for constant array
const char& newString::operator[] (int index) const
{
  assert(0 <= index && index < strLength);
  return strPtr[index];
}


// Overload the relational operators;
bool newString::operator== (const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) == 0);
}

bool newString::operator< (const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) < 0);
}

bool newString::operator<= (const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) <= 0);
}

bool newString::operator> (const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) > 0);
}

bool newString::operator>= (const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) >= 0);
}

bool newString::operator!= (const newString& rightStr) const
{
  return (strcmp(strPtr, rightStr.strPtr) != 0);
}


// Overload the stream insertion operator;
std::ostream& operator<< (std::ostream& osObject, const newString& str)
{
  osObject << str.strPtr;
  return osObject;
}

// Overload the stream extraction operator;
std::istream& operator>> (std::istream& isObject, newString& str)
{
  char temp[81];

  // Ensure that no more than 81 characters are read into temp
  isObject >> std::setw(81) >> temp;
  str = temp;

  return isObject;
}
