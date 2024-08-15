#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int ans = 0;
        int n = heights.size();

        for(int i=0; i<n; i++)
        {
            while(!st.empty() && heights[st.top()] >= heights[i])
            {
                int num = heights[st.top()];
                st.pop();

                int nse = i;
                int pse = st.empty() ? -1 : st.top();

                ans = max(ans, num*(nse-pse-1));
            }
            st.push(i);
        }

        while(!st.empty())
        {
            int nse = n;
            int num = heights[st.top()];
            st.pop();
            int pse = st.empty() ? -1 : st.top();

            ans = max(ans, num*(nse-pse-1));
        }
        return ans;
    }
};

int main(){

    
    return 0;
}