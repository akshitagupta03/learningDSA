#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
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
    void dfsOfGraph(vector<vector<int>>& adj, 
    vector<vector<int>>& ans) {
        // Code here
        int n = adj.size();
        vector<int> temp;
        vector<bool> vis(n, false);
        
        for(int i=0; i<n; i++)
        {
            if(vis[i] == false)
            {
                dfs(adj, i, vis, temp);
                sort(temp.begin(), temp.end());
                ans.push_back(temp);
                temp.clear();
            }
        }
    }
    vector<vector<int>> connectedcomponents(int v, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(v);
        for(int i=0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<vector<int>> ans;
        dfsOfGraph(adj, ans);
        return ans;
    }
};

int main(){

    
    return 0;
}