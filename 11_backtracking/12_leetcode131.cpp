#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s, int i, int j)
    {
        while(i <= j)
        {
            if(s[i++] != s[j--])
            {
                return false;
            }
        }
        return true;
    }

    void solve(int index, string s, vector<vector<string>>& ans, vector<string>& temp)
    {
        if(index == s.length())
        {
            ans.push_back(temp);
            return;
        }

        for(int i=index; i<s.length(); i++)
        {
            if(isPalindrome(s, index, i))
            {
                temp.push_back(s.substr(index, i - index + 1));
                solve(i+1, s, ans, temp);
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;

        solve(0, s, ans, temp);
        return ans;
    }
};

int main(){

    
    return 0;
}