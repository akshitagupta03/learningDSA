#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+2, vector<int>(2, 0));

        for(int i=0; i<2; i++)
        {
            dp[n][i] = 0;
        }

        for(int ind=n-1; ind>=0; ind--)
        {
            for(int buy=0; buy<2; buy++)
            {
                long long profit = 0;
                if(buy == 0)
                {
                    int take = -prices[ind] + dp[ind+1][1];
                    int notTake = dp[ind+1][0];

                    profit = max(take, notTake);
                }
                else if(buy == 1)
                {
                    int take = prices[ind] + dp[ind+2][0];
                    int notTake = dp[ind+1][1];

                    profit = max(take, notTake);
                }

                dp[ind][buy] = profit;
            }
        }

        return dp[0][0];
    }
};

int main(){

    
    return 0;
}