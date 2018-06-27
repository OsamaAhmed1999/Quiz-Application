#include <iostream>
#include "Physics.h"
using namespace std;

class start
{
  public:
  start()
  {
    Start();
  }
  void Start()
  {
    cout << "\t\t\tQUIZ APPLICATION" << endl << endl ;
    string name;
    cout << "Your Name: ";
    cin >> name;
    int choice = 0;
    while(choice != 3)
    {
      cout << "\nPlease Enter Your Choice " << name;
      cout << "\nFor Quiz - 1\nFor Admin - 2\nFor Exit - 3\n\n>> ";
      
      cin >> choice;
      system("cls");

      switch(choice)
      {
        case 1:        
        Quiz();
        break;

        case 2:
        password();
        break;

        case 3:
        cout << "Thank You" << endl;
        break;
      }
    }
  };

  void Quiz();
  void password();

  private:

};

void start::Quiz()
{
  subject *sub[5];
  sub[1] = new Computer();
  sub[2] = new Physics();

  int choice = 0;
  cout << "Computer Quiz - 1\nPhysics Quiz - 2\nGeneral Knowledge - 3\n\n>> ";
  cin >> choice;
  system("cls");

  switch(choice)
  {
    case 1:
    cout << "\t\t\t\tCOMPUTER" << endl;
    sub[1]->play("computer.txt");
    break;

    case 2:
    cout<<"\t\t\t\tPHYSICS" << endl;
    sub[2]->play("physics.txt");
    break;
  }
};

void start::password()
{
  admin a("osama" , "123");
  string name , pass;
  name = a.namee();
  pass = a.password();
  a.checkpass(pass);
};