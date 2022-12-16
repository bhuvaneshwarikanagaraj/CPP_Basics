#include<iostream>
using namespace std;


struct smartphones{
string name;
int storagespace;
string colour;
float price;
};


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
//We can't go one copying for all 1000 phones 
//There we go structures in c++



cout<<"Name          :"<<two.name<<endl;
cout<<"stoagespace   :"<<two.storagespace<<endl;
cout<<"colour        :"<<two.colour<<endl;
cout<<"price         : "<<two.price<<endl;

}
