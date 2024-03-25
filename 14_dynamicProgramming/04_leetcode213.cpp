#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int s, int e, vector<int>& nums)
    {
        int prev = nums[s];
        int prev2 = 0;

        for(int i=s+1; i<e; i++)
        {
            int pick = nums[i] + prev2;
            int curr = max(pick, prev);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1)
        {
            return nums[0];
        }

        int ans1 = solve(0, n-1, nums);
        int ans2 = solve(1, n, nums);

        return max(ans1, ans2);
    }
};

int main(){

    
    return 0;
}