#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<vector<int>> &ans, vector<int> temp, vector<int>& arr, int target, int index)
    {
        if(index == arr.size())
        {
            if(target == 0)
            {
                ans.push_back(temp);
                temp.clear();
            }
            return;
        }

        if(arr[index] <= target)
        {
            temp.push_back(arr[index]);
            solve(ans, temp, arr, target - arr[index], index);
            temp.pop_back();
        }
        solve(ans, temp, arr, target, index+1);
    }   

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans, temp, candidates, target, 0);
        return ans;
    }
};

int main(){

    
    return 0;
}