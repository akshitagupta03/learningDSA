#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(long long n, long long pre1, long long pre2)
    {
        int steps = 0;

        while(pre1 <= n)
        {
            steps += min(n+1, pre2) - pre1;
            pre1 = pre1*10;
            pre2 = pre2*10;
        }

        return steps;
    }
    int findKthNumber(int n, int k) {
        int num = 1;
        k--;

        while(k > 0)
        {
            int steps = solve(n, num, num+1);
            if(steps <= k)
            {
                num++;
                k -= steps;
            }
            else
            {
                num = num*10;
                k--;
            }
        }
        return num;
    }
};

int main(){

    
    return 0;
}