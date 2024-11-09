#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(vector<vector<int>>& adj, int i, vector<bool>& vis, 
    vector<int>& ans)
    {
        vis[i] = true;
        ans.push_back(i);
        
        for(int v : adj[i])
        {
            if(vis[v] == false)
            {
                dfs(adj, v, vis, ans);
            }
        }
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int> ans;
        vector<bool> vis(n, false);
        
        for(int i=0; i<n; i++)
        {
            if(vis[i] == false)
            {
                dfs(adj, i, vis, ans);
            }
        }
        
        return ans;
    }
};

int main(){

    
    return 0;
}