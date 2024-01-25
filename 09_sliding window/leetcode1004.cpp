#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int window = 0;
        int ans = 0;
        
        for(int right = 0; right < n; right++)
        {
            window += nums[right];
            while(window + k < (right - left + 1))
            {
                window -= nums[left];
                left++;
            }
            ans = max(ans, right-left+1);
        }

        return ans;
    }
};

int main(){

    
    return 0;
}