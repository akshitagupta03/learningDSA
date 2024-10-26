#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // space optimisation
    int fib(int n) {
        if(n <= 1) return n;

        int prev2 = 0, prev1 = 1;
        for(int i=2; i<=n; i++)
        {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};

int main(){

    
    return 0;
}