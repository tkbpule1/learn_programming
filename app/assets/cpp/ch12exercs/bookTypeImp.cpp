#include <iostream>
#include "bookType.h"



// Prints the title of all the books
void bookType::printAllTitles()
{
  std::cout << title << std::endl;
}

// Prints the book title associated with the parameter
void bookType::printTitle(std::string auth) const
{
  for (int i = 0; i < 4; i++)
  {
    if (auth == author[i])
    {
      std::cout << title << std::endl;
    }
  }
}

// Sets the title of the book
void bookType::setTitle(std::string name)
{
  title = name;
}

// Sets the author of the book
void bookType::setAuthor(std::string auth1, std::string auth2, std::string auth3, std::string auth4)
{
  author[0] = auth1;
  author[1] = auth2;
  author[2] = auth3;
  author[3] = auth4;
}

// Sets the publisher of the book
void bookType::setPublisher(std::string pub)
{
  publisher = pub;
}

// Sets the ISBN of the book
void bookType::setISBN(std::string isbn)
{
  ISBN = isbn;
}

// Prints the authors associated with the book title
void bookType::printAuthor(std::string name) const
{
  if (name == title)
  {
    for (int i = 0; i < 4; i++)
    {
      if (author[i] != "")
      {
        std::cout << author[i] << std::endl;
      }
    }
  }
}

// Prints the publisher associated with the book name
void bookType::printPublisher(std::string name) const
{
  if (name == title)
  {
    std::cout << publisher << std::endl;
  }
}

// Prints the ISBN associated with the book name
void bookType::printISBN(std::string name) const
{
  if (name == title)
  {
    std::cout << ISBN << std::endl;
  }
}

// sets price associated with book name
// Postcondition: price = cost
void bookType::setPrice(double cost)
{
  price = cost;
}

// sets number of copies associated with the book name
// Postcondition: numOfCopies = num
void bookType::setNumCopies(int num)
{
  numOfCopies = num;
}

// Prints the price of the book
void bookType::printPrice(std::string name) const
{
  if (name == title)
  {
    std::cout << price << std::endl;
  }
}

// Prints the number of copies of the book
void bookType::printNumCopies(std::string name) const
{
  if (name == title)
  {
    std::cout << numOfCopies << std::endl;
  }
}

// If book is sold numOfCopies--
// If book is restocked, numOfCopies + numOrdered
void bookType::updateNumCopies(std::string name, int s, int o)
{
  if (name == title)
  {
    numOfCopies -= s;
    numOfCopies += o;
  }
}

// Checks whether a title the user entered is associated with a book carried
void bookType::compareTitle(std::string name) const
{
  bool found = false;

  if (name == title)
  {
    found = true;
  }

  if (found)
  {
    std::cout << "Found" << std::endl;
  }
}

// Checks whether an ISBN entered by the user is associated with a book
void bookType::compareISBN(std::string isbn) const
{
  bool found = false;

  if (ISBN == isbn)
  {
    found = true;
  }

  if (found)
  {
    std::cout << "Found ISBN" << std::endl;
  }
}

// Checks whether an author entered by the user is associated with an author
//     of a book carried
void bookType::compareAuthor(std::string auth) const
{
  bool found = false;

  for (int i = 0; i < 4; i++)
  {
    if (author[i] == auth)
    {
      found = true;
    }
  }

  if (found)
  {
    std::cout << "Found Author" << std::endl;
  }
}


bookType::bookType()
{
  numOfCopies = 10;
  sold = 0;
  ordered = 10;
  author[0] = "";
  author[1] = "";
  author[2] = "";
  author[3] = "";
}
