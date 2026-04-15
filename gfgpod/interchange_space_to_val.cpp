//15-04-2026

#include<iostream>
using namespace std;
class Solution {
  public:
    string URLify(string &s) {
        string a = "";
        
        for(char c : s){
            if(c == ' ') {
                a += "%20";
            } else {
                a += c;
            }
        }
        
        return a;
    }
};
int main(){
    string a;
    getline(cin,a);
    Solution s;
    string res=s.URLify(a);
    cout<<res;
    return 0;
}
