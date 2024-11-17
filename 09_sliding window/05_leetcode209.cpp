#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int sum = 0;
        int j = 0;

        for(int i=0; i<nums.size(); i++)
        {
            sum += nums[i];
            while(sum >= target)
            {
                ans = min(ans, i-j+1);
                sum -= nums[j++]; 
            }
        }

        if(ans == INT_MAX)
        {
            return 0;
        }
        return ans;
    }
};

int main(){

    
    return 0;
}