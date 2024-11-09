#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();

        vector<vector<int>> ans = image;
        vector<vector<int>> visited(n, vector<int>(m, 0));

        queue<pair<int, int>> q;
        q.push({sr, sc});

        int di[] = {-1, 0, 1, 0};
        int dj[] = {0, 1, 0, -1};

        int originalColour = image[sr][sc];

        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            visited[row][col] = 1;
            ans[row][col] = color;

            for(int i=0; i<4; i++)
            {
                int nrow = row + di[i];
                int ncol = col + dj[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                visited[nrow][ncol] == 0 && ans[nrow][ncol] == originalColour)
                {
                    q.push({nrow, ncol});
                    visited[nrow][ncol] = 1;
                }
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}