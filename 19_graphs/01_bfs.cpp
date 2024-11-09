#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int> ans;
        vector<bool> vis(n, false);
        
        queue<int> q;
        q.push(0);
        vis[0] = true;
        
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
        return ans;
    }
};

int main(){

    
    return 0;
}