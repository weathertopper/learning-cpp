#ifndef BOOKSERIES_H //if not defined (ie if the header file hasn't been defined already, so header not included >1 w/in a file)
#define BOOKSERIES_H
#include <iostream>
#include <string>
using namespace std;

class BookSeries
{
  public:
    BookSeries(); // have to list default so avoid using it implicitly ( I think)
    BookSeries(string _name, string _author);

    string getName();
    string getAuthor();

  protected:
  private:
    string name;
    string author;
};


#endif // BOOKCHARACTER_H
