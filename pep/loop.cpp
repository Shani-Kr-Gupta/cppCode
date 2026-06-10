#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    // int i=1;
    // for(i=1;i<=x;i++){
    //     if(!(i&1)){
    //         cout<<i<<endl;
    //     }
    // }
    // while(i<x){
    //     if(!(i&1)){
    //         cout<<i<<endl;
    //     }

    // }
    int i=2;
    do{
        cout<<i;
        i+=2;

    }while(i<=x);
    return 0;

}