class bookType
{
public:
  void printAllTitles();
  // Prints the title of all the books

  void printTitle(std::string auth) const;
  // Prints the book title associated with the parameter

  void setTitle(std::string name);
  // Sets the title of the book

  void setAuthor(std::string auth1, std::string auth2, std::string auth3, std::string auth4);
  // Sets the author of the book

  void setPublisher(std::string pub);
  // Sets the publisher of the book

  void setISBN(std::string isbn);
  // Sets the ISBN of the book

  void printAuthor(std::string name) const;
  // Prints the authors associated with the book title

  void printPublisher(std::string name) const;
  // Prints the publisher associated with the book name

  void printISBN(std::string name) const;
  // Prints the ISBN associated with the book name

  void setPrice(double cost);
  // sets price associated with book name
  // Postcondition: price = cost

  void setNumCopies(int num);
  // sets number of copies associated with the book name
  // Postcondition: numOfCopies = num

  void printPrice(std::string name) const;
  // Prints the price of the book

  void printNumCopies(std::string name) const;
  // Prints the number of copies of the book

  void updateNumCopies(std::string name, int s, int o);
  // If book is sold numOfCopies--
  // If book is restocked, numOfCopies + numOrdered

  void compareTitle(std::string name) const;
  // Checks whether a title the user entered is associated with a book carried

  void compareISBN(std::string isbn) const;
  // Checks whether an ISBN entered by the user is associated with a book

  void compareAuthor(std::string auth) const;
  // Checks whether an author entered by the user is associated with an author
  //     of a book carried

  bookType();
  // Sets numOfCopies to 10; sold to 0; ordered to 10;


private:
  std::string title;
  std::string author[4];
  std::string publisher;
  std::string ISBN;
  double price;
  int numOfCopies;
  int sold;
  int ordered;
};
