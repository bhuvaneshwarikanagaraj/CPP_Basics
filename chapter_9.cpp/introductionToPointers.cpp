#include<iostream>
using namespace std;

int main(){

int a=5;
cout<<"variable :"<<a<<endl;
cout<<"address  : "<<&a<<endl;
//pointer is also a kind of variable used to store the address of an variable
int * ptr;
ptr=&a;
cout<<ptr<<endl;
//now lets change the value a using pointer
*ptr=10;//pointer de-referencing
cout<<*ptr<<endl;
cout<<"The value of a is "<<a<<endl;
return 0;
}