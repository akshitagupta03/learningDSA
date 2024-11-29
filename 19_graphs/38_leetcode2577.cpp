#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumTime(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if(grid[0][1] > 1 && grid[1][0] > 1) 
        {
            return -1;
        }

        vector<vector<int>> time(n+1, vector<int>(m+1, INT_MAX));
        vector<vector<int>> vis(n+1, vector<int>(m+1, 0));
        
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, 
        pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        pq.push({0, {0, 0}});

        while(!pq.empty())
        {
            int timee = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();

            if(row == n-1 && col == m-1)
            {
                return timee;
            }

            if(vis[row][col])
            {
                continue;
            }
            vis[row][col] = 1;

            int di[] = {-1, 0, 1, 0};
            int dj[] = {0, 1, 0, -1};

            for(int i=0; i<4; i++)
            {
                int nrow = row + di[i];
                int ncol = col + dj[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m)
                {
                    int timeNeed = timee+1;
                    
                    if(grid[nrow][ncol] > timeNeed)
                    {
                        int diff = grid[nrow][ncol] - timee;
                        timeNeed = (diff % 2) ? grid[nrow][ncol] :
                        (grid[nrow][ncol] + 1);
                    }

                    if(time[nrow][ncol] > timeNeed)
                    {
                        time[nrow][ncol] = timeNeed;
                        pq.push({timeNeed, {nrow, ncol}});
                    }
                }
            }
        }

        return -1;
    }
};

int main(){

    
    return 0;
}