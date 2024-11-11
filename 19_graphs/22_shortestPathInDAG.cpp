#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs(vector<pair<int, int>> adj[], vector<int>& topo, 
    vector<int>& vis, int i)
    {
        vis[i] = true;
        
        for(auto it : adj[i])
        {
            int v = it.first;
            if(vis[v] == false)
            {
                dfs(adj, topo, vis, v);
            }
        }
        
        topo.push_back(i);
    }
    vector<int> shortestPath(int n, int E, vector<vector<int>>& edges) {
        // code here
        vector<pair<int, int>> adj[n];
        for(int i=0; i<edges.size(); i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            adj[u].push_back({v, wt});
        }
        
        vector<int> topo;
        vector<int> vis(n, 0);
        
        for(int i=0; i<n; i++)
        {
            if(vis[i] == 0)
            {
                dfs(adj, topo, vis, i);
            }
        }
        
        vector<int> dist(n, 1e9);
        dist[0] = 0;
        
        while(!topo.empty())
        {
            int curr = topo.back();
            topo.pop_back();
            
            for(auto it : adj[curr])
            {
                int v = it.first;
                int wt = it.second;
                
                if(dist[v] > wt + dist[curr])
                {
                    dist[v] = wt + dist[curr];
                }
            }
        }
        
        vector<int> ans(n, -1);
        for(int i=0; i<n; i++)
        {
            if(dist[i] != 1e9)
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