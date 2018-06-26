#include <iostream>
using namespace std;

class people
{
  public:
  people()
  {}
  people(string name)
  {
    this->name = name;
  }
  void setname(string name)
  {
    this->name = name;
  }
  string getname()
  {
    return this->name;
  }
  
  protected:
  string name;
};