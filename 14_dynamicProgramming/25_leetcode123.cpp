#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<int>& prices, int ind, int buy, int cap,
    vector<vector<vector<int>>>& dp)
    {
        if(ind == prices.size())
        {
            return 0;
        }
        if(cap == 0)
        {
            return 0;
        }

        if(dp[ind][buy][cap] != -1) return dp[ind][buy][cap];

        long long profit = 0;
        if(buy == 0)
        {
            int take = -prices[ind] + solve(prices, ind+1, 1, cap, dp);
            int notTake = solve(prices, ind+1, 0, cap, dp);

            profit = max(take, notTake);
        }
        if(buy == 1)
        {
            int take = prices[ind] + solve(prices, ind+1, 0, cap-1, dp);
            int notTake = solve(prices, ind+1, 1, cap, dp);

            profit = max(take, notTake);
        }

        return dp[ind][buy][cap] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<vector<vector<int>>> dp(n+1, 
        vector<vector<int>>(2, vector<int>(3, 0)));

        for(int ind=n-1; ind>=0; ind--)
        {
            for(int buy=0; buy<=1; buy++)
            {
                for(int cap=1; cap<=2; cap++)
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
        
        return dp[0][0][2];
    }
};

int main(){

    
    return 0;
}