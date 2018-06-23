#include <iostream>
#include "Physics.h"
using namespace std;

class start
{
  public:
  start(){}
  void Start()
  {
    subject *sub[5];
    sub[1] = new Language();
    sub[2] = new Physics();
    
    cout << "LANGUAGE" << endl;
    sub[1]->play("language.txt");
    
    cout<<"PHYSICS"<<endl;
    sub[2]->play("physics.txt");
  }
  private:
};