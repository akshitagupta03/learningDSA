#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;

        for(int i=0; i<nums1.size(); i++){
            m[nums1[i]]++;
        }

        for(auto n : nums2){
            if(m[n] > 0){
                return n;
            }
        }
        return -1;
    }
};

int main()
{

        
    return 0;
}
