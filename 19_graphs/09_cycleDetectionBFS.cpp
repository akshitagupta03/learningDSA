#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool detect(vector<vector<int>>& adj, int i, vector<bool>& vis)
    {
        queue<pair<int, int>> q;
        vis[i] = true;
        q.push({i, -1});
        
        while(!q.empty())
        {
            int curr = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(auto v : adj[curr])
            {
                if(vis[v] == false)
                {
                    vis[v] = true;
                    q.push({v, curr});
                }
                else if(parent != v)
                {
                    return true;
                }
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
                if(detect(adj, i, vis) == true)
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