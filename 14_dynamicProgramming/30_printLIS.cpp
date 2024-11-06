#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& nums) {
        // Code here
        vector<int> dp(n, 1), hash(n, 1);
        
        for(int i=0; i<n; i++)
        {
            hash[i] = i;
            for(int prev=0; prev<i; prev++)
            {
                if((nums[prev] < nums[i]) && (1+dp[prev] > dp[i]))
                {
                    dp[i] = 1 + dp[prev];
                    hash[i] = prev;
                }
            }
        }
        
        int maxi = 0;
        int lastIndex = 0;
        
        for(int i=0; i<n; i++)
        {
            if(dp[i] > maxi)
            {
                maxi = dp[i];
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