#include<iostream>
using namespace std;


class students{

private:
       int CGPA;
public:
       string name;
       int age;
    

students(string Name, int Age, int cgpa){

    name=Name;
    age=Age;
    setterFun(cgpa);

}


void setterFun(int cgpa){
      if(cgpa==1||cgpa==2||cgpa==4||cgpa==3||cgpa==5 ){
        CGPA=cgpa;
      }
      else{
        CGPA=0;
      }
}
void printingFunction(){
 cout<<name<<endl;
 cout<<age<<endl;
 cout<<CGPA<<endl;

}};


int main(){
    students student1("Bhuvaneshwari",21,3);
    student1.printingFunction();
   
    //It Will allow us to print the data because the CGPA is Under private
    //Lets create two functions named setter(to give the value to CGPA ttribute)


return 0;
}
