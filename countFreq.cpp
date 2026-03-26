#include<iostream>
using namespace std;
void findFreq(string s){
    char ch;
    int count;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        count=0;
        for(int j=0;j<s.length();j++){
            if(ch==s[j]){
                count++;
            }
        }
        cout<<ch<<":"<<count<<endl;
    }
}
int main(){
    string s;
    cin>>s;
    findFreq(s);
    return 0;
}