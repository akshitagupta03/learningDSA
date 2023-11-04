#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        k = k % nums.size();
        int i = nums.size() - k;
        int x = 0;

        if(nums.size() != 1 && k != 0){
            while(i != (nums.size() - k - 1)){
                temp[x++] = nums[i];
                i = (i+1) % nums.size();
            }
            temp[x] = nums[i];
            nums = temp;
        }
    }
};

int main(){

    
    return 0;
}
