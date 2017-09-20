#include <iostream>
#include <string>
#include "BookSeries.h"
using namespace std;

BookSeries::BookSeries(string _name, string _author)
: name(_name), author(_author){}

string BookSeries::getAuthor()
{
  return BookSeries::author;
}

string BookSeries::getName()
{
  return BookSeries::name;
}
