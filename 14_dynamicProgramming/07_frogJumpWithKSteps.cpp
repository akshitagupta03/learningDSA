#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // tabulation
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        int n = arr.size();
        vector<int> dp(n+1, -1);
        dp[0] = 0;
        
        for(int i=1; i<n; i++)
        {
            int minJumps = INT_MAX;
            for(int j=1; j<=k; j++)
            {
                if(i-j >= 0)
                {
                    int jump = dp[i-j] + abs(arr[i] - arr[i-j]);
                    minJumps = min(minJumps, jump);
                }
            }
            dp[i] = minJumps;
        }
        return dp[n-1];
    }
};

int main(){

    
    return 0;
}