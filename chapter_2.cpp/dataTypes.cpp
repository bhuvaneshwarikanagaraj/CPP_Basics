#include <iostream>
using namespace std;
int main()
{
    int yearOfBirth=2001; 
    char Gender ='f';
    bool isOlderThan18=true;
    float averageGrade=4.5;
    double balence=2456678988992;
    unsigned int newVariable;

    cout<<"size of integer is "<<sizeof(int) <<" bytes"<<endl;
    cout<<"size of char is "<<sizeof(char) <<" bytes"<<endl;
    cout<<"size of bool is "<<sizeof(bool) <<" bytes"<<endl;
    cout<<"size of float is "<<sizeof(float) <<" bytes"<<endl;
    cout<<"size of double is "<<sizeof(double) <<" bytes"<<endl;
    cout<<"size of usigned integer is "<<sizeof(unsigned int) <<" bytes"<<endl;
    
    cout<<"INT MAX VALUE :"<<INT32_MAX<<endl;

    cout<<"INT MIN VALUE :"<<INT32_MIN<<endl;

    cout<<"MAX RANGE OF USIGNED INTEGER"<<UINT32_MAX<<endl;
   
    system("pause>0");
    
 return 0;
}