#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<long long, long long>> adj[n];
        for(auto it:roads)
        {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        priority_queue<pair<long long, long long>, vector<pair<long long, 
        long long>>, greater<pair<long long, long long>>> pq;
        int mod = 1e9+7;

        vector<long long> dist(n, LLONG_MAX);
        dist[0] = 0;

        vector<long long> ways(n, 0);
        ways[0] = 1;

        // {distance, node}
        pq.push({0, 0});

        while(!pq.empty())
        {
            long long node = pq.top().second;
            long long distance = pq.top().first;
            pq.pop();

            for(auto it:adj[node])
            {
                long long adjNode = it.first;
                long long edgeWeight = it.second;

                if(dist[adjNode] > edgeWeight + distance)
                {
                    dist[adjNode] = edgeWeight + distance;
                    pq.push({dist[adjNode], adjNode});
                    ways[adjNode] = ways[node];
                }
                else if(dist[adjNode] == edgeWeight + distance)
                {
                    ways[adjNode] = (ways[adjNode] + ways[node]) % mod;
                }
            }
        }

        return ways[n-1] % mod;
    }
};

int main(){

    
    return 0;
}