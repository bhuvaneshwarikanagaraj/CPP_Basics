// Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
// 1 - Write a function to print the names of all the students having age 14.
// 2 - Write another function to print the names of all the students having even roll no.
// 3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).


#include<iostream>
using namespace std;


struct Students{
    int rollNo;
    string name;
    int age;
    string address;
};

void studentsWhosAgeislessThan14(Students names ){
    if((names.age) == 14){
        cout<<names.name<<endl;

    }


}


int main(){

Students s1;
s1.rollNo=1;
s1.name="aakash";
s1.age=11;
s1.address="ganapathy";

Students s2;
s2.rollNo=1;
s2.name="ajay";
s2.age=12;
s2.address="ganapathy";

Students s3;
s3.rollNo=1;
s3.name="akashp";
s3.age=14;
s3.address="ganapathy";

Students s4;
s4.rollNo=1;
s4.name="Angel";
s4.age=11;
s4.address="gandipuram";

Students s5;
s5.rollNo=1;
s5.name="arul jenin";
s5.age=14;
s5.address="saravanampatti";

Students s6;
s6.rollNo=1;
s6.name="asis nova";
s6.age=15;
s6.address="thudiyalur";

Students s7;
s7.rollNo=1;
s7.name="Bhuvaneshwari";
s7.age=17;
s7.address="Oppo to suriya hoispital";


Students s8;
s8.rollNo=1;
s8.name="Devansh Shukla";
s8.age=13;
s8.address="Thopampatti";

studentsWhosAgeislessThan14(s1);
studentsWhosAgeislessThan14(s2);
studentsWhosAgeislessThan14(s3);
studentsWhosAgeislessThan14(s4);
studentsWhosAgeislessThan14(s5);
studentsWhosAgeislessThan14(s6);
studentsWhosAgeislessThan14(s7);
studentsWhosAgeislessThan14(s8);

return 0;
}