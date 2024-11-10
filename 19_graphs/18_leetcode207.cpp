#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) 
    {
        int n = pre.size();
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);
        
        for(int i=0; i<n; i++)
        {
            adj[pre[i][1]].push_back(pre[i][0]);
            indegree[pre[i][0]]++;
        }

        queue<int> q;
        for(int i=0; i<numCourses; i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }

        int count = 0;
        while(!q.empty())
        {
            int curr = q.front();
            count++;
            q.pop();

            for(auto it : adj[curr])
            {
                indegree[it]--;
                if(indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }

        return (count == numCourses);
    }
};

int main(){

    
    return 0;
}