#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) 
{
    int n = nums.size();
    int sum = (n*(n+1))/2;
    int actualSum = 0;
    for(int i=0; i<n; i++){
        actualSum += nums[i];
    }
    return sum-actualSum;
}

int main()
{

        
    return 0;
}
