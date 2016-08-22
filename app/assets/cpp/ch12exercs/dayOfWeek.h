class dayType
{
public:
  void setDay();
  // Function to set the day of the week;
  // Postcondition: dow = d;

  void print() const;
  // Function to print the day of the week;

  std::string returnDOW() const;
  // Return dow;

  std::string returnNext();
  // Function to return the day after dow;

  std::string returnPrevious() const;
  // Function to return the day before dow;

  std::string returnNthDay();
  // Function to return the nth day after dow;
  // Postcondition: dow = Monday and user enters num = 2, Wednesday is returned;

  dayType();
  // Default constructor;
  // Postcondition: dow = Sunday;

private:
  int dow;
  int num;
  std::string d;
  std::string array[7];
};
