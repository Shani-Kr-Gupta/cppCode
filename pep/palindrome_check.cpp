#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int i=0;
    int j=s.length()-1;
    bool ispal=true;
    while(i<=j){
        if(s[i]!=s[j]){
            ispal=false;
        }
        i++;
        j--;
    }
    if (!ispal)
    {
        cout<<"not palindrome";
    }
    else{
        cout<<"palindrome";
    }
    
    return 0;
}