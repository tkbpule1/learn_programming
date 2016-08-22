#ifndef p_test
#define p_test

class personType
{
public:
  void setName(std::string first, std::string last);
  void print() const;
  std::string getFirstName() const;
  std::string getLastName() const;

  personType(std::string first = "", std::string last = "");



private:
  std::string firstName;
  std::string lastName;
};


#endif
