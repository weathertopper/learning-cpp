#include <iostream>
#include <string>
#include "BookCharacter.h"
#include "BookCharacter.cpp"
#include "BookSeries.h"
#include "BookSeries.cpp"
using namespace std;

int main()
{

  //  todo add millenium to both characters

  BookSeries* millenium;

  millenium = new BookSeries("Millenium", "Stieg Larsson");

  BookCharacter* lisbeth;
  BookCharacter* mikael;

  lisbeth = new BookCharacter("Lisbeth Salander", "Hacker Extraordinaire", millenium);
  mikael = new BookCharacter("Mikael Blomkvist", "Journalist", millenium);

  lisbeth -> printEverything();
  mikael -> printEverything();

  return 0;
}
