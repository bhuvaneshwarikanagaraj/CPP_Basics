#include<iostream>
using namespace std;
int main(){
    int number, output=1;
    cout<<"Enter the number :";
    cin>>number;
    for(int i=1 ; i<=number ;i++){
        output=i*output;

    }
    cout<<endl; 
    cout<<output;

    return 0;

}