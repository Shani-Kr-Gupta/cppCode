//Write a C++ program to implement a class called Circle that has a private member variable for radius.
//Include member functions to calculate the circle's area and circumference.

#include<iostream>
#include<iomanip>
using namespace std;
class circle{
    int radius;

    public:
    // circle(int r){
    //     radius=r;
    // }
    float area(int r){
        radius=r;
        return (3.14 * r * r  );
    }
    float circum(int r){
        radius=r;
        return (2*3.14*r);
    }

};
int main(){
    int r;
    cin>>r;
    circle c;
    float a,p;
    a=c.area(r);
    p=c.circum(r);
    cout<<fixed<<setprecision(2)<<a<<endl;
    cout<<fixed<<setprecision(2)<<p<<endl;
    return 0;
}