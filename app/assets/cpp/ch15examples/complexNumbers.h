#ifndef h_complex
#define h_complex

#include <iostream>


class complexType
{
  friend std::ostream& operator<< (std::ostream&, const complexType&);
  friend std::istream& operator>> (std::istream&, complexType&);

public:
  void setComplex(const double& realPart, const double& imaginaryPart);
  // Function to set the complex numbers according to the parameters;
  // Postcondition: real = realPart; imaginary = imaginaryPart;

  void getComplex(double& realPart, double& imaginaryPart) const;
  // Function to set the complex numbers according to the parameters;
  // Postcondition: realPart = real; imaginaryPart = imaginary;

  complexType operator+ (const complexType& otherComplex) const;
  // Overload the operator +;

  complexType operator* (const complexType& otherComplex) const;
  // Overload the operator *;

  complexType operator== (const complexType& otherComplex) const;
  // Overload the operator ==;

  complexType(double realPart = 0, double imaginaryPart = 0);
  // Constructor with default parameters;
  // Postcondition: real = realPart; imaginary = imaginaryPart;

private:
  double real;
  double imaginary;
};


// Function to set the complex numbers according to the parameters;
void complexType::setComplex(const double& realPart,
                             const double& imaginaryPart)
{
  real = realPart;
  imaginary = imaginaryPart;
}


// Function to set the complex numbers according to the parameters;
void complexType::getComplex(double& realPart,
                             double& imaginaryPart) const
{
  realPart = real;
  imaginaryPart = imaginary;
}


// Overload the operator +;
complexType complexType::operator+ (const complexType& otherComplex) const
{
  complexType temp;

  temp.real = real + otherComplex.real;
  temp.imaginary = imaginary + otherComplex.imaginary;

  return temp;
}


// Overload the operator *;
complexType complexType::operator* (const complexType& otherComplex) const
{
  complexType temp;

  temp.real = (real * otherComplex.real) -
              (imaginary * otherComplex.imaginary);

  temp.imaginary = (real * otherComplex.imaginary) +
                   (imaginary * otherComplex.real);


  return temp;
}


// Overload the operator ==;
complexType complexType::operator== (const complexType& otherComplex) const
{
  return (real == otherComplex.real &&
          imaginary == otherComplex.imaginary);
}


// Constructor with default parameters;
complexType::complexType(double realPart, double imaginaryPart)
{
  real = realPart;
  imaginary = imaginaryPart;
}


std::ostream& operator<< (std::ostream& osObject, const complexType& complex)
{
  osObject << "(";
  osObject << complex.real;
  osObject << ", ";
  osObject << complex.imaginary;
  osObject << ")";

  return osObject;
}

std::istream& operator>> (std::istream& isObject, complexType& complex)
{
  char discard;

  isObject >> discard;
  isObject >> complex.real;
  isObject >> discard;
  isObject >> complex.imaginary;
  isObject >> discard;

  return isObject;
}


#endif
