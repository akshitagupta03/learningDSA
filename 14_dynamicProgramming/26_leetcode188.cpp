#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();

        vector<vector<vector<int>>> dp(n+1, 
        vector<vector<int>>(2, vector<int>(k+1, 0)));

        for(int ind=n-1; ind>=0; ind--)
        {
            for(int buy=0; buy<=1; buy++)
            {
                for(int cap=1; cap<=k; cap++)
                {
                    long long profit = 0;
                    if(buy == 0)
                    {
                        int take = -prices[ind] + dp[ind+1][1][cap];
                        int notTake = dp[ind+1][0][cap];

                        profit = max(take, notTake);
                    }
                    if(buy == 1)
                    {
                        int take = prices[ind] + dp[ind+1][0][cap-1];
                        int notTake = dp[ind+1][1][cap];

                        profit = max(take, notTake);
                    }

                    dp[ind][buy][cap] = profit;
                }
            }
        }
        
        return dp[0][0][k];
    }
};

int main(){

    
    return 0;
}