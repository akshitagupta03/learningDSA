#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // tabulation
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();

        vector<vector<int>> dp(n, vector<int>(amount+1, 0));
        for(int i=0; i <= amount; i++) 
        {
            if(i % coins[0] == 0) 
            {
                dp[0][i] = i/coins[0];
            }
            else 
            {
                dp[0][i] = 1e9;
            }
        }

        for(int ind=1; ind<n; ind++)
        {
            for(int amt=0; amt<=amount; amt++)
            {
                int notPick = dp[ind-1][amt];
                int pick = INT_MAX;

                if(coins[ind] <= amt)
                {
                    pick = 1 + dp[ind][amt-coins[ind]];
                }

                dp[ind][amt] = min(pick, notPick);
            }
        }
        
        if(dp[n-1][amount] >= 1e9) return -1;
        return dp[n-1][amount];
    }
};

int main(){

    
    return 0;
}