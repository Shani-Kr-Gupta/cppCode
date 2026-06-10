#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    vector<int>num;
    num.push_back(10);
    num.push_back(20);
    num.push_back(10);
    num.push_back(70);
    num.push_back(30);
    num.push_back(30);
    num.push_back(80);
    num.push_back(23);
    num.push_back(90);

    map<int,int> mp1;
    

    for(int i : num) {
        if(mp1.find(i)!=mp1.end()){
            mp1[i]+=1;
        }
        else{
            mp1[i]=1;
        }
       
    }
    for(auto it: mp1){
        cout<<it.first<<" "<<it.second<<endl;
       }
    return 0;
}
