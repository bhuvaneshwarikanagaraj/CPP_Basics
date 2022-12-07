#include<iostream>
using namespace std;
int main(){
    int height, width;
    char symbol;
    cout<<"Enter the height and width of the model:";
    cin>>height>>width;
    cin>>symbol;


    for(int i=1; i<=height ;i++){
        for(int j=1; j<=width ;j++ ){
            cout<<symbol<<" ";
        }
        cout<<endl;
    }
    return 0;

}