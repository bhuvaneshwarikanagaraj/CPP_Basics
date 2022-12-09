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

};


int main(){


    youtubeChannel youtube;
    youtube.name="IoTgrity";
    youtube.ownerName="Devansh Shukla";
    youtube.subscribersCount=1000;
    youtube.publishedVidoesTitle={"Basics of IoT", "Fun with Arduino","DHT11 with Thingsspeak"};

    cout<<"Name is :"<<youtube.name<<endl;
    cout<<"Owner's name is :"<<youtube.ownerName<<endl;
    cout<<"The current subscriber count is :"<<youtube.subscribersCount<<endl;
    for(string publishedVedios :youtube.publishedVidoesTitle){
        cout<<publishedVedios<<endl;
    }






    return 0;
}