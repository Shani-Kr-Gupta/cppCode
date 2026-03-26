// Write a class Time with a function to convert time to total seconds and a static 
////function to convert seconds back into time.
#include<iostream>
using namespace std;
class Time{
    static int time;
    static int min;
    static int sec;
    static int hours;
    public:
    static int calc(int h,int m,int s){
        hours=h;
        min=m;
        sec=s;
        if(hours!=0){
            time=(h*60*60)+(min*60)+sec;
            cout<<"Total Time: "<<time<<" Seconds";
        }
        else if(hours==0){
            time=(min*60)+sec;
            cout<<"Total Time: "<<time<<" Seconds";
        }
        return 0;
    }
};
int Time::time;
int Time::min;
int Time::sec;
int Time::hours;

int main(){
    int h,m,s;
    cout<<"Enter hours :"<<endl;
    cin>>h;
    cout<<"Enter Minutes :"<<endl;
    cin>>m;
    cout<<"Enter Seconds: "<<endl;
    cin>>s;
    Time t;
    t.calc(h,m,s);
    return 0;
}

