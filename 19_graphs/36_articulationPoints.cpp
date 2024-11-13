#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs(int node, int parent, vector<int> adj[], vector<int>& vis, 
    vector<int>& low, vector<int>& tin, vector<int>& mark, int timer)
    {
        vis[node] = 1;
        low[node] = tin[node] = timer++;
        
        int child = 0;
        for(auto it : adj[node])
        {
            if(it == parent) continue;
            
            if(vis[it] == 0)
            {
                dfs(it, node, adj, vis, low, tin, mark, timer);
                low[node] = min(low[node], low[it]);
                
                if(low[it] >= tin[node] && parent != -1)
                {
                    mark[node] = 1;
                }
                child++;
            }
            else
            {
                low[node] = min(low[node], tin[it]);
            }
        }
        
        // for starting point
        if(child > 1 && parent == -1)
        {
            mark[node] = 1;
        }
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        vector<int> vis(V, 0);
        vector<int> low(V, 0);
        vector<int> tin(V, 0);
        vector<int> mark(V, 0);
        int timer = 1;
        
        for(int i=0; i<V; i++)
        {
            if(vis[i] == 0)
            {
                dfs(i, -1, adj, vis, low, tin, mark, timer);
            }
        }
        
        vector<int> ans;
        for(int i=0; i<V; i++)
        {
            if(mark[i] == 1) ans.push_back(i);
        }
        
        if(ans.empty()) return {-1};
        return ans;
    }
};

int main(){

    
    return 0;
}