#include<iostream>

using namespace std;
 
void introduceMe(string name, string city , int age=0){
  cout<<"My name is "<<name<< endl;
  cout<<"I am from "<<city<<endl;
  if(age!=0){
  cout<<"And my age is "<<age<<endl;
  }
}

 int main(){
    string name,city;
    int age;
    cout<<"Name :";
    cin>>name;
    cout<<"City :";
    cin>>city;
    cout<<"Age :";
    cin>>age;

    introduceMe(name,city,age);
    introduceMe(name , city , age);
return 0;
 }


 //This explains the parameters in c++
 // We can assign default value to our middle parameter  i.e
 // void introduceMe(string name, string city="Default" , int age)
 // the above function declarations are not allowed
 //void introduceMe(string name, string city="default" , int age=0)
 // the above line is allowed