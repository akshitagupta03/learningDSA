class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] >= nums2[j]){
                merged.push_back(nums2[j++]);
            }
            else{
                merged.push_back(nums1[i++]);
            }
        }

        while(i < nums1.size()) {
            merged.push_back(nums1[i++]);
        }
        while(j < nums2.size()) {
            merged.push_back(nums2[j++]);
        }

        int n = merged.size();

        if(n % 2 != 0){
            return double(merged[n/2]);
        }
        else{
            double part1 = merged[n/2];
            double part2 = merged[(n/2)-1];
            return double((part1 + part2)/2);
        }
    }
};
