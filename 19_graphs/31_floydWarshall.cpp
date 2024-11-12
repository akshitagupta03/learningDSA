#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void shortestDistance(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size();
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i == j)
                {
                    mat[i][j] == 0;
                }
                else if(mat[i][j] == -1)
                {
                    mat[i][j] = 1e9;
                }
            }
        }
        
        for(int k=0; k<n; k++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
                }
            }
        }
        
        // to check for negative weight cycle
        for(int i=0; i<n; i++)
        {
            if(mat[i][i] < 0)
            {
                cout << "negative weight cycle" << endl;
            }
        }
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(mat[i][j] == 1e9)
                {
                    mat[i][j] = -1;
                }
            }
        }
    }
};

int main(){

    
    return 0;
}