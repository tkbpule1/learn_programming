#include <iostream>
#include "bookType.h"


int main()
{
  bookType book[5];

  book[0].setTitle("Harry Potter");
  book[1].setTitle("C++ Handbook");
  book[2].setTitle("IT Security");
  book[3].setTitle("Computational Science");
  book[4].setTitle("Physics 3");

  book[0].setAuthor("Bob Scribble", "John Richard", "", "");
  book[1].setAuthor("Anna Hitchcock", "", "", "");
  book[2].setAuthor("Trade Pub", "", "", "");
  book[3].setAuthor("Agile Develpment", "", "", "");
  book[4].setAuthor("Young Freedman", "", "", "");

  book[0].setPublisher("Tim Beyer");
  book[1].setPublisher("Joe Anthony");
  book[2].setPublisher("Ashley Lokelani");
  book[3].setPublisher("Charles Max Wood");
  book[4].setPublisher("Taylor Pearson");

  book[0].setISBN("ABC-123");
  book[1].setISBN("DEF-456");
  book[2].setISBN("NMO-098");
  book[3].setISBN("JKL-876");
  book[4].setISBN("YUI-567");


  book[0].setPrice(23.99);
  book[1].setPrice(45.99);
  book[2].setPrice(50.00);
  book[3].setPrice(12.99);
  book[4].setPrice(99.99);

  book[1].setNumCopies(12);
  book[2].setNumCopies(20);
  book[4].setNumCopies(15);

  std::cout << std::endl;
  std::cout << std::endl;


  for (int i = 0; i < 5; i++)
  {
    book[i].printAllTitles();
  }
  std::cout << std::endl;

  for (int i = 0; i < 5; i++)
  {
    book[i].printTitle("Trade Pub");
  }
  std::cout << std::endl;


  for (int i = 0; i < 5; i++)
  {
    book[i].printTitle("Agile Develpment");
  }
  std::cout << std::endl;


  for (int i = 0; i < 5; i++)
  {
    book[i].printAuthor("Harry Potter");
  }
  std::cout << std::endl;


  for (int i = 0; i < 5; i++)
  {
    book[i].printPublisher("Harry Potter");
  }
  std::cout << std::endl;


  for (int i = 0; i < 5; i++)
  {
    book[i].printISBN("C++ Handbook");
  }
  std::cout << std::endl;


  for (int i = 0; i < 5; i++)
  {
    book[i].printPrice("Harry Potter");
  }
  std::cout << std::endl;


  for (int i = 0; i < 5; i++)
  {
    book[i].printNumCopies("IT Security");
  }
  std::cout << std::endl;



  return 0;
}
