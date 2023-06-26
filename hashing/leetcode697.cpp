#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxFreq = 0, ans=n;

        unordered_map<int, int> freq, left, right;

        for(int i=0; i<n; i++)
        {
            freq[nums[i]]++;
            maxFreq = max(maxFreq, freq[nums[i]]);

            if(left.find(nums[i]) == left.end())
                left[nums[i]] = i;
                right[nums[i]] = i;
        }
        for(auto i: freq){
            if(i.second == maxFreq){
                ans = min(ans, right[i.first] - left[i.first] + 1);
            }
        }
        return ans;
    }
};

int main()
{

        
    return 0;
}
