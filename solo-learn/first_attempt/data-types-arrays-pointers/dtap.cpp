#include <iostream>
#include <string>
using namespace std;

int main()
{
  std::cout << "Hello, world!\n";

  // pointers: & to denote address in memory
  string jp = "It's a Unix system!";
  cout << &jp << endl;

  // pointer variable: type *var
  string *jpp = &jp;
  cout << jpp << endl;

  // dereference w/ * again:
  cout << *jpp << endl;

  //  dynamically allocated memory
  //  using `new` allocates mem needed for whatever type and returns address
  int *ip = new int;
  *ip = 85;
  cout << "addr: " << ip << endl;
  cout << "val: " << *ip << endl;
  //  don't have mem leaks, free up memory
  delete ip;
  //  does not delete pointer, creates dangling pointer

  //  when declaring pointers, set to NULL
  int *arr_ptr = NULL;
  arr_ptr = new int[20]; // request mem
  delete [] arr_ptr; //delete array pointed to by arr_ptr
  cout << "addr: " << arr_ptr << endl;

  //  sizeof returns size in bytes
  cout << "bool: " << sizeof(bool) << endl;
  cout << "char: " << sizeof(char) << endl;
  cout << "int: " << sizeof(int) << endl;
  cout << "float: " << sizeof(float) << endl;
  cout << "double: " << sizeof(double) << endl;

  //  for array, sizeof returns overall memory of all elements (in bytes)
  double d_arr[10];
  cout << "size of double d_arr[10]: " << sizeof(d_arr) << endl;  // 10 * 8 bytes;

  // for length of array, do this:
  cout << "length of array: " << sizeof(d_arr)/ sizeof(d_arr[0]) << endl;
  //  or, since array pointers point at first element ( I think)
  cout << "length of array: " << sizeof(d_arr)/ sizeof(*d_arr) << endl;

  return 0;
}
