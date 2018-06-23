#include<iostream>
#include<fstream>
using namespace std;
class File
{
  public:
  string file (string fileName,int LineNo)
  {
    string temp;
    int i=1;
    ifstream obj(fileName);
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