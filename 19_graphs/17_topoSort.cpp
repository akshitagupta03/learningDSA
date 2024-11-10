#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return list containing vertices in Topological order.
    void dfs(vector<vector<int>>& adj, int i, vector<int>& vis, 
    vector<int>& ans)
    {
        vis[i] = 1;
        
        for(auto v : adj[i])
        {
            if(vis[v] == false)
            {
                dfs(adj, v, vis, ans);
            }
        }
        ans.push_back(i);
    }
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        // Your code here
        int n = adj.size();
        int m = adj[0].size();
        
        vector<int> ans;
        vector<int> vis(n, 0);
        
        for(int i=0; i<n; i++)
        {
            if(vis[i] == 0)
            {
                dfs(adj, i, vis, ans);
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){

    
    return 0;
}