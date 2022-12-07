#include<iostream>
using namespace std;

template <typename T> 

void Swap(T& a,T& b){
    T temp=a;
    a=b;
    b=temp;
}

int  main(){
    int A=5, B=6;
    Swap(A,B);
    cout<<A<<endl;
    cout<<B<<endl;

    char c='c', d='d';
    Swap(c,d);
    cout<<c<<endl;
    cout<<d<<endl;
      
return 0;
}









