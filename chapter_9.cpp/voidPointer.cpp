#include<iostream>
using namespace std;
/*In this lets try to implement the void pointer

voidpointer is used to store the address of the integer even the pointer typr is
float or any other pointer variable.
*/


void integerPointerFunction(int* ptr){
    cout<<"Lets dereference the pointer And the value is :"<<*ptr<<endl;
}
void characterPointerFunction(char* ptr1){
    cout<<"Lets dereference the pointer And the value is :"<<*ptr1<<endl;
}





int main(){

    int number=10;
    
    

    char letter='a';
    

     integerPointerFunction(& number);
     characterPointerFunction(& letter);


}