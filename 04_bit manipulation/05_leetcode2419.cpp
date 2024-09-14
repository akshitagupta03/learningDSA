#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            maxi = max(maxi, nums[i]);
        }
        
        int count = 0;
        int ans = 0;

        for(int i=0; i<n; i++)
        {
            if(nums[i] == maxi)
            {
                count++;
                ans = max(ans, count);
            }
            else
            {
                count = 0;
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}