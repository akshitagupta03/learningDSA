#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_ending = 0;
    int max = INT_MIN;

    for(int i=0; i<nums.size(); i++)
    {
        max_ending += nums[i];
        if(max < max_ending)
            max = max_ending;
        
        if(max_ending < 0){
            max_ending = 0;
        }
    }
    return max;
}

int main()
{

        
    return 0;
}
