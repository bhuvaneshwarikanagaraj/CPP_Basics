#include <iostream>
using namespace std;
 int main()
 {
    float height,weight;
    float BMI;
    cout<<"_______________________________BMI CALCULATOR_______________________________"<<endl;
    cout<<"Sir/Madom Please Enter your Height in cm : ";
    cin>>height;
    cout<<"Sir/Madom Please Enter your Weight in kg : ";
    cin>>weight;
    cout<<"Processing..........Wait for a minute"<<endl;
    BMI=(weight/((height/100.0)*(height/100)));
    cout<<"Your BMI is "<<BMI<<endl;
    if(BMI<18.5){
        cout<<"YOU ARE UNDER-WEIGHT"<<endl;

    }
    if(BMI<25 && BMI>18.5){
        cout<<"CONGRATS YOU ARE FIT"<<endl;

    }
    if(BMI >25){
        cout<<"YOU ARE OVER-WEIGHT"<<endl;

    }


    
        
    return 0;
 }