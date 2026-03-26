#include<iostream>
using namespace std;
class bankDetails{
    private:
    int acc_no;
    string name;
    float balance;
    void set_values(int a, string n, float f){
        acc_no=a;
        name=n;
        balance=f;

    }
    void get_values(){
        cout<<"\nEnter the Account No.:";
        cin>>acc_no;
        cout<<"\nEnter the Name :";
        cin>>name;
        cout<<"\nEnter the Balance :";
        cin>>balance;
    }
    void display(){
        cout<<"\n Bank Account Details";
        cout<<"Account No."<<acc_no<<endl;
        cout<<"Account Holder's Name"<<name<<endl;
        cout<<"Balance of Account"<<balance<<endl;
       
    }
}
int main(){
    bankDetails b1,b2;
    b1.set_values(1234,"Shani",3568000);
    b1.get_values();
    b1,display();
    b2.get_values();
    b2.display();
    return 0;
}
