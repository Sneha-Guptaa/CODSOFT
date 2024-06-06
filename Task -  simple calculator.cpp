//TASK :Simple Calculator is created using c++ in which two numbers can be added,subtracted,multiplied and divided.
#include <iostream>
using namespace std;

int main()
{ float a,b,d;
 char c;
  char calc;
 //This is a simple calculator made of if else statement

 cout<<"'SIMPLE CALCULATOR'"<<endl;
  cout<<"-------------------"<<endl;
 cout<<endl;
 cout<<"Enter the first numberr :";
 cin>>a;
 cout<<endl;
 cout<<"Enter the second number :";
 cin>>b;
 cout<<endl;
 cout<<"OPERATIONS AVAILABLE( +,-,*,/)"<<endl;
 cout<<" Enter the operation :";
 cin>>c;
 cout<<endl;
 cout<<"Operation :"<<endl;
 cout<<endl;
{ 
   if(c=='+')
 {// addition is performed
   d=a+b;
  cout<<a<<"+"<<b<<" =";
  cout<<d<<endl;
 }
else if (c=='-') 
{ // subtraction is performed
  d=a-b;
 cout<<a<<"-"<<b<<" =";
 cout<<d<<endl;}
else if (c=='*')
{//multiplication is performed
  d=a*b;
  cout<<a<<"*"<<b<<" =";
  cout<<d<<endl;
}
  else if(c=='/')
{//division is performed
  d=a/b;
 cout<<a<<"/"<<b<<" =";
 cout<<d<<endl;
}
  else
{ 
  cout<<"INVAILD OPERATION";
 }
}
cout<<endl;
 cout << "Want to restart calculator or exit?  "<<endl;
 cout<<"Enter y for Yes and n for No :";
   cin >> calc;

   if (calc == 'y'||calc=='Y') 
   {
     cout<<endl;
     main(); 
   }

   return 0;
}
