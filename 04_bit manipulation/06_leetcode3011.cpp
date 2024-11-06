#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSorted(vector<int>& nums) 
    {
        for(int i=0; i<nums.size()-1; i++) 
        {
            if(nums[i] > nums[i+1])
            {
                return false;
            }
        }
        return true;
    }

    int setBits(int n)
    {
        int setBits = 0;
        
        while(n > 0)
        {
            int rem = n%2;
            if(rem == 1) setBits++;
            n = n/2;
        }
        
        return setBits;
    }

    bool canSortArray(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                int bits1 = setBits(nums[j]);
                int bits2 = setBits(nums[j+1]);

                if(bits1 == bits2 && nums[j] > nums[j+1])
                {
                    swap(nums[j], nums[j+1]);
                }
            }
        }

        return isSorted(nums);
    }
};

int main(){

    
    return 0;
}