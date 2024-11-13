#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(vector<int> adj[], vector<int>& vis, 
    vector<int>& timeOfInsertion, vector<int>& low, int& timer, int i,
    int parent, vector<vector<int>>& bridges)
    {
        vis[i] = true;
        timeOfInsertion[i] = timer;
        low[i] = timer;
        timer++;

        for(auto it:adj[i])
        {
            if(it == parent)
            {
                continue;
            }

            if(vis[it] == 0)
            {
                dfs(adj, vis, timeOfInsertion, low, timer, it, i, bridges);
                low[i] = min(low[i], low[it]);
                if(low[it] > timeOfInsertion[i]) 
                {
                    bridges.push_back({it, i});
                }
            }
            else
            {
                low[i] = min(low[i], low[it]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, 
    vector<vector<int>>& connections) 
    {
        vector<int> adj[n];
        for(auto it : connections)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        vector<int> vis(n, 0);
        vector<int> timeOfInsertion(n, -1);
        vector<int> low(n, -1);
        vector<vector<int>> bridges;
        int timer = 1;

        for(int i=0; i<n; i++)
        {
            if(vis[i] == false)
            {
                dfs(adj, vis, timeOfInsertion, low, timer, i, -1, bridges);
            }
        }

        return bridges;
    }
};

int main(){

    
    return 0;
}