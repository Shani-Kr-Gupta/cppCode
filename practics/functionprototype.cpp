#include<iostream>
using namespace std;
//function prototyping 
//int sum(int a, int b);
int sum(int,int);  //formal perameter
void g(void);
int main(){
    int num1,num2;
    cout<<"Enter First Number :"<<endl;
    cin>>num1;
    cout<<"Enter second Number :"<<endl;
    cin>>num2;
    //here num1 and num2 are Actual perameter
    cout<<"Total Number :"<<sum(num1,num2)<<endl;
    g();
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}
void g(){
    cout<<"\nHello, Good Morning";
}