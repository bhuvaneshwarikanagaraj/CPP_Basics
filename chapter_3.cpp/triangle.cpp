#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the sides of the triangle";
    cin>>a>>b>>c;
    if((a==b) && (b==c) && (c==a)){
        cout<<"its Equilateral triangle";
    }
    else{
        if((a!=b)&&(b!=c)&& (c!=a)){
            cout<<"its saclent triangle";
        }
        else{
            cout<<"Isosceles triangle";
            }
    }
return 0;

}