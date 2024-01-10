#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool solve(int i, string& s)
    {
        if(i >= s.length()/2)
        {
            return true;
        }

        if(s[i] != s[s.length() - i - 1])
        {
            return false;
        }
        return solve(i+1, s);
    }
    bool isPalindrome(string s) 
    {
        string ans = "";
        transform(s.begin(), s.end(), s.begin(), ::tolower); 

        for(int i=0; i<s.length(); i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
            {
                ans += s[i];
            }
        }
        cout << ans << endl;
        return solve(0, ans);
    }
};

int main(){

    
    return 0;
}