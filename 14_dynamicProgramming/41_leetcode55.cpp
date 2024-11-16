#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        dp[n-1] = true;

        for(int index=n-2; index>=0; index--)
        {
            for(int i=1; i<=nums[index]; i++)
            {
                if(index+i > n-1)
                {
                    continue;
                }
                if(dp[index+i] == true)
                {
                    dp[index] = true;
                }
            }
        }
        return dp[0];
    }
};

int main(){

    
    return 0;
}