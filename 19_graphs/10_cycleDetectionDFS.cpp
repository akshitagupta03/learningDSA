#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool detect(vector<vector<int>>& adj, int i, int parent, 
    vector<bool>& vis)
    {
        vis[i] = true;
        
        for(auto v : adj[i])
        {
            if(vis[v] == false)
            {
                if(detect(adj, v, i, vis) == true)
                {
                    return true;
                }
            }
            else if(parent != v)
            {
                return true;
            }
        }
        return false;
    }
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int n  = adj.size();
        vector<bool> vis(n, 0);
        
        for(int i=0; i<n; i++)
        {
            if(vis[i] == false)
            {
                if(detect(adj, i, -1, vis) == true)
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