#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >>t;
    while(t--){
    vector<string>arr(3);
    for(int i=0;i<3;i++){
        cin>>arr[i];
       
    }
    
    for(int i=0;i<3;i++){
        cout<<arr[i][0];
    }
    cout<<endl;
    }
    return 0;

}

