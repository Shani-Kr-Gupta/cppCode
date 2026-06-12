#include<iostream>

class Solution {
public:

    bool linear_search(vector<int>& nums, int x) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == x) {
                return true;
            }
        }
        return false;
    }

    int longestConsecutive(vector<int>& nums) {

        int ans = 0;

        for(int j = 0; j < nums.size(); j++) {

            int x = nums[j];
            int cnt = 1;

            while(linear_search(nums, x + 1)) {
                x++;
                cnt++;
            }

            ans = max(ans, cnt);
        }

        return ans;
    }
};