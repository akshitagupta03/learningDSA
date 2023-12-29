#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<n; i++)
        {
            int j=0, k=n-1;
            while(j <= k)
            {
                swap(matrix[i][j], matrix[i][k]);
                j++, k--;
            }
        }
    }
};

int main(){

    
    return 0;
}