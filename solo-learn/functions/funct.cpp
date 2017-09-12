
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//  declare before calling
void printHW();
void print(string str = "HI MOM!");
int addInts(int a, int b);
void printRands(int count);
//  overloaded function
void print(int num = 42);
//  recursive method
int fact(int n);
//  arr as param
//void printArr(int arr[], int size);
void printArr( int *arr, int size); // same as ^ 

int main()
{
  printHW();
  print("It's a Unix system!");
  int sum = addInts(3, 4);
  printRands(sum);
  print(57);
  print(fact(5));
  int size = 6;
  int *arr = new int[size];
  *(arr) = 12;
  *(arr + 1) = 23;
  *(arr + 2) = 34;
  *(arr + 3) = 45;
  *(arr + 4) = 56;
  *(arr + 5) = 67;
  printArr(arr, size);
  delete [] arr; // no mem leak
}

//  can define later
void printHW()
{
  cout << "Hello, world!" << endl;
}

void print(string str)
{
  cout << "string: " << str << endl;
}

int addInts(int x, int y)
{
  int sum = x + y;
  cout << x + y << endl;
  return sum;
}

void printRands(int count)
{
  for (int i = 0; i < count; i++){
    cout << rand() << endl;
  }
}

//  overloaded function
void print(int num)
{
  cout << "number: " << num << endl;
}


int fact(int n)
{
  return (n == 1) ? 1 : n * fact(n-1);
}

void printArr(int arr[], int size)
{
  cout << "[ ";
  for (int i = 0; i < size; i ++){
    cout << arr[i] << " ";
  }
  cout << "]" << endl;
}
