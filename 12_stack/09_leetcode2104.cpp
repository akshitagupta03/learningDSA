#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> prevSmallerOrEqual(vector<int>& arr)
    {
        vector<int> prev(arr.size(), -1);
        stack<int> st;

        for(int i=0; i<arr.size(); i++)
        {
            while(!st.empty() && arr[st.top()] > arr[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                prev[i] = st.top();
            }
            st.push(i);
        }
        return prev;
    }

    vector<int> nextSmaller(vector<int>& arr)
    {
        vector<int> next(arr.size(), arr.size());
        stack<int> st;

        for(int i=arr.size()-1; i>=0; i--)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                next[i] = st.top();
            }
            st.push(i);
        }
        return next;
    }

    vector<int> prevGreaterOrEqual(vector<int>& arr)
    {
        vector<int> prev(arr.size(), -1);
        stack<int> st;

        for(int i=0; i<arr.size(); i++)
        {
            while(!st.empty() && arr[st.top()] < arr[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                prev[i] = st.top();
            }
            st.push(i);
        }
        return prev;
    }

    vector<int> nextGreater(vector<int>& arr)
    {
        vector<int> next(arr.size(), arr.size());
        stack<int> st;

        for(int i=arr.size()-1; i>=0; i--)
        {
            while(!st.empty() && arr[st.top()] <= arr[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                next[i] = st.top();
            }
            st.push(i);
        }
        return next;
    }

    long long subArrayRanges(vector<int>& nums) {
        vector<int> minPrev = prevSmallerOrEqual(nums);
        vector<int> minNext = nextSmaller(nums);
        vector<int> maxPrev = prevGreaterOrEqual(nums);
        vector<int> maxNext = nextGreater(nums);

        long long ans = 0;

        for(int i=0; i<nums.size(); i++)
        {
            long long leftMin = i - minPrev[i];
            long long rightMin = minNext[i] - i;
            long long leftMax = i - maxPrev[i];
            long long rightMax = maxNext[i] - i;

            ans += (leftMax*rightMax - leftMin*rightMin)*nums[i];
        }
        return ans;
    }
};

int main(){

    
    return 0;
}