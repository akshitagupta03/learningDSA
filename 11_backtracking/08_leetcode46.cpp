#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int ind, vector<int>& temp, vector<vector<int>>& ans)
    {
        if(ind == temp.size())
        {
            ans.push_back(temp);
            return;
        }

        for(int i=ind; i<temp.size(); i++)
        {
            swap(temp[ind], temp[i]);
            solve(ind+1, temp, ans);
            swap(temp[ind], temp[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0, nums, ans);
        return ans;
    }
};

int main(){

    
    return 0;
}