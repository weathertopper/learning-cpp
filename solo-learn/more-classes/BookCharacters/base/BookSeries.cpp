#include <iostream>
#include <string>
#include "BookSeries.h"
using namespace std;

BookSeries::BookSeries(string _name, string _author)
: name(_name), author(_author){}

string BookCharacter::getAuthor()
{
  return BookCharacter::author;
}

string BookCharacter::getName()
{
  return BookCharacter::name;
}
