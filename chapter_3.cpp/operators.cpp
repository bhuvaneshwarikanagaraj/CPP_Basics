#include<iostream>
using namespace std;
int main(){
   // Arthimetic Operators
   // + - * / %

   cout<<3+5<<endl;
   cout<<5/2<<endl;
   // The answer should be 2.5 but it not.
   // to make that answer 2.5 lets assign any of the integer to float
   // say if 5/2 then we shall give them as 5.0/2.0 or 5/2.0 or 5.0/2
   cout<<5/2.0<<endl;//we will get reminder
   //modulo operator

   cout<<5%2<<endl;
  


    //Increment and Decrement 
    //++ --
    
    int counter=8;
    counter++;
    cout<<counter<<endl;
    counter--;
    cout<<counter<<endl;

    int counter1=5;
    cout<<counter1++<<endl;
    cout<<counter1<<endl;
    cout<<++counter1<<endl;
    cout<<--counter1<<endl;
    cout<<counter1<<endl;

    system("cls");


    //Relational operator

    //< > <= >= != ==

    int a=5, b=8;
    cout<<(a==b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<b)<<endl;

    system("cls");

    //Logical operator
    //&& || !

    cout<<(a==5 && b==5)<<endl;
    cout<<(a==5 || b==5)<<endl;
    cout<<!(a==5 && b==5)<<endl;
    cout<<(a==5 && b==5+3)<<endl;

    system("cls");


    //precedence
    // 1.Arthimetic operates
    //2.Relational operators
    //3.Incr/ Decr
    //3.Logical operator
    //4.Assignment operator


    //Assignment operator
    //= += -= /= %= *=

   int x=7;
//    x=x+7;
   x+=7;
   cout<<x;

system("pause>0");
    return 0;
}