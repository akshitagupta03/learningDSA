#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // tabulation
    int mod = 1e9+7;
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, 0));

        for(int i=0; i <= amount; i++) 
        {
            if(i % coins[0] == 0) 
            {
                dp[0][i] = 1;
            }
        }

        for(int ind=1; ind<n; ind++)
        {
            for(int target=0; target<=amount; target++)
            {
                long notPick = dp[ind-1][target];
                long pick = 0;

                if(coins[ind] <= target)
                {
                    pick = dp[ind][target-coins[ind]];
                }

                dp[ind][target] = (pick+notPick);
            }
        }
        return dp[n-1][amount];
    }
};

int main(){

    
    return 0;
}