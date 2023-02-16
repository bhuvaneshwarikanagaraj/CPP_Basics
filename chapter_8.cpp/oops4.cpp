///In this Lets see how constructor and class methods are use in c++
#include<iostream>
#include<list>
using namespace std;


class youtubeChannel{
// class is an user define datatypes

public:
string name;
string ownerName;
int subscribersCount;
list<string> publishedVidoesTitle;

youtubeChannel(string Name , string OwnerName){
    name=Name;
    ownerName=OwnerName;    
    subscribersCount=0;

}

void informationLoop(){

    cout<<"Name is :"<<name<<endl;
    cout<<"Owner's name is :"<<ownerName<<endl;
    cout<<"The current subscriber count is :"<<subscribersCount<<endl;
    for(string publishedVedios :publishedVidoesTitle){
        cout<<publishedVedios<<endl;
    } 
   }

};




int main(){
    //Here we have two objects named youtube and youtube1

    youtubeChannel youtube("IoTgrity","Devansh Shukla");
    youtube.publishedVidoesTitle.push_back("1.How does Arduino IDE work");
    youtube.publishedVidoesTitle.push_back("2.Fun with Arduino");
    youtube.publishedVidoesTitle.push_back("3.ARM Processors");
    
    youtube.informationLoop();
    

    youtubeChannel youtube1("Geeky Space","Bhuvaneshwari");
    youtube1.publishedVidoesTitle.push_back("1.How does Arduino IDE work");
    youtube1.publishedVidoesTitle.push_back("2.Fun with Arduino");
    youtube1.publishedVidoesTitle.push_back("3.ARM Processors");

  
    youtube1.informationLoop();
    
    return 0;
}

