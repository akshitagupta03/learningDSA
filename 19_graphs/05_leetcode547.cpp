#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int m = isConnected[0].size();
        vector<vector<int>> adj(n);

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(isConnected[i][j] == 1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int ans = 0;
        vector<bool> visited(n, false);
        queue<int> q;
        
        for(int i=0; i<n; i++)
        {
            if(visited[i] == false)
            {
                q.push(i);
                visited[i] = true;

                while(!q.empty())
                {
                    int curr = q.front();
                    q.pop();

                    for(int v : adj[curr])
                    {
                        if(visited[v] == false)
                        {
                            visited[v] = true;
                            q.push(v);
                        }
                    }
                }
                ans++;
            }
        }

        return ans;
    }
};

int main(){

    
    return 0;
}