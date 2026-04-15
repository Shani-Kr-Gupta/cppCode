//14-4-2026


#include<iostream>
using namespace std;
class Solution {
  public:
    string modify (string s) {
        string result = "";
        
        for(char c : s) {
            if(c != ' ') {
                result += c;
            }
        }
        
        return result;
    }
};
int main(){
    string a;
    getline(cin,a);
    Solution s;
    string ans=s.modify(a);
    cout<<ans;
    return 0;
}

