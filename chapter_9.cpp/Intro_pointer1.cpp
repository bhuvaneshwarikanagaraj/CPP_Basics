#include<iostream>

using namespace std;

int main(){
    int a=23;
    int *p; // Integer to Pointer
    p= &a;
    cout<<"value of a ----> value stored @ a : "<<a<<endl;
    cout<<"Value of p --->Address of the a : "<<p<<endl;
    cout<<"Value of *p---->value of a : "<<*p<<endl;
    cout<<"Value of &a ----> Address of a : "<<&a<<endl;
    *p=25;
    cout<<"Value of &a ----> Address of a : "<<&a<<endl;
    cout<<"value of a ----> value stored @ a : "<<a<<endl;
    cout<<"Value of *p---->value of a : "<<*p<<endl;
    int b=84;
    *p=b;
    cout<<"Value of &a ----> Address of a : "<<&a<<endl;
    cout<<"value of a ----> value stored @ a : "<<a<<endl;
    cout<<"Value of *p---->value of a : "<<*p<<endl;


}






