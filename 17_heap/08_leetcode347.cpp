#include <bits/stdc++.h>
using namespace std;

class compare
{
    public:
        bool operator()(pair<int, int> a, pair<int, int> b)
        {
            return a.second > b.second;
        }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
        unordered_map<int, int> m;
        vector<int> ans;

        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            pq.push({i.first, i.second});
            if(pq.size() > k)
            {
                pq.pop();
            }
        }

        while(!pq.empty())
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};

int main(){

    
    return 0;
}