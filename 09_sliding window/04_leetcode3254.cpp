#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n-k+1, -1);

        for(int i=0; i<n-k+1; i++)
        {
            int maxi = nums[i];
            bool flag = false;

            for(int j=i+1; j<i+k; j++)
            {
                if(nums[j] <= nums[j-1] || (abs(nums[j] - nums[j-1]) != 1))
                {
                    flag = true;
                    break;
                }
                else
                {   
                    maxi = max(maxi, nums[j]);
                }
            }

            ans[i] = maxi;
            if(flag) ans[i] = -1;
        }
        return ans;
    }
};

int main(){

    
    return 0;
}