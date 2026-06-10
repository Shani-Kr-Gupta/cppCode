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

    
    cout<<"before Sorting :";
    for(int i : num){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After reverse :";

    reverse(num.begin(),num.end());
     for(int i : num){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"After sort ";

    sort(num.begin(),num.end());
     for(int i : num){
        cout<<i<<" ";
    }
    cout<<endl;
    //set
    cout<<"Set values :";
    set<int>st(num.begin(),num.end());
    for(int i : st){  //for(auto i : st){ when the datatype is not known to us then we us auto
        cout<<i<<" ";
    }
    cout<<"\n";

    //unordered set
    cout<<"Unordered_Set values :";
    unordered_set<int>stu(num.begin(),num.end());
    for(auto i : stu){  //for(auto i : st){ when the datatype is not known to us then we us auto
        cout<<i<<" ";
    }


    return 0;
}
