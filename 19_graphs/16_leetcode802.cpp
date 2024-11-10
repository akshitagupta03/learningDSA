#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dfs(vector<int> adj[], vector<int>& vis, vector<int>& path, 
    vector<int>& safe, int i)
    {
        vis[i] = 1;
        path[i] = 1;

        for(auto v : adj[i])
        {
            if(vis[v] == false)
            {
                if(dfs(adj, vis, path, safe, v))
                {
                    return true;
                }
            }
            else if(path[v])
            {
                return true;
            }
        }

        safe[i] = 1;
        path[i] = 0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> adj[n];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<graph[i].size(); j++)
            {
                adj[i].push_back(graph[i][j]);
            }
        }

        vector<int> vis(n, 0);
        vector<int> safe(n, 0);
        vector<int> path(n, 0);

        for(int i=0; i<n; i++)
        {
            if(vis[i] == false)
            {
                dfs(adj, vis, path, safe, i);
            }
        }

        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            if(safe[i] == 1)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

int main(){

    
    return 0;
}