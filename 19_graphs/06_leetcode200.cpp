#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bfs(vector<vector<char>>& grid, vector<vector<int>>& vis, 
    int i, int j)
    {
        queue<pair<int, int>> q;
        q.push({i, j});
        vis[i][j] = 1;

        int m = grid.size();
        int n = grid[0].size();

        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int delrow = -1; delrow <= 1; delrow++)
            {
                for(int delcol = -1; delcol <= 1; delcol++)
                {
                    int nRow = row + delrow;
                    int nCol = col + delcol;

                    if(nRow >= 0 && nRow < m && nCol >= 0 && nCol < n && 
                    grid[nRow][nCol] == '1' && vis[nRow][nCol] == 0 && 
                    (row == nRow || col == nCol))
                    {
                        vis[nRow][nCol] = 1;
                        q.push({nRow, nCol});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));

        int count = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(vis[i][j] == 0 && grid[i][j] == '1')
                {
                    bfs(grid, vis, i, j);
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