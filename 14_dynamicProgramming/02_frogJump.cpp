#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& heights)
{
    int prev = 0;
    int prev2 = 0;
    int curr = INT_MAX;

    for(int i=1; i<n; i++)
    {
        int one = prev + abs(heights[i] - heights[i-1]);
        int two = INT_MAX;
        if(i > 1)
        {
            two = prev2 + abs(heights[i] - heights[i-2]);
        }

        curr = min(one, two);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    return solve(n, heights);
}

int main(){

    
    return 0;
}