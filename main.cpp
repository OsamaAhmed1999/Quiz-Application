#include <iostream>
#include"student.h"

using namespace std;

int main()
{
   File f;
   int score=0;
   int i=2,k=2;
   while(i<=16)
   {
     int j=0;
   for( i=k ;i <= 16 ; i++)
   {
     j++;
     cout<<f.file(i)<<endl;
     if(j==4)
     {
       break;
     }
   }
   cout<<"Enter Ans"<<endl;
   string ans;
   cin>> ans;
   i++;
   if(f.file(i) == ans )
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
  system("pause");
}