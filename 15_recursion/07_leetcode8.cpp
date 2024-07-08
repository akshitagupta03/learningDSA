#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(string s, int i, int n, long ans, bool flag)
    {
        if(ans > 2147483647)
        {
            if(flag == false && ans >= 2147483648)
            {
                return -2147483648;
            }
            return 2147483647;
        }

        if(i == n)
        {
            if(flag == false)
            {
                return -1*ans;
            }
            return ans;
        }

        if(s[i] >= 48 && s[i] <= 57)
        {
            ans *= 10;
            ans += int(s[i] - '0');
            return solve(s, i+1, n, ans, flag);
        }

        if(flag == false)
        {
            return -1*ans;
        }
        return ans;
    }

    int myAtoi(string s) {
        int n = s.length();
        int i = 0;
        long ans = 0;
        bool flag = true;

        while(s[i] == ' ' && i<n)
        {
            i++;
        }
        while((s[i] <= 47 || s[i] >= 58) && i<n)
        {
            if(s[i] == '-')
            {
                flag = false;
                i++;
                break;
            }
            else if(s[i] == '+')
            {
                i++;
                break;
            }
            else if((s[i] >= 65 && s[i] <= 90) || 
            (s[i] >= 97 && s[i] <= 122) || s[i] == '.')
            {
                return 0;
            }
        }

        while(s[i] == '0' && i<n)
        {
            i++;
        }

        long res = solve(s, i, n, ans, flag);

        return res;
    }
};

int main(){

    
    return 0;
}