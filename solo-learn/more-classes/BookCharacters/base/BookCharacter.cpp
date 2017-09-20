#include <iostream>
#include <string>
#include "BookCharacter.h"
using namespace std;

//  :: is scope resolution operator, used to define member functions already declared in header
BookCharacter::BookCharacter(string _name, string _job)
{
  cout << "CONSTRUCTOR" << endl;

  BookCharacter::name = _name;
  BookCharacter::job = _job;

  cout << BookCharacter::name << ": "<< BookCharacter::job << endl;
}

BookCharacter::BookCharacter(string _name, string _job, string _series)
: name(_name), job(_job), series(_series){}
// apparently constant member variable must be init in constructor init list


string BookCharacter::getJob()
{
  return BookCharacter::job;
}

string BookCharacter::getName()
{
  return BookCharacter::name;
}

string BookCharacter::getSeries()
{
  return BookCharacter::series;
}

void BookCharacter::printClassName() const
{
  cout << "BookCharacter" << endl;
}

BookCharacter::~BookCharacter()
{
  cout << "DESTRUCTOR" << endl;
}
