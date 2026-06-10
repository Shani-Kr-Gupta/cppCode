#include<iostream>
using namespace std;
 
int main(){
    int x,y,z;
    int temp;
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<"integer value "<<x<<" "<<y<<" "<<z;
    cout<<endl;

    // if(x%2==0){
    //     cout<<"even";
    // }
    // else{
    //     cout<<"odd";
    // }
    // if((x & 1) ==0){
    //     cout<<"even";
    // }
    // else{
    //     cout<<"odd";
    // }
    // temp=x;
    // x=y;
    // y=temp;
    // x=x^y;
    // y=y^x;
    // x=x^y;
    // x=x+y;
    // y=x-y;
    // x=x-y;
    // cout<<x<<" "<<y;
    // int count=0;
    // while(x!=0){
    //     x>>=1;
    //     count++;

    // }
    // cout<<"no. of bits equal to "<<count;
    int count=0;
    while(x!=0){
        if(x&1){
            count++;
           

        } x>>=1;
        
        

    }
    cout<<"no. of Set bits equal to "<<count;
    cout<<endl;
    if(x>y && x>z){
        cout<<"x is greater";
    }
    else if(y>x && y>z){
        cout<<"y is greater";
    }else{
        cout<<"z is greater";
    }







    return 0;
}