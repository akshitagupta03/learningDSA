#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        vector<vector<int>> ans(2, vector<int>(3, 0));
        ans[0][0] = 1;
        ans[0][1] = 2;
        ans[0][2] = 3;
        ans[1][0] = 4;
        ans[1][1] = 5;
        ans[1][2] = 0;

        int row, col;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(board[i][j] == 0)
                {
                    row = i;
                    col = j;
                    break;
                }
            }
        }

        queue<pair<pair<int, int>, pair<vector<vector<int>>, int>>> q;
        map<vector<vector<int>>, int> m;

        q.push({{row, col}, {board, 0}});
        m[board]++;

        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            vector<vector<int>> vec = q.front().second.first;
            int steps = q.front().second.second;
            q.pop();

            if(vec == ans)
            {
                return steps;
            }

            int di[] = {-1, 0, 1, 0};
            int dj[] = {0, 1, 0, -1};

            for(int i=0; i<4; i++)
            {
                int nrow = row + di[i];
                int ncol = col + dj[i];

                if(nrow >= 0 && nrow < 2 && ncol >= 0 && ncol < 3)
                {
                    swap(vec[nrow][ncol], vec[row][col]);
                    if(m.find(vec) == m.end())
                    {
                        q.push({{nrow, ncol}, {vec, steps+1}});
                        m[vec]++;
                    }
                    swap(vec[nrow][ncol], vec[row][col]);
                }
            }
        }

        return -1;
    }
};

int main(){

    
    return 0;
}