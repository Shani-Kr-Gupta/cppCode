#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
        void setData(void){
            cout<<"Enter the Id"<<endl;
            cin>>id;
            count++;
        }

        void getData(void){
            cout<<"The id of this program is " <<id<<" and this is employee number "<<count<<endl;

        }
        static void getCount(){
            cout<<"The value of count is "<<count<<endl;
        }

};
int Employee:: count;   //static its means object share same storage.
                        //default value is zero.
int main(){
    Employee harry,rohan,lovish;
    harry.setData();
    harry.getData();
    Employee::getCount();//for call static member function

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}