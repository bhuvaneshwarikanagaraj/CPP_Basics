#include<iostream>
using namespace std;
int main()
{
int grade,sum=0,int i=0;
for( i=0;i<=5 ;i++){
     
do{
    cout<<"Enter the Grade: "<<i+1;
    cin>>grade;
    
}
while(grade>=1 && grade<=5);
sum=grade+sum;

}

cout<<sum;



return 0;
}







