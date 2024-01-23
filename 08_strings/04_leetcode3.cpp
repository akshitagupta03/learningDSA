#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int n = s.length();
        int left = 0;

        unordered_set<char> set;
        for(int right=0; right<n; right++)
        {
            if(set.find(s[right]) == set.end())
            {
                set.insert(s[right]);
                ans = max(ans, right - left + 1);
            }
            else
            {
                while(set.find(s[right]) != set.end())
                {
                    set.erase(s[left++]);
                }
                set.insert(s[right]);
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}