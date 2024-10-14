#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        int prev = 1;
        int suff = 1;

        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            if(prev == 0)
            {
                prev = 1;
            }
            if(suff == 0)
            {
                suff = 1;
            }

            prev *= nums[i];
            suff *= nums[n-i-1];

            ans = max(ans, max(prev, suff));
        }
        return ans;
    }
};

int main(){

    
    return 0;
}