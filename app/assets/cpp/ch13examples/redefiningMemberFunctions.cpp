// Base Class

class rectangleType
{
public:
  void setDimension(double l, double w);
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
  // Function to return the perimeter of the rectangle;
  // Postcondition: The perimeter of the rectangle is calculated and returned;

  void print() const;
  // Function to output the length and width of the rectangle;

  rectangleType();
  // Default constructor;
  // Postcondition: length = 0; width = 0;

  rectangleType(double l, double w);
  // Constructor with parameters;
  // Postcondition: length = l; width = w;


private:
  double length;
  double width;
};

// Definitions of  class rectangleType

void rectangleType::setDimension(double l, double width)
{
  if (l >= 0)
  {
    length = l;
  }
  else
  {
    length = 0;
  }

  if (w >= 0)
  {
    width = w;
  }
  else
  {
    width = 0;
  }
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
  return (2 * (length + width));
}

double rectangleType::print() const
{
  std::cout << "Length = " << length << "; Width = " << width;
}

rectangleType::rectangleType(double l, double w)
{
  setDimension(l, w);
}

rectangleType::rectangleType()
{
  length = 0;
  width = 0;
}



// Derived class boxType from the class rectangleType:

class boxType: public rectangleType
{
public:
  void setDimension(double l, double w, double h);
  // Function to set the length, width, and height of the box;
  // Postcondition: length = l; width = w; height = h;

  double getHeight() const;
  // Function to return the height of the box;
  // Postcondition: The value of height is returned;

  double area() const;
  // Function to return the surface area of the box;
  // Postcondition: The surface area of the box is calculated and returned;

  double volume() const;
  // Function to return the volume of the box;
  // Postcondition: The volume of the box is calculated and returned;

  void print() const;
  // Function to output the length, width, and height of the box;

  boxType();
  // Default constructor;
  // Postcondition: length = 0; width = 0; height = 0;

  boxType(double l, double w, double h);
  // Constructor with parameters;
  // Postcondition: length = l; width = w; height = h;


private:
  double height;

};

// Definitions of class boxType:

// Do not have direct access to private member variables of base class
// Use base class name + :: + the public member function that returns the
//                            private member variables that need to be accessed

void boxType::setDimension(double l, double w, double h)
{
  // baseClassName::publicMemberFunction(var1, var2);
  rectangleType::setDimension(l, w);

  if (h >= 0)
  {
    height = h;
  }

  else
  {
    height = 0;
  }
}


double boxType::getHeight() const
{
  return height;
}


double boxType::area() const
{
  return (2 * (getLength() * getWidth()
             + getLength() * height
             + getWidth() * height));
}


double boxType::volue() const
{
  return rectangleType::area() * height;
}


void boxType::print() const
{
  rectangleType::print();

  std::cout << "; Height = " << height;
}


// If a class contains the default constructor and no values are specified
//    when the object is declared, the default constructor executes and
//    initializes the object.
// Thus, when writing the default constructor of a derived class, we do not
//    specify any constructor of the base class;

boxType::boxType()
{
  height = 0;
}


boxType::boxType(double l, double w, double h) : rectangleType(l, w)
{
  if (h >= 0)
  {
    height = h;
  }
  else
  {
    height = 0;
  }
}
