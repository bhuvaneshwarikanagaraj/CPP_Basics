#include<iostream>
using namespace std;
int main(){
 int number,i;
 cout<<"Enter the Number :"<<endl;
 cin>>number;
 int counter=0;
 
 
 while(number>0){
    number=number/10;
    counter ++;

 }
 cout<<"Number of Digits is"<<counter;


return 0;
}