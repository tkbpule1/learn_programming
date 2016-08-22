#ifndef h_operator
#define h_operator


class rectangleType
{
  // Overloading Operators as Non-Member Functions;

  friend std::ostream& operator<< (std::ostream&, const rectangleType&);
  // Overload the insertion operator <<;

  friend std::istream& operator>> (std::istream&, rectangleType&);
  // Overload the extraction operator >>;

public:
  void setDimensions(double l, double w);
  // Function to set the length and width of the rectangle;
  // Postcondition: length = l; width = w;

  double getLength() const;
  // Function to return the length of the rectangle;
  // Postcondition: The value of length is returned;

  double getWidth() const;
  // Function to return the width of the rectangle;
  // Postcondition: The value of width is returned;

  double area() const;
  // Function to return the area of the rectangle;
  // Postcondition: The area of the rectangle is calculated and returned;

  double perimeter() const;
  // Function to return the area of the rectangle;
  // Postcondition: The perimeter is calculated and returned;

  void print() const;
  // Function to output the length and width of the rectangle;

  rectangleType();
  // Default constructor;
  // Postcondition: length = 0; width = 0;

  rectangleType(double l, double w);
  // constructor with parameters;
  // Postcondition: length = l; width = w;



  // Overloading Operators as Member Functions;

  rectangleType operator+ (const rectangleType&) const;
  // Overload the operator +;

  rectangleType operator* (const rectangleType&) const;
  // Overload the operator *;

  bool operator== (const rectangleType&) const;
  // Overload the operator ==;

  bool operator!= (const rectangleType&) const;
  // Overload the operator !=;


private:
  double length;
  double width;
};

void rectangleType::setDimensions(double l, double w)
{
  length = l;
  width = w;
}

double rectangleType::getLength() const
{
  return length;
}

double rectangleType::getWidth() const
{
  return width;
}

double rectangleType::area() const
{
  return length * width;
}

double rectangleType::perimeter() const
{
  return 2 * (length + width);
}

void rectangleType::print() const
{
  std::cout << "Length: " << length
            << "; Width: " << width
            << std::endl;
}

rectangleType::rectangleType()
{
  length = 0;
  width = 0;
}

rectangleType::rectangleType(double l, double w)
{
  setDimensions(l, w);
}


// Overloading Operators as Member Functions;

// Overload the operator +;
rectangleType rectangleType::operator+ (const rectangleType& rectangle) const
{
  rectangleType tempRect;

  tempRect.length = length + rectangle.length;
  tempRect.width = width + rectangle.width;

  return tempRect;
}


// Overload the operator *;
rectangleType rectangleType::operator* (const rectangleType& rectangle) const
{
  rectangleType tempRect;

  tempRect.length = length * rectangle.length;
  tempRect.width = width * rectangle.width;

  return tempRect;
}


// Overload the operator ==;
bool rectangleType::operator== (const rectangleType& rectangle) const
{
  return (length == rectangle.length && width == rectangle.width);
}


// Overload the operator !=;
bool rectangleType::operator!= (const rectangleType& rectangle) const
{
  return (length != rectangle.length ||
           width != rectangle.width);
}




// Overloading Operators as Non-Member Functions;


// Overload the insertion operator <<;
std::ostream& operator<< (std::ostream& osObject,
                          const rectangleType& rectangle)
{
  osObject << "Length = "  << rectangle.length
           << "; Width = " << rectangle.width;

  return osObject;
}


// Overload the extraction operator >>;
std::istream& operator>> (std::istream& isObject, rectangleType& rectangle)
{
  isObject >> rectangle.length >> rectangle.width;

  return isObject;
}


#endif
