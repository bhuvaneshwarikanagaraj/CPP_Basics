///In this Lets see how constructor and class methods are use in c++
#include<iostream>
#include<list>
using namespace std;


class youtubeChannel{
// class is an user define datatypes

private:
    string name;
    string ownerName;
    int subscribersCount;
    list<string> publishedVidoesTitle;
public:
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
   void subscribe(){
    subscribersCount++;
   }

   void unsubscribe(){
    subscribersCount<=0? :subscribersCount--;//usage of ternery operator
   }

   void listOfviodes(string ListOfv){

    publishedVidoesTitle.push_back(ListOfv);
   }

};

int main(){

    youtubeChannel youtube1("Geeky Space","Bhuvaneshwari");
    // youtube1.publishedVidoesTitle.push_back("1.How does Arduino IDE work");
    // youtube1.publishedVidoesTitle.push_back("2.Fun with Arduino");
    // youtube1.publishedVidoesTitle.push_back("3.ARM Processors");
    youtube1.listOfviodes("1.How does Arduino IDE work");
    youtube1.listOfviodes("2.Fun with Arduino");
    youtube1.listOfviodes("DHT11 with Thingspeak API");
    youtube1.unsubscribe();
    youtube1.unsubscribe();
    youtube1.unsubscribe();
    youtube1.informationLoop();
    return 0;
}

