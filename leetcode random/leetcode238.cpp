#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long mul = 1;
        int zero = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                mul *= nums[i];
            }
            else
            {
                zero++;
            }
        }

        vector<int> ans(nums.size());
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != 0 && zero > 0)
            {
                ans[i] = 0;
            }
            else if(nums[i] == 0 && zero >= 2)
            {
                ans[i] = 0;
            }
            else if(nums[i] == 0 && zero == 1)
            {
                ans[i] = mul;
            }
            else
            {
                ans[i] = mul/nums[i];
            }
        }

        return ans;
    }
};

int main(){

    
    return 0;
}