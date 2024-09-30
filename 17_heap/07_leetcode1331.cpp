#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, 
        greater<pair<int,int>>> pq;
        int n = arr.size();

        if(arr.size() == 0)
        {
            return arr;
        }
         
        for(int i=0; i<n; i++)
        {
            pq.push({arr[i], i});
        }
        
        vector<int> ans(n);
        int rank = 1;
        int prev = pq.top().first;
        
        while(!pq.empty())
        {
            if(pq.top().first == prev)
            {
                ans[pq.top().second] = rank;
            }
            else
            {
                rank++;
                ans[pq.top().second] = rank;
                prev = pq.top().first;
            }
            pq.pop();
        }
        return ans;
    }
};

int main(){

    
    return 0;
}