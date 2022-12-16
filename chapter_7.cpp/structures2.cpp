#include<iostream>
using namespace std;


struct smartphones{
string name;
int storagespace;
string colour;
float price;
};

void smartphoneInfo(smartphones info){
cout<<"Name          :"<<info.name<<endl;
cout<<"stoagespace   :"<<info.storagespace<<endl;
cout<<"colour        :"<<info.colour<<endl;
cout<<"price         : "<<info.price<<endl; 

}

int main(){

smartphones one;
one.name="oppo";
one.storagespace=32;
one.colour="blue";
one.price=456.67;

smartphones two;
two.name="oppo";
two.storagespace=32;
one.colour="blue";
one.price=4534.3;


smartphoneInfo(one);
smartphoneInfo(two);
//We can't go one copying for all 1000 phones 
//There we go structures in c++



}
