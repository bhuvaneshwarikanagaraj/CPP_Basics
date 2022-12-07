#include<iostream>
using namespace std;
int main(){
int height;
cout<<"Enter the height : ";
cin>>height;
for(int i=1 ; i<=height ; i++){
    for(int j=1 ; j<=(height+1)-i;j++)
    {
        cout<<"#";

    }
    cout<<endl;
}
return 0;
}