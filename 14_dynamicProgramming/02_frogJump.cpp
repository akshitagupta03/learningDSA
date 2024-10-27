#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // space optimisation
    
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        int prev2 = 0, prev1 = 0;
        
        for(int i=1; i<=n-1; i++)
        {
            int jumpOne = prev1 + abs(height[i] - height[i-1]);
            int jumpTwo = INT_MAX;
            
            if(i > 1)
            {
                jumpTwo = prev2 + abs(height[i] - height[i-2]);
            }
            
            int curr = min(jumpOne, jumpTwo);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};

int main(){

    
    return 0;
}