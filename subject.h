#include <iostream>
#include"student.h"
using namespace std;

class subject
{
  public:

void play(string filename)
  {
    File f;
    int score=0;
    int i=1,k=1;
    while(i<=16)
    {
      int j=0;
    for( i=k; i <= 18; i++)
    {
      j++;
      cout << f.file(filename,i) << endl;
      if(j==5)
      {
        break;
      }
    }
    cout<<"Enter Ans"<<endl;
    string ans;
    cin>> ans;
    i++;
    if(f.file(filename,i) == ans )
    {
      cout<<"Correct"<<endl;
      score+=20;
    }
    else 
    {
      cout<<"InCorrect"<<endl;
    }
    i++;
    k=i;
    }
    cout<<"Score" << score << endl;;
    }

  private:
};