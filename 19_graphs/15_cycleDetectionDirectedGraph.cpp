#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(vector<vector<int>>& adj, int i, vector<int>& vis, 
    vector<int>& path)
    {
        int n = adj.size();
        int m = adj[0].size();
        
        vis[i] = 1;
        path[i] = 1;
        
        for(auto v : adj[i])
        {
            if(vis[v] == false)
            {
                if(dfs(adj, v, vis, path) == true)
                {
                    return true;
                }
            }
            else if(path[v] == true)
            {
                return true;
            }
        }
        
        path[i] = 0;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> adj) {
        // code here
        int n = adj.size();
        int m = adj[0].size();
        
        vector<int> vis(n, 0);
        vector<int> path(n, 0);
        
        for(int i=0; i<n; i++)
        {
            if(vis[i] == 0)
            {
                if(dfs(adj, i, vis, path) == true)
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){

    
    return 0;
}