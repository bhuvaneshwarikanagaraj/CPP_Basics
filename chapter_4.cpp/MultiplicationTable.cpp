#include<iostream>
using namespace std;
int main(){
int table,n;
cout<<"Enter the table number :"<<endl;
cout<<"Upto how much you need to print :";
cin>>n;
for(int i=1 ;i<=n ;i++){
    for(int j=1 ; j<=n ;j++){
        cout<<i <<" * "<<j<<" = "<<i*j<<endl;
    }
    cout<<endl;
}









}