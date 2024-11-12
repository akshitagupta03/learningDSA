#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        // {diff, {row, col}}
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, 
        pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;
        pq.push({0, {0, 0}});

        while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();

            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;

            if(row == n-1 && col == m-1)
            {
                return diff;
            }

            int di[] = {-1, 0, 1, 0};
            int dj[] = {0, 1, 0, -1};

            for(int i=0; i<4; i++)
            {
                int nrow = row + di[i];
                int ncol = col + dj[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m)
                {
                    int effort = max(diff, abs(heights[row][col] - 
                    heights[nrow][ncol]));

                    if(dist[nrow][ncol] > effort)
                    {
                        dist[nrow][ncol] = effort;
                        pq.push({effort, {nrow, ncol}});
                    }
                }
            }
        }
        return 0;
    }
};

int main(){

    
    return 0;
}