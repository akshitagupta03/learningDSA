#include <bits/stdc++.h>
using namespace std;

// User function Template for C++
class Solution {
  public:
    void dfs(vector<vector<int>>& grid, vector<vector<int>>& vis, 
    int row, int col, vector<pair<int, int>>& vec, int row0, int col0)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        vis[row][col] = 1;
        vec.push_back({row - row0, col - col0});
        
        int di[] = {-1, 0, 1, 0};
        int dj[] = {0, 1, 0, -1};
        
        for(int i=0; i<4; i++)
        {
            int nrow = row + di[i];
            int ncol = col + dj[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
            vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1)
            {
                dfs(grid, vis, nrow, ncol, vec, row0, col0);
            }
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        set<vector<pair<int, int>>> s;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(vis[i][j] == 0 && grid[i][j] == 1)
                {
                    vector<pair<int, int>> vec;
                    dfs(grid, vis, i, j, vec, i, j);
                    s.insert(vec);
                }
            }
        }
        return s.size();
    }
};

int main(){

    
    return 0;
}