#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }

        float n = (1.0)*(nums.size());
        float num = floor(n/3);
        vector<int> ans;

        for(auto i:m)
        {
            if(i.second > num)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}