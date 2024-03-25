#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = nums[0];
        int prev2 = 0;
        int ans = INT_MIN;

        for(int i=1; i<nums.size(); i++)
        {
            int take = nums[i];
            if(i > 1)
            {
                take += prev2;
            }
            int take2 = prev;

            ans = max(take, take2);
            prev2 = prev;
            prev = ans;
        }
        return prev;
    }
};

int main(){

    
    return 0;
}