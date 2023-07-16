#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size()-1; i++){
            int sum = nums[i] + nums[i+1];
            if(m.find(sum) != m.end())
                return true;
            m[sum]++;
        }
        return false;
    }
};

int main()
{

        
    return 0;
}
