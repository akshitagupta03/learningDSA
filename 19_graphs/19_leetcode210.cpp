#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) {
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
        vector<int> ans;
        
        while(!q.empty())
        {
            int curr = q.front();
            count++;
            ans.push_back(curr);
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

        if(count != numCourses)
        {
            return {};
        }
        return ans;
    }
};

int main(){

    
    return 0;
}