#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex src.
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
        // Code here
        priority_queue<pair<int, int>, vector<pair<int, int>>, 
        greater<pair<int, int>>> pq;
        
        int n = adj.size();
        vector<int> dist(n, 1e9);
        dist[src] = 0;
        
        pq.push({0, src});
        while(!pq.empty())
        {
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto it : adj[node])
            {
                int edgeWeight = it.second;
                int adjNode = it.first;
                
                if(dist[adjNode] > dis + edgeWeight)
                {
                    dist[adjNode] = dis + edgeWeight;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }
};

int main(){

    
    return 0;
}