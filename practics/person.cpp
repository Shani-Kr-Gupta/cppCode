// Create a class Person with fields name, age, and country.
// Write functions to set and get these values, and a display() function.

#include<iostream>
#include<string>
using namespace std;

class person{
    string name;
    int age;
    string country;

    public:
    void setValues(string n, int a, string c){
        name=n;
        age=a;
        country=c;

    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    string getCountry(){
        return country;
    }
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Country :"<<country<<endl;
    }

};
int main(){
    string name,country;
    int age;
    cout<<"Enter your Name"<<endl;
    getline(cin,name);
    cout<<"Enter your Age"<<endl;
    cin>>age;
    cin.ignore();
    cout<<"Enter your Country"<<endl;
    getline(cin,country);
    person p;
    p.setValues(name,age,country);
    p.display();
    return 0;

}