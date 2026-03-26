#include<iostream>
using namespace std;
class airline{
    public:
    int flightNo;
    string destination;
    float tPrice;
    void input(){
        cout<<"Enter Flight number"<<endl;
        cin>>flightNo;
        cout<<"Enter Destination"<<endl;
        getline(cin,destination);
        cin.ignore();
        cout<<"enter Ticket Price"<<endl;
        cin>>tPrice;
    }
    void display(){
        cout<<"flight No. "<<flightNo<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"flight Ticket price: "<<tPrice<<endl;
    }

};
int main(){
    airline a;
    airline *ptr=&a;
    ptr->input();
    ptr->display();
    return 0;
}
