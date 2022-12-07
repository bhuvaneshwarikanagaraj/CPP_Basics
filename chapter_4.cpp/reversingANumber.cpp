#include<iostream>
using namespace std;
int main(){

int number,lastDigit,counter=0;
cout<<"Enter a number"<<endl;
cin>>number;


while(number>0){
    lastDigit=number%10;
    number=number/10;
    cout<<lastDigit;
    counter++;
}




return 0;

}