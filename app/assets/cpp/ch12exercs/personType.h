class personType
{
public:
  void print() const;
  // Function to print the first, middle and last name.

  void setName(std::string first, std::string last);
  // Function to set the first and last name.
  // Postcondition: firstName = first,, lastName = last;

  void setFirstName(std::string first);
  // Function to set first name;
  // Postcondition: firstName = first;

  void setLastName(std::string first);
  // Function to set last name;
  // Postcondition: lastName = last;

  void setMiddleName(std::string middle);
  // Function to set middle name;
  // Postcondition: middleName = middle;

  std::string getFirstName() const;
  // Function to return the first name;
  // Postcondition: the value of firstName is returned;

  std::string getLastName() const;
  // Function to return the last name;
  // Postcondition: the value of lastName is returned;

  personType(std::string first = "", std::string middle = "",
             std::string last = "");
  // Constructor with default values
  // The defaults values of the parameters are null strings

  bool compareFirst(std::string first);
  // Check whether first is the same as firstName;
  // Postcondition: return true if names are the same, else return false

  bool compareLast(std::string last);
  // Check whether first is the same as lastName;
  // Postcondition: return true if names are the same, else return false


private:
  std::string firstName;
  std::string middleName;
  std::string lastName;
};
