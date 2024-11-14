#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int> arr)
    {
        stack<int> st;
        int ans = 0;

        for(int i=0; i<arr.size(); i++)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                int height = arr[st.top()];
                st.pop();

                int nse = i;
                int pse = st.empty() ? -1 : st.top();

                ans = max(ans, height*(nse-pse-1));
            }
            st.push(i);
        }

        while(!st.empty())
        {
            int height = arr[st.top()];
            st.pop();

            int nse = arr.size();
            int pse = st.empty() ? -1 : st.top();

            ans = max(ans, height*(nse-pse-1));
        }
        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> heights(m);
        int ans = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j] == '1') 
                {
                    heights[j]++;
                }
                else
                {
                    heights[j] = 0;
                }
            }

            int area = largestRectangleArea(heights);
            ans = max(ans, area);
        }
        return ans;
    }
};

int main(){

    
    return 0;
}