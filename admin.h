#include <iostream>
#include "people.h"
#include"file.h"
using namespace std;

class admin : public people
{
  public:
  admin()
  {
    this->Password = "123";
  }

  admin(string name , string password) : people(name)
  {
    this->Password = password;
  }

  void checkpass(string pass)
  {
    int choice;
    if(f.file("password.txt" , 1) == pass)
    {
      cout<<"\nCorrect pass\n"<<endl;
      cout << "\nDelete Question - 1\nAdd Question - 2\nPassword Change - 3\nStart Page - 4\n\n>> ";
      cin >> choice;
      switch(choice)
      {
        case 3:
        change_password();
        break;

        case 4:
        break;
      }
    }
    else
    {
      cout<<"\nSorry! You Enter Wrong Password\n"<<endl;
    }
  }
  
  string namee()
  {
    string name;
    cout << "Enter Name: ";
    cin >> name;
    return name;
  }

  string password()
  {
    char pass[8];
    cout << "Enter Password: ";
    int i = 0;
    while(i < 8)
    {
      pass[i] = _getch();
      cout << "*";
      i++;
    }
    return pass;
  };

  void change_password()
  {
    system("cls");
    if(f.file("password.txt" , 1) == password())
    {
      cout << "\nEnter New Password of at most 8 Characters: ";
      cin >> Password;
      fstream file("password.txt");
      file << Password;
      cout << "\nPassword Change\n";
    }
    else
    {
      cout << "\nSorry! you enter wrong Password";
    }
  }

  private:
  string Password;
  File f;
};