#include <iostream>
#include "people.h"
#include"file.h"
using namespace std;

class admin : public people
{
  public:
  admin(string name , string password) : people(name)
  {
    this->Password = password;
  }
  void checkpass(string pass)
  {
    File ret;  
    if(ret.file(1) == pass)
    {
      cout<<"Correct pass"<<endl;
    }
    else
    {
      cout<<"InCorrect pass"<<endl;
    }
  }
  private:
  string Password;
};