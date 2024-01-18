#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool solve(int i, int j, int ind, int n, int m,
    vector<vector<char>>& board, string word, vector<vector<bool>>& visited)
    {
        if(ind == word.length())
        {
            return true;
        }
        
        visited[i][j] = true;
        if(board[i][j] == word[ind])
        {
            if(ind == (word.length()-1)) return true;

            if(i-1 >= 0 && j>=0 && j<m && (i-1)<n && !visited[i-1][j])
            {
                if(solve(i-1, j, ind+1, n, m, board, word, visited))
                {
                    return true;
                }
            }
            if(i+1 < n && i+1 >= 0 && j<m && j>=0 && !visited[i+1][j])
            {
                if(solve(i+1, j, ind+1, n, m, board, word, visited))
                {
                    return true;
                }
            }
            if(i >= 0 && j >= 0 && i<n && j+1 < m && !visited[i][j+1])
            {
                if(solve(i, j+1, ind+1, n, m, board, word, visited))
                {
                    return true;
                }
            }
            if(i >= 0 && i<n && j-1 >= 0 && j-1 < m && !visited[i][j-1])
            {
                if(solve(i, j-1, ind+1, n, m, board, word, visited))
                {
                    return true;
                }
            }
        }
        visited[i][j] = false;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(solve(i, j, 0, n, m, board, word, visited))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){

    
    return 0;
}