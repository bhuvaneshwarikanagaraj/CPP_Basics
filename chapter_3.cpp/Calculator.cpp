#include<iostream>
using namespace std;

int main()
{ 
  float a,b;
  char oper;
  cout<<"_________________________________WELCOME_________________________________";
  cout<<endl<<"Enter the first operand";
  cin>>a;
  cout<<endl<<"Enter the second operand"<<endl;
  cin>>b;
  cout<<endl<<"What operation you want to perform"<<endl;
  cin>>oper;

  switch (oper)
  {
     case '+':
     cout<<a<<"+"<<b<<"="<<a+b;
     break;

     case '-':
     cout<<a<<"-"<<b<<"="<<a-b;
     break;

     case '*':
     cout<<a<<"*"<<b<<"="<<a*b;
     break;

     case '/':
     cout<<a<<"/"<<b<<"="<<a/b;
     break;

     case '%':
     bool isInteger_a,isInteger_b;
     isInteger_a=((int)a==a);
     isInteger_b=((int)b==b);

    if(isInteger_a && isInteger_b==true){
      cout<<a<<"%"<<b<<"="<<((int)a % (int)b);
    }
    else{
      cout<<"Its an  float number we cant perform Modulo operation";
    }

     default:
     cout<<"Enter a valid operator";
     
     
   }

  

  return 0;

  }










    