// Write a C++ program to create a class called Rectangle with private member variables for length and width.
// Implement member functions to calculate the rectangle’s area and perimeter.


#include<iostream>
using namespace std;

class rectangle{
    int length;
    int width;

    public:
    void area(int l, int w){
        length=l;
        width=w;
        int area=length*width;
        cout<<"Area of Rectangle : "<<area<<endl;
    }
    void perimeter(int l, int w){
        length=l;
        width=w;
        int perimeter= 2*(length + width);
        cout<<"Perimeter of Rectangle : "<<perimeter<<endl;
    }
};
int main(){
    int l,w;
    cin>>l>>w;
    rectangle r;
    r.area(l,w);
    r.perimeter(l,w);
    return 0;
}