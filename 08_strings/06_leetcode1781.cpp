#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int ans = 0;

        for(int i=0; i<s.length(); i++)
        {
            unordered_map<char, int> m;
            for(int j=i; j<s.length(); j++)
            {
                m[s[j]]++;

                int mini = INT_MAX;
                int maxi = INT_MIN;

                for(auto i:m)
                {
                    mini = min(mini, i.second);
                    maxi = max(maxi, i.second);
                }

                ans += maxi-mini;
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}