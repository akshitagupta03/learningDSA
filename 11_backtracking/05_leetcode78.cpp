#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int index, vector<vector<int>>& ans, vector<int> temp, vector<int>& arr)
    {
        if(index == arr.size())
        {
            ans.push_back(temp);
            return;
        }

        temp.push_back(arr[index]);
        solve(index+1, ans, temp, arr);
        temp.pop_back();
        solve(index+1, ans, temp, arr);
    }

    vector<vector<int>> subsets(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, ans, temp, nums);
        return ans;
    }
};

int main(){

    
    return 0;
}