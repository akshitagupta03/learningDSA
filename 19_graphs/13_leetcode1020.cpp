#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<int>>& grid, int row, int col, 
    vector<vector<int>>& vis)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        vis[row][col] = true;
        grid[row][col] = 0;

        int di[] = {-1, 0, 1, 0};
        int dj[] = {0, 1, 0, -1};

        for(int i=0; i<4; i++)
        {
            int nrow = row + di[i];
            int ncol = col + dj[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
            vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1)
            {
                dfs(grid, nrow, ncol, vis);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int i=0; i<n; i++)
        {
            if(vis[i][0] == 0 && grid[i][0] == 1)
            {
                dfs(grid, i, 0, vis);
            }
        }
        for(int j=0; j<m; j++)
        {
            if(vis[0][j] == 0 && grid[0][j] == 1)
            {
                dfs(grid, 0, j, vis);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(vis[i][m-1] == 0 && grid[i][m-1] == 1)
            {
                dfs(grid, i, m-1, vis);
            }
        }
        for(int j=0; j<m; j++)
        {
            if(vis[n-1][j] == 0 && grid[n-1][j] == 1)
            {
                dfs(grid, n-1, j, vis);
            }
        }

        int count = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] == 1)
                {
                    count++;
                }
            }
        }

        return count;
    }
};

int main(){

    
    return 0;
}