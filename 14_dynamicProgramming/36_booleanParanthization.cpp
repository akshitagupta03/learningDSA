#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    const int mod = 1003;
    int countWays(int n, string s){
        // code here
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, 
        vector<int>(2, 0)));

        for(int i=0; i<n; i++)
        {
            dp[i][i][1] = ( s[i] == 'T') ? 1 : 0;
            dp[i][i][0] = ( s[i] == 'F') ? 1 : 0;
        }
        
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<n; j++)
            {
                if(i > j) continue;
                
                for(int isTrue=0; isTrue<=1; isTrue++)
                {
                    if(i == j) 
                    {
                        if(isTrue == 1) dp[i][j][isTrue] = s[i] == 'T';
                        else dp[i][j][isTrue] = s[i] == 'F';
                        continue;
                    }
                    
                    long long ways = 0;
                    for(int ind=i+1; ind <= j-1; ind += 2)
                    {
                        int leftTrue = dp[i][ind-1][1];
                        int rightTrue = dp[ind+1][j][1];
                        int leftFalse = dp[i][ind-1][0];
                        int rightFalse = dp[ind+1][j][0];
                        
                        if(s[ind] == '&')
                        {
                            if(isTrue)
                            {
                                ways = (ways + (leftTrue*rightTrue) % mod) % mod;
                            }
                            else
                            {
                                ways = (ways + (leftFalse*rightFalse) % mod + 
                                (leftTrue*rightFalse) % mod + 
                                (leftFalse*rightTrue) % mod) % mod;
                            }
                        }
                        else if(s[ind] == '|')
                        {
                            if(isTrue)
                            {
                                ways = (ways + (leftTrue*rightTrue) % mod + 
                                (leftTrue*rightFalse) % mod + 
                                (leftFalse*rightTrue) % mod) % mod;
                            }
                            else
                            {
                                ways = (ways + (leftFalse*rightFalse) % mod) % mod;
                            }
                        }
                        else
                        {
                            if(isTrue)
                            {
                                ways = (ways + (leftTrue*rightFalse) % mod + 
                                (leftFalse*rightTrue) % mod) % mod;
                            }
                            else
                            {
                                ways = (ways + (leftTrue*rightTrue) % mod + 
                                (leftFalse*rightFalse) % mod) % mod;
                            }
                        }
                    }
                    
                    dp[i][j][isTrue] = ways;
                }
            }
        }
        return dp[0][n-1][1];
    }
};

int main(){

    
    return 0;
}