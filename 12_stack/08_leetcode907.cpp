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

    int sumSubarrayMins(vector<int>& arr) {
        long long int ans = 0;
        int mod = 1e9+7;

        vector<int> prev = prevSmallerOrEqual(arr);
        vector<int> next = nextSmaller(arr);

        for(int i=0; i<arr.size(); i++)
        {
            int left = i - prev[i];
            int right = next[i] - i;

            ans = (ans + (left*right*1LL*arr[i])%mod) % mod;
        }

        return (int)ans;
    }
};

int main(){

    
    return 0;
}