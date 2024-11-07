#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool compare(string s1, string s2)
    {
        int n = s1.length();
        int m = s2.length();

        if(n != m+1) return false;

        int i = 0;
        int j = 0;

        while(i < n)
        {
            if(s1[i] == s2[j])
            {
                i++, j++;
            }
            else
            {
                i++;
            }
        }

        if(i == n && j == m)
        {
            return true;
        }
        return false;
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](string s1, string s2)
        {
            return s1.size() < s2.size();
        });

        int n = words.size();
        vector<int> dp(n, 1);

        int maxi = 0;
        for(int i=0; i<n; i++)
        {
            for(int prev=0; prev<i; prev++)
            {
                if(compare(words[i], words[prev]))
                {
                    dp[i] = max(dp[i], 1 + dp[prev]);
                }
            }
            maxi = max(maxi, dp[i]);
        }

        return maxi;
    }
};

int main(){

    
    return 0;
}