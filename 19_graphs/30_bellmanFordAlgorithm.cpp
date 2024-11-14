#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    /*  Function to implement Bellman Ford
     *   edges: vector of vectors which represents the graph
     *   src: source vertex
     *   V: number of vertices
     */
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int> dist(V, 1e8);
        dist[src] = 0;
        
		for(int i=0; i<V-1; i++) 
		{
			for(auto it : edges) 
			{
				int u = it[0];
				int v = it[1];
				int wt = it[2];
				
				if(dist[u] != 1e8 && dist[u] + wt < dist[v]) 
				{
					dist[v] = dist[u] + wt;
				}
			}
		}
		
		// negative weight cycle
		for (auto it : edges) 
		{
			int u = it[0];
			int v = it[1];
			int wt = it[2];
			
			if(dist[u] != 1e8 && dist[u] + wt < dist[v]) 
			{
				return {-1};
			}
		}
		
		return dist;
    }
};

int main(){

    
    return 0;
}