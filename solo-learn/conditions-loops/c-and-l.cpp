#include <iostream>
using namespace std;

int main()
{
  std::cout << "Hello, world!\n";

  int val = 7;

  if (val > 5){
    cout << "val > 5" << endl;
    if (val > 6){
      cout << "val > 6" << endl;
    }
  }
  else{
    cout << "<= 5" << endl;
  }

  cout << "while START" << endl;
  int i = 0;
  while (i < 10){
    cout << "i: " << i++ << endl;
  }
  cout << "while END" << endl;

  cout << "for START" << endl;
  for (int a = 0; a < 10; a++) {
    cout << a << endl;
  }
  cout << "for END" << endl;

  return 0;
}

//  all of this is obvious
