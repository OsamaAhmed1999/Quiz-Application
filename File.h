#include<iostream>
#include<fstream>
using namespace std;
class File
{
  public:
  string file (int LineNo)
  {
    string temp;
    int i=1;
    ifstream obj("file.txt");
    while(getline(obj , temp))
    {
      if(i==LineNo)
      {
      return temp ;
      }
      i++;
    }
  }
};