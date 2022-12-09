///In this Lets see how constructor and class methods are use in c++
#include<iostream>
#include<list>
using namespace std;


class youtubeChannel{
// class is an user define datatypes

private://only available within the class
    string ownerName;
    int subscribersCount;
    list<string> publishedVidoesTitle;

protected:
string name;//This make the attributes available in the derived classes too
int contenetQuality;

public:
    youtubeChannel(string Name , string OwnerName){
    name=Name;
    ownerName=OwnerName;
    subscribersCount=0;
    contenetQuality=0;

}

void informationLoop(){

    cout<<"Channel Name is :"<<name<<endl;
    cout<<"Owner's name is :"<<ownerName<<endl;
    cout<<"The current subscriber count is :"<<subscribersCount<<endl;
    cout<<"List of Vedios"<<endl;
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

   void qualityContent(){
    contenetQuality<5?cout<<name<<"has Bad Quality content"<<endl:cout<<name<<" has Good quality content"<<endl;
   }

};

class cookingYoutubeChannel: public youtubeChannel {//Inherited class this class have acess to all methods and attributes in class 1 name youtubeChannel
    public:
    cookingYoutubeChannel(string Name ,string OwnerName):youtubeChannel(Name,OwnerName){

    }
void practice(){
 cout<<name<<"...................Aru suvai Virundhuiku varugaa varuga enna varveikirom  .................";
 contenetQuality++;
}

};

class SingersYoutubeChannel: public youtubeChannel {//Inherited class this class have acess to all methods and attributes in class 1 name youtubeChannel
    public:
    SingersYoutubeChannel(string Name ,string OwnerName):youtubeChannel(Name,OwnerName){

    }
void practice(){
 cout<<name<<"...................padaludan adal................."<<endl;
 contenetQuality++;

}

};


int main(){

    youtubeChannel youtube1("Geeky Space","Bhuvaneshwari");
    youtube1.listOfviodes("1.How does Arduino IDE work");
    youtube1.listOfviodes("2.Fun with Arduino");
    youtube1.listOfviodes("DHT11 with Thingspeak API");
    youtube1.unsubscribe();
    youtube1.unsubscribe();
    youtube1.unsubscribe();
    youtube1.informationLoop();

    cout<<endl;



    cookingYoutubeChannel Channel1("Cooking with Keerthi","Keerthana");
    Channel1.listOfviodes("1.Biriyani");
    Channel1.listOfviodes("2.Penne Pasta");
    Channel1.listOfviodes("3.Chappathi with Panner Butter Malasa");
    Channel1.informationLoop();
    Channel1.subscribe();
    Channel1.subscribe();
    Channel1.subscribe();
    Channel1.unsubscribe();
    Channel1.unsubscribe();
    
    

    cout<<endl;


    SingersYoutubeChannel firstChannel("KIKI STAGE","KIKI");
    firstChannel.listOfviodes("1.Charile Puth- Attention Cover");
    firstChannel.listOfviodes("1.Talyor swift -Willow");
    firstChannel.listOfviodes("1.ARR-New York nagaram");
    firstChannel.informationLoop();
    firstChannel.subscribe();

    cout<<endl;


    Channel1.practice();
    firstChannel.practice();
    firstChannel.practice();
    firstChannel.practice();
    firstChannel.practice();
    firstChannel.practice();
    firstChannel.practice();

    firstChannel.qualityContent();
    Channel1.qualityContent();
    
    

    cout<<endl;
    
    return 0;
}

