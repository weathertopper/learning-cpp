#include <iostream>
#include <string>

using namespace std;

class BookCharacter
{
  private:
    string name;
  public:
    BookCharacter(string _name){ //constructor
      name = _name;
    }
    void setName(string _name)
    {
      name = _name;
    }
    string getName()
    {
      return name;
    }
};

int main()
{
  BookCharacter tonks("Nymphadora Tonks");
  cout << tonks.getName() << endl;
  return 0;
};
