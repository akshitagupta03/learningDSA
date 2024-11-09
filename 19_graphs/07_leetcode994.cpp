#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;

        int fresh = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                }
                if(grid[i][j] == 1) 
                {
                    fresh++;
                }
            }
        }

        int di[] = {-1, 0, 1, 0};
        int dj[] = {0, 1, 0, -1};

        int count = 0;
        int time = 0;

        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int tm = q.front().second;

            q.pop();
            time = max(time, tm);

            for(int i=0; i<4; i++)
            {
                int nRow = row + di[i];
                int nCol = col + dj[i];

                if(nRow >= 0 && nRow < n && nCol >= 0 && nCol < m &&
                vis[nRow][nCol] == 0 && grid[nRow][nCol] == 1)
                {
                    q.push({{nRow, nCol}, tm+1});
                    vis[nRow][nCol] = 2;
                    count++;
                }
            }
        }

        if(count != fresh)
        {
            return -1;
        }

        return time;
    }
};

int main(){

    
    return 0;
}