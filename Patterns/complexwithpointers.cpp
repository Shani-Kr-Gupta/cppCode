#include<iostream>
using namespace std;
class Complex{
    public:
    int r,i;
  
};

int main(){
    Complex obj1;
    Complex obj2;
    //pointer to object;
    Complex *p1= &obj1;
    Complex *p2= &obj2;
    cin>>p1->r>>p1->i;
    cin>>p2->r>>p2->i;
    cout<<"Here the real part is "<<p1->r<<endl;
    cout<<"Here the imaginary part is "<<p1->i<<endl;
    cout<<"Here the real part is "<<p2->r<<endl;
    cout<<"Here the imaginary part is "<<p2->i<<endl;
    return 0;


    
}