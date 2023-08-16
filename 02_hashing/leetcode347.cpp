#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b)
    {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        vector<pair<int, int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), cmp);

        for(int i=0; i<k; i++){
            ans.push_back(vec[i].first);
        }

        return ans;
    }
};

int main()
{
    cout << "hello";
        
    return 0;
}
