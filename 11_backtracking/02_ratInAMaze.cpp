/*
you can walk over 1 and you have to avoid 0s.
(0,0) -> (n-1,n-1)
*/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> Maze;
vector<char> path;
vector<vector<char>> answer;
void solution(int i, int j)
{
    if(i == 3 && j == 3)
    {
        answer.push_back(path);
        return;
    }
    if(i>3 || j > 3) return;
    if(j+1<4 && Maze[i][j] == 1){
        path.push_back('r');
        solution(i,j+1);
        path.pop_back();
    }
    if(i+1<4 && Maze[i][j] == 1){
        path.push_back('d');
        solution(i+1,j);
        path.pop_back();
    }
} 
int main(){
    Maze = {{1,1,0,0},
            {0,1,0,0},
            {1,1,1,1},
            {1,1,1,1}};
    
    solution(0,0);
    for(vector<char> y:answer)
    {
        for(char x:y)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}