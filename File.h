#include<iostream>
#include<fstream>
using namespace std;
class File
{
  public:
  string file (string fileName , int LineNo)
  {
    string temp;
    int i = 1;
    ifstream obj(fileName);
    while(getline(obj , temp))
    {
      if(i == LineNo)
      {
        return temp ;
      }
      i++;
    }
  }

  int search(string fileName)
  {
    ifstream file;
    file.open(fileName);
    string search;
    int found = 1;
    cin >> search;
    string input = "";
    
    while(!file.eof())
    {
      int i = 0;
      getline(file , input);
      if(search[i] == input[i])
      {
        i++;
        if(search[i] == input[i])
        {
          i++;
          if(search[i] == '\0')
          {
            break;
          }
          else
          {
            if(search[i] == input[i])
            {
              break;
            }
          }
        }
      }
      found++;
    }
    return found;
  }

  void deletee(string fileName)
  {    
    ifstream file1;
    file1.open(fileName);
    ofstream file2;
    file2.open("temp.txt");
    string temp;
    int line = 1;
    int del_line;
    del_line = search(fileName);

    while (!file1.eof())
    {
      if (line == del_line)
      {
        for(int i = 1; i <= 6; i++)
        {
          getline(file1 , temp);
          line++;
        }
      }
      else
      {
        getline(file1 , temp);
        file2 << temp << "\n";
        line++;
      }
    }
    file1.close();
    file2.close();
    remove("physics.txt");
    rename("temp.txt" , "physics.txt");
  }

};