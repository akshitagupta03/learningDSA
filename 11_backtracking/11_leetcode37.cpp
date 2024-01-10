#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSafe(char ch, int row, int col, vector<vector<char>>& board)
    {
        for(int i=0; i<9; i++)
        {
            if(board[row][i] == ch)
            {
                return false;
            }
            else if(board[i][col] == ch)
            {
                return false;
            }
            else if(board[3*(row/3) + i/3][3*(col/3) + i%3] == ch)
            {
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board)
    {
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board.size(); j++)
            {
                if(board[i][j] == '.')
                {
                    for(char c='1'; c<='9'; c++)
                    {
                        if(isSafe(c, i, j, board))
                        {
                            board[i][j] = c;
                            if(solve(board) == true)
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

int main(){

    
    return 0;
}