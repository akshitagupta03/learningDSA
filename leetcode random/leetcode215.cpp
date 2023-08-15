#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int quickSelect(vector<int>& nums, int k){
        int pivot = nums[rand() % nums.size()];
        vector<int> left;
        vector<int> mid;
        vector<int> right;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > pivot){
                left.push_back(nums[i]);
            }
            else if(nums[i] < pivot){
                right.push_back(nums[i]);
            }
            else{
                mid.push_back(nums[i]);
            }
        }

        if(k <= left.size()){
            return quickSelect(left, k);
        }
        else if(left.size() + mid.size() < k){
            return quickSelect(right, k - left.size() - mid.size());
        }

        return pivot;
    }
    int findKthLargest(vector<int>& nums, int k) {
        return quickSelect(nums, k);
    }
};

int main()
{

        
    return 0;
}
