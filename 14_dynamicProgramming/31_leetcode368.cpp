#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        vector<int> dp(n, 1);
        vector<int> hash(n, 1);

        int len = 0;
        int lastIndex = -1;
        for(int i=0; i<n; i++)
        {
            hash[i] = i;
            for(int prev=0; prev<i; prev++)
            {
                if(nums[i]%nums[prev] == 0 && (1+dp[prev] > dp[i]))
                {
                    dp[i] = 1 + dp[prev];
                    hash[i] = prev;
                }
            }

            if(dp[i] > len)
            {
                len = dp[i];
                lastIndex = i;
            }
        }

        vector<int> ans;
        ans.push_back(nums[lastIndex]);

        while(hash[lastIndex] != lastIndex)
        {
            lastIndex = hash[lastIndex];
            ans.push_back(nums[lastIndex]);
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main(){

    
    return 0;
}