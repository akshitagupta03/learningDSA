#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<vector<char>>& board, int row, int col, 
    vector<vector<int>>& vis)
    {
        int n = board.size();
        int m = board[0].size();

        vis[row][col] = true;
        int di[] = {-1, 0, 1, 0};
        int dj[] = {0, 1, 0, -1};

        for(int i=0; i<4; i++)
        {
            int nrow = row + di[i];
            int ncol = col + dj[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
            vis[nrow][ncol] == 0 && board[nrow][ncol] == 'O')
            {
                dfs(board, nrow, ncol, vis);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        for(int j=0; j<m; j++)
        {
            if(vis[0][j] == 0 && board[0][j] == 'O')
            {
                dfs(board, 0, j, vis);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(vis[i][0] == 0 && board[i][0] == 'O')
            {
                dfs(board, i, 0, vis);
            }
        }
        for(int i=0; i<n; i++)
        {
            if(vis[i][m-1] == 0 && board[i][m-1] == 'O')
            {
                dfs(board, i, m-1, vis);
            }
        }
        for(int j=0; j<m; j++)
        {
            if(vis[n-1][j] == 0 && board[n-1][j] == 'O')
            {
                dfs(board, n-1, j, vis);
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j] == 'O' && vis[i][j] == false)
                {
                    board[i][j] = 'X';
                }
            }
        }
    }
};

int main(){

    
    return 0;
}