#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int index, set<vector<int>>& ans, vector<int> temp, vector<int>& arr)
    {
        if(index == arr.size())
        {
            ans.insert(temp);
            return;
        }

        temp.push_back(arr[index]);
        solve(index+1, ans, temp, arr);
        temp.pop_back();
        solve(index+1, ans, temp, arr);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        vector<int> temp;
        solve(0, ans, temp, nums);

        vector<vector<int>> res;
        for(auto i:ans)
        {
            res.push_back(i);
        }
        return res;
    }
};

int main(){

    
    return 0;
}