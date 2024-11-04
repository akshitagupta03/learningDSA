#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<vector<int>>& grid, int n, int i1, int j1, int j2, 
    vector<vector<vector<int>>>& dp)
    {
        // i1 + j1 = i2 + j2
        int i2 = i1 + j1 - j2;

        if(j1 >= n || i1 >= n || j2 >= n || i2 >= n || grid[i1][j1] == -1 ||
        grid[i2][j2] == -1)
        {
            return -1e8;
        }

        if(dp[i1][j1][j2] != -1) return dp[i1][j1][j2];

        if(i1 == n-1 && j1 == n-1)
        {
            return grid[i1][j1];
        }

        int cherries = (i1 == i2 && j1 == j2) ? 
        grid[i1][j1] : grid[i1][j1] + grid[i2][j2];

        // 1st moves right 2nd moves down
        int rd = solve(grid, n, i1, j1 + 1, j2, dp);
        // 1st moves down 2nd moves down
        int dd = solve(grid, n, i1+1, j1, j2, dp);
        // 1st moves right 2nd moves right
        int rr = solve(grid, n, i1, j1+1, j2+1, dp);
        // 1st moves down 2nd moves right
        int dr = solve(grid, n, i1+1, j1, j2+1, dp);
  
        cherries += max(max(rd, dd), max(rr, dr));
        return dp[i1][j1][j2] = cherries;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, 
        vector<int>(n, -1)));

        return max(0, solve(grid, n, 0, 0, 0, dp));
    }
};

int main(){

    
    return 0;
}