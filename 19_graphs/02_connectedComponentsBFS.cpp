#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void bfs(vector<vector<int>> &adj, int s, vector<bool>& vis, vector<int>
    &ans)
    {
        queue<int> q;
        q.push(s);
        vis[s] = true;
        
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            ans.push_back(curr);
            
            for(int v : adj[curr])
            {
                if(vis[v] == false)
                {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
    }
    void bfsOfGraph(vector<vector<int>> &adj, 
    vector<vector<int>>& ans) {
        // Code here
        int n = adj.size();
        vector<int> temp;
        vector<bool> vis(n, false);
        
        for(int i=0; i<n; i++)
        {
            if(vis[i] == false)
            {
                bfs(adj, i, vis, temp);
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
        bfsOfGraph(adj, ans);
        return ans;
    }
};

int main(){

    
    return 0;
}