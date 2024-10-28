#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // space optimisation
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> prev(n, 0);
        vector<int> temp(n, 0);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i == 0) 
                {
                    temp[j] = matrix[i][j];
                }
                else
                {
                    int leftUp = INT_MAX, rightUp = INT_MAX;
                    int up = matrix[i][j] + prev[j];
                    if(j > 0) leftUp = matrix[i][j] + prev[j-1];
                    if(j < n-1) rightUp = matrix[i][j] + prev[j+1];

                    temp[j] = min(up, min(leftUp, rightUp));
                }
            }
            prev = temp;
        }

        int ans = INT_MAX;
        for(int i=0; i<n; i++)
        {
            ans = min(ans, prev[i]);
        }
        return ans;
    }
};

int main(){

    
    return 0;
}