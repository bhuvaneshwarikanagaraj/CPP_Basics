#include<iostream>
using namespace std;


struct smartphones{
string name;
int storagespace;
string colour;
float price;
};


struct person{
    string Name;
    int age;
    smartphones hello;
};

void smartphoneInfo(smartphones info){
cout<<"Name          :"<<info.name<<endl;
cout<<"stoagespace   :"<<info.storagespace<<endl;
cout<<"colour        :"<<info.colour<<endl;
cout<<"price         : "<<info.price<<endl; 

}

void personInfo(person info){
cout<<"Name          :"<<info.Name<<endl;
cout<<"age           :"<<info.age<<endl;
smartphoneInfo(info.hello);
    
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


person p1;
p1.Name="Bhuvaneshwari";
p1.age=21;
p1.hello=one;


// smartphoneInfo(one);
// smartphoneInfo(two);
personInfo(p1);
//We can't go one copying for all 1000 phones 
//There we go structures in c++



}
