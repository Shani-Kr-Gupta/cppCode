#include<iostream>
using namespace std;

class Distance{
    int meters;
    int centimeters;
    float distance; 

    public:
    Distance(float m, float c){
        m=meters;
        c=centimeters;
    }

    void conversion(){
        if(centimeters>=12){
            int num=centimeters/12;
            int rem=centimeters%12;
            meters=meters+num+rem;
        }
        else{
            meters=meters+centimeters;
        }

    }
};
int main(){
    int 
}