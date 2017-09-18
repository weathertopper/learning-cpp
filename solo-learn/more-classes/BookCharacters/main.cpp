#include <iostream>
#include <string>
#include "BookCharacter.h"
#include "BookCharacter.cpp"
using namespace std;

int main()
{
  BookCharacter lisbeth("Lisbeth Salander", "Hacker Extraordinaire");
  cout << "JOB: " << lisbeth.getJob() << endl;
  BookCharacter* lisbeth_ptr = &lisbeth;
  cout << "PTR: " << lisbeth_ptr << endl;
  // use -> w/ a pointer
  cout << "NAME: " << lisbeth_ptr->getName() << endl;
  lisbeth_ptr->printClassName();

  //  using member init list
  BookCharacter ron("Ron Weasley", "Wizard", "HP");
  cout << "JOB: " << ron.getJob() << endl;
  BookCharacter* ron_ptr = &ron;
  cout << "PTR: " << ron_ptr << endl;
  // use -> w/ a pointer
  cout << "NAME: " << ron_ptr->getName() << endl;
  cout << "SERIES: " << ron_ptr->getSeries() << endl;

  return 0;
}
