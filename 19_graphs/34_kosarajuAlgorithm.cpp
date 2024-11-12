#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(vector<vector<int>>& adj, vector<int>& vis, vector<int>& topo, 
	int i)
	{
	    vis[i] = true;
	    
	    for(auto it:adj[i])
	    {
	        if(vis[it] == false)
	        {
	            dfs(adj, vis, topo, it);
	        }
	    }
	    
	    topo.push_back(i);
	}
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        vector<int> vis(V, 0);
        vector<int> topo;
        
        for(int i=0; i<V; i++)
        {
            if(vis[i] == false)
            {
                dfs(adj, vis, topo, i);
            }
        }
        
        vector<vector<int>> adjRev(V);
        for(int i=0; i<V; i++)
        {
            vis[i] = 0;
            for(auto it:adj[i])
            {
                adjRev[it].push_back(i);
            }
        }
        
        int count = 0;
        vector<int> temp;
        while(!topo.empty())
        {
            int node = topo.back();
            topo.pop_back();
            
            if(vis[node] == 0)
            {
                count++;
                dfs(adjRev, vis, temp, node);
            }
        }
        return count;
    }
};

int main(){

    
    return 0;
}