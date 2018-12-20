#ifndef BOOKCHARACTER_H //if not defined (ie if the header file hasn't been defined already, so header not included >1 w/in a file)
#define BOOKCHARACTER_H
#include <iostream>
#include <string>
#include "BookSeries.h"

using namespace std;

//  header file (1) holds function declarations (prototypes) & variable declarations
//  this includes template for BooKCharacter class w/ default constructor

class BookCharacter
{
  public:
    BookCharacter(); // have to list default so avoid using it implicitly ( I think)
    BookCharacter(string _name, string _job);
    //  to show member init list (below)
    BookCharacter(string _name, string _job, BookSeries* _series);

    string getJob();
    string getName();
    BookSeries* getSeries();

    void printEverything();

  protected:
  private:
    string name;
    string job;
    BookSeries* series; //  pass pointers, you idiot!
};

#endif // BOOKCHARACTER_H
