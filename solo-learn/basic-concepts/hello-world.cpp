#include <iostream>
using namespace std;

int main()
{
  std::cout << "Hello, world!\n";

  // example of comment
  /*
    multiple lines, pretty standard
  */

  cout <<"This "<<"is "<<"awesome!" << endl;

  int _varEx = 42;
  cout << "The answer to life, the universe, and everything is " << _varEx << endl;

  int a,b;
  a = 12;
  b = 30;
  cout << "a+b=" << a+b << endl;

  int input_one, input_two;
  cout << "input_one:";
  cin >> input_one;
  cout << "input_two:";
  cin >> input_two;
  int sum = input_one + input_two;
  cout << "SUM: " << sum << endl;

  int pemdas = 3 + 5 * 4 - 5 / 2; // read: 3+(5*4)-(5/2)=21
  cout << "PEDMAS: " << pemdas << endl;

  return 0;
}
