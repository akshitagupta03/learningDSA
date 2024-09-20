#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();

        if(n <= 1) return s;

        auto expand = [&](int left, int right)
        {
            while(left >= 0 && right < n && s[left] == s[right])
            {
                left--;
                right++;
            }
            return s.substr(left+1, right-left-1);
        };

        string ans = s.substr(0, 1);
        for(int i=0; i<n-1; i++)
        {
            string odd = expand(i, i);
            string even = expand(i, i+1);

            if(odd.length() > ans.length())
            {
                ans = odd;
            }
            if(even.length() > ans.length())
            {
                ans = even;
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}