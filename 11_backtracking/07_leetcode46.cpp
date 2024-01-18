#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int> temp, vector<vector<int>>& ans, vector<int> arr, unordered_set<int> s)
    {
        if(temp.size() == arr.size())
        {
            ans.push_back(temp);
            return;
        }

        for(int i=0; i<arr.size(); i++)
        {
            if(s.find(arr[i]) == s.end())
            {
                temp.push_back(arr[i]);
                s.insert(arr[i]);
                solve(temp, ans, arr, s);
                s.erase(arr[i]);
                temp.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        unordered_set<int> s;
        solve(temp, ans, nums, s);
        return ans;
    }
};

int main(){

    
    return 0;
}