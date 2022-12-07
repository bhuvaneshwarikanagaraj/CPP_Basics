#include<iostream>
using namespace std;
 
void menuFunction(){
    
    cout<<"*********MENU***********"<<endl;
    cout<<" 1. Check Balance"<<endl;
    cout<<" 2. Deposite"<<endl;
    cout<<" 3. Withdrawal"<<endl;
}

int main()
{
    menuFunction();
    int option,balance=500;
    cout<<"Enter an option :";
    cin>>option;
       

    switch (option){

        case 1:
        cout<<"Your current account balance is "<<balance<<endl;
        break;

        case 2:
        int deposite;
        cout<<"Enter the amount to deposite "<<endl;
        cin>>deposite;
        balance+=deposite;
        cout<<"Your available balance is "<<balance;
        cout<<"Thank you your amount is deposited "<<endl;

        break;

        case 3:
        int Withdrawal;
        cout<<"The amount to withdraw ";
        cin>>Withdrawal;
        balance-=Withdrawal;
        cout<<"your current balance is "<<balance<<endl;
        break;

        default:
        cout<<"Enter the correct option ";
        cout<<"THANK YOU";

    }
    }

