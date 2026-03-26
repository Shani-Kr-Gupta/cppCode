// Write a C++ program to create a class Triangle with three side lengths.
// Include a function to determine whether the  triangle is Equilateral, Isosceles, or Scalene.


#include<iostream>
using namespace std;

class Triangle{
    int x,y,z;

    public:
    void check(int x, int y, int z){
        if(x==y && y==z){
            cout<<"Equilateral Triangle"<<endl;
        }
        else if(x==y || y==z || z==x){
            cout<<"Isosceles Triangle"<<endl;
        }
        else{
            cout<<"Scalene Triangle"<<endl;
        }
    }
    
};
int main(){
    int x,y,z;
    cout<<"Enter three sides"<<endl;
    cin>>x>>y>>z;
    Triangle t;
    t.check(x,y,z);
    return 0;
}
