#include<iostream>
using namespace std;
int main(){

    int hostUserNum,guestUserNumber;
    cout<<"Host :";
    cin>>hostUserNum;
    system("cls");
    cout<<"Guest :";
    cin>>guestUserNumber;
    (hostUserNum==guestUserNumber)?cout<<"you have entered the correct guessed value":cout<<"Nope better luck next time";
    system("pause>0");
    return 0;
}