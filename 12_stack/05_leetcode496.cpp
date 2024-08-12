#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        stack<int> st;
        vector<int> ans(nums1.size(), -1);

        for(int i=nums2.size()-1; i>=0; i--)
        {
            while(!st.empty() && st.top() <= nums2[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                m[nums2[i]] = -1;
            }
            else if(st.top() > nums2[i])
            {
                m[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }

        for(int i=0; i<nums1.size(); i++)
        {
            ans[i] = m[nums1[i]];
        }
        return ans;
    }
};

int main(){

    
    return 0;
}