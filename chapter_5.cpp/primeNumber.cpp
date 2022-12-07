#include<iostream>

using namespace std;


bool primeNumberFunction( int number);

int main()
{

    int number;
    cin>>number;
    
    bool state = primeNumberFunction(number);
    if(state){
        cout<<"Its an Prime number";
    }
    else{
        cout<<"Its not an Prime number";
    }

    return 0;
    
    
}

bool primeNumberFunction(int number)
{
   bool isPrimeFlag=true;

    for(int i=2 ;i<number ;i++){
        if(number%i==0){
            return false;
            
        }
        return true;
        
    }
    
}