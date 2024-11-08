#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int maxi = pow(2, maximumBit) - 1;

        int xoro = 0;
        vector<int> ans;

        for(int i=0; i<n; i++)
        {
            xoro = xoro ^ nums[i];
            ans.push_back(xoro ^ maxi);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){

    
    return 0;
}