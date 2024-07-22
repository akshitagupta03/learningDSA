#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long solve(long long num, long long n)
    {
        if(n == 0)
        {
            return 1;
        }

        long long int m = 1e9+7;

        long long ans = solve(num, n/2);
        ans = ans*ans;
        ans = ans%m;
        if(n % 2 == 1)
        {
            ans = ans*num;
        }
        ans = ans%m;
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long int m = 1e9+7;
        long long int even = n/2 + n%2;
        long long int odd = n/2;

        return (solve(5, even)*solve(4, odd))%m;
    }
};

int main(){

    
    return 0;
}