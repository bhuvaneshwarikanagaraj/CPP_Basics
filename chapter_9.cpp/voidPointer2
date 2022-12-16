#include<iostream>
using namespace std;
/*In this lets try to implement the void pointer
 
voidpointer is used to store the address of the integer even the pointer typr is
float or any other pointer variable.
*/

void print(void* ptrval, char type){
    switch(type)
    {
        case 'i':
        /*if the entered value is integer then the value passed inside the the void* will be 
        typecased into int*
        */
        cout<<" the value is :"<<*((int*)ptrval)<<endl;
        break;
        
        case 'c':
        cout<<"the value is : "<<*((char*)ptrval)<<endl;
        break;

    }

}


int main(){

    int number=10;
 
    

    char letter='a';

     print(& number, 'i');
     print(& letter,'c');


}