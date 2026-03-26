
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>n;
            if(n==67){
              flag=true;  
            }
        }
        
        
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
           cout<<"NO"<<endl; 
        }
        

    }

}