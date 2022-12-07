#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    a=10,c=20;
    b=a;
    a=c;
    c=b;
    cout<<"the value of A is"<<a<<endl;
    cout<<"the value of c is"<<c<<endl;
return 0;
}