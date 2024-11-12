#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> adj[n+1];
        for(auto it : times)
        {
            adj[it[0]].push_back({it[1], it[2]});
        }

        vector<int> dist(n+1, 1e9);
        dist[k] = 0;

        // {distance, node}
        priority_queue<pair<int, int>, vector<pair<int, int>>, 
        greater<pair<int, int>>> pq;

        pq.push({0, k});
        while(!pq.empty())
        {
            int node = pq.top().second;
            int distance = pq.top().first;
            pq.pop();

            for(auto it:adj[node])
            {
                int adjNode = it.first;
                int weight = it.second;

                if(dist[adjNode] > weight + distance)
                {
                    dist[adjNode] = weight + distance;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }

        int ans = 0;
        for(int i=1; i<dist.size(); i++)
        {
            if(dist[i] == 1e9) return -1;
            ans = max(ans, dist[i]);
        }

        return ans;
    }
};

int main(){

    
    return 0;
}