#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int>m;
    vector<int> ans;

    if(nums1.size() > nums2.size()){
        swap(nums1, nums2);
    }

    for(int i=0; i<nums1.size(); i++){
        m[nums1[i]]++;
    }

    for(int i=0; i<nums2.size(); i++){
        if(m[nums2[i]] > 0){
            ans.push_back(nums2[i]);
            m[nums2[i]]--;
        }
    }
    
    return ans;
}

int main()
{

        
    return 0;
}
