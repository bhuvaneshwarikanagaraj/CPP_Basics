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
};


int main(){

    youtubeChannel youtube("IoTgrity","Devansh Shukla");
    youtube.publishedVidoesTitle.push_back("1.How does Arduino IDE work");
    youtube.publishedVidoesTitle.push_back("2.Fun with Arduino");
    youtube.publishedVidoesTitle.push_back("3.ARM Processors");
    
    
    cout<<"Name is :"<<youtube.name<<endl;
    cout<<"Owner's name is :"<<youtube.ownerName<<endl;
    cout<<"The current subscriber count is :"<<youtube.subscribersCount<<endl;
    for(string publishedVedios :youtube.publishedVidoesTitle){
        cout<<publishedVedios<<endl;
    }

    youtubeChannel youtube1("Geeky Space","Bhuvaneshwari");
    youtube1.publishedVidoesTitle.push_back("1.How does Arduino IDE work");
    youtube1.publishedVidoesTitle.push_back("2.Fun with Arduino");
    youtube1.publishedVidoesTitle.push_back("3.ARM Processors");

    cout<<"Name is :"<<youtube1.name<<endl;
    cout<<"Owner's name is :"<<youtube1.ownerName<<endl;
    cout<<"The current subscriber count is :"<<youtube1.subscribersCount<<endl;
    for(string publishedVedios :youtube1.publishedVidoesTitle){
        cout<<publishedVedios<<endl;
    }
    



    ///The problem with this class is we copy paste the code multiple times








    return 0;
}

