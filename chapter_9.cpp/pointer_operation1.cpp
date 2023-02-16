#include<iostream>

using namespace std;

int main(){
   int a = 1;
   void *p;
   p = &a;
   cout<<"Integer pointer value :"<<p;
   // //Displays the Address
   // cout<<p<<endl;
   // cout<<p+1<<endl;
   // cout<<p+2<<endl;

   // //Displays the Values 

   //  cout<<* p<<endl;
   // cout<<*(p+1)<<endl;
   // cout<<* (p+2)<<endl;

   //Lets use charter pointer to store an Integer value and check what has happed?
   cout<<endl<<" CHARACTER POINTER "<<endl;
   char *chart;
   chart = ( char* )p;
   cout<<" The Address of c :"<< chart<<endl;
   cout<<" The value of c   :"<<*chart<<endl;

return 0;

}






