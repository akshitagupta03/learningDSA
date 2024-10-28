#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // space optimisation
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        vector<int> prev(n, 0);
        vector<int> temp(n, 0);
        for(int i=0; i<n; i++)
        {
            prev[i] = triangle[n-1][i];
        }

        for(int i=n-2; i>=0; i--)
        {
            for(int j=i; j>=0; j--)
            {
                int down = prev[j];
                int right = prev[j+1];

                temp[j] = min(down, right) + triangle[i][j];
            }
            prev = temp;
        }

        return prev[0];
    }
};

int main(){

    
    return 0;
}