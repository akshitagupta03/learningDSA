#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // space optimisation
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();

        vector<int> prev(n, 0);

        for(int i=0; i<m; i++)
        {
            vector<int> temp(n, 0);
            for(int j=0; j<n; j++)
            {
                if(arr[i][j] == 1) 
                {
                    temp[j] = 0;
                }
                else if(i == 0 && j == 0) 
                {
                    temp[j] = 1;
                }
                else
                {
                    int up = 0, left = 0;
                    if(i > 0) up = prev[j];
                    if(j > 0) left = temp[j-1];
                    temp[j] = (up+left);
                }
            }
            prev = temp;
        }
        return prev[n-1];
    }
};

int main(){

    
    return 0;
}