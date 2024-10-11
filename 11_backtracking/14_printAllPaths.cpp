#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(vector<vector<int>>& ans, vector<int> temp, 
    vector<vector<int>> &arr, int n, int m, int i, int j)
    {
        temp.push_back(arr[i][j]);
        
        if(i == n-1 && j == m-1)
        {
            ans.push_back(temp);
            return;
        }
        
        if(i+1 < n)
        {
            solve(ans, temp, arr, n, m, i+1, j);
        }
        if(j+1 < m)
        {
            solve(ans, temp, arr, n, m, i, j+1);
        }
        
        temp.pop_back();
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, 
    vector<vector<int>> &arr)
    {
        // code here
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(ans, temp, arr, n, m, 0, 0);
        return ans;
    }
};

int main(){

    
    return 0;
}