#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigits(int num){
        int count=0;
        while(num > 0){
            num = num/10;
            count++;
        }
        return count;
    }

    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(countDigits(nums[i]) % 2 == 0){
                count++;
            }
        }
        return count;
    }
};

int main()
{

        
    return 0;
}
