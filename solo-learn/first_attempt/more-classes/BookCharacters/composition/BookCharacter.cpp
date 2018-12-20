#include <iostream>
#include <string>
#include "BookCharacter.h"
#include "BookSeries.h"
using namespace std;

//  :: is scope resolution operator, used to define member functions already declared in header
BookCharacter::BookCharacter(string _name, string _job)
: name(_name), job(_job){}

BookCharacter::BookCharacter(string _name, string _job, BookSeries* _series)
: name(_name), job(_job), series(_series){}


string BookCharacter::getJob()
{
  return BookCharacter::job;
}

string BookCharacter::getName()
{
  return BookCharacter::name;
}

BookSeries* BookCharacter::getSeries()
{
  return BookCharacter::series;
}

void BookCharacter::printEverything()
{
  cout << this->name << " is a " << this->job << " in the series " << this->series->getName() << " by " << this->series->getAuthor() << endl;
}
