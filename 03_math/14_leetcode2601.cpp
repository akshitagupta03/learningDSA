#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int num)
    {
        if(num <= 1) 
        {
            return false;
        }

        for(int i=2; i <= sqrt(num); i++) 
        {
            if(num % i == 0) 
            {
                return false;
            }
        }
        return true;
    }

    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            int range = 0;
            if(i == 0)
            {
                range = nums[i];
            }
            else
            {
                range = nums[i] - nums[i-1];
            }

            if(range <= 0) return false;

            for(int j = range-1; j>=0; j--)
            {
                if(isPrime(j))
                {
                    nums[i] -= j;
                    break;
                }
            }
        }
        
        return true;
    }
};

int main(){

    
    return 0;
}