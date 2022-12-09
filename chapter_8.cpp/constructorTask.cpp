// Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
// 1 - having no parameter - values of both length and breadth are assigned zero.
// 2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
// 3 - having one number as parameter - both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.

#include<iostream>
using namespace std;


class Rectangle{
public:
    int length;
    int breath;

Rectangle(int Length=0 ,int Breath=0){

length=Length;
breath=Breath;

}

};

int main()
{
Rectangle R1(3,2);
Rectangle R2 (3);


  
    cout<<(R1.length*R1.breath)<<endl;
    cout<<(R2.length*R2.breath)<<endl;
    

    
    // cout<<(R3.length*R3.breath);
    
return 0;
}
