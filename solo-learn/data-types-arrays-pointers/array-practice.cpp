#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size = 5;
    cout << "size: " << size << endl;
    string *arr = new string[size];
    cout << "arr addr: " << arr << endl;
    cout << "arr var: " << *arr << endl;

    // adding adds the 'length' of a byte
    *(arr) = "hold";
    *(arr + 1) = "on";
    *(arr + 2) = "to";
    *(arr + 3) = "your";
    *(arr + 4) = "butts";
    string *addr_of_3rd = arr + 2;
    cout << "addr of 3rd element: " << addr_of_3rd << endl;
    cout << "val of 3rd element: " << *addr_of_3rd << endl;

    delete [] arr; // no mem leaks
}
