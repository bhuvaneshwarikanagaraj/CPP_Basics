#include<iostream>
using namespace std;
  
void swap(int& a ,int& b){
    int temp=a;
    a=b;
    b=temp;
}

void swap(char& char1, char& char2){
    int temp=char1;
    char1=char2;
    char2=temp;
}

int  main(){
    int a=5,b=6;
    char char1='a',char2='b';
    cout<< "The value of a is : "<< a<<endl;
    cout<<"The value of b is : "<<b<<endl;
    cout<<"the valve char1 is :"<<char1;
    cout<<"the value of char2 is : "<<char2;
    swap(a,b);
    swap(char1,char2);
    cout<< "The value of a is : "<<a<<endl;
    cout<<"The value of b is : "<<b<<endl;
    cout<<"the valve char1 is :"<<char1;
    cout<<"the value of char2 is : "<<char2;   

}









