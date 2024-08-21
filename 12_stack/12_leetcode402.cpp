#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> s;
        string ans = "";

        for(int i=0; i<num.length(); i++)
        {
            while(!s.empty() && k>0 && s.top() > (num[i] - '0'))
            {
                s.pop();
                k--;
            }
            s.push(num[i] - '0');
        }

        while(k > 0 && !s.empty())
        {
            s.pop();
            k--;
        }

        while(!s.empty())
        {
            ans += (s.top()+'0');
            s.pop();
        }
        
        while(ans != "" && ans.back() == '0')
        {
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());

        if(ans == "")
        {
            return "0";
        }

        return ans;
    }
};

int main(){

    
    return 0;
}