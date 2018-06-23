#include <iostream>
#include"admin.h"

using namespace std;

 class student : public people
{
  public:
  student (string name) : people(name)
  {

  }
};