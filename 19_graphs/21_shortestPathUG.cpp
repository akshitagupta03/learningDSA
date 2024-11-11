#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, 
    int n, int m, int src){
        // code here
        vector<int> adj[n];
        for(int i=0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        queue<int> q;
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        q.push(src);
        
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            
            for(auto it : adj[curr])
            {
                if(dist[it] > 1 + dist[curr])
                {
                    dist[it] = 1 + dist[curr];
                    q.push(it);
                }
            }
        }
        
        vector<int> ans(n, -1);
        for(int i=0; i<n; i++)
        {
            if(dist[i] != INT_MAX)
            {
                ans[i] = dist[i];
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}