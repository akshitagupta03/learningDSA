#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string findOrder(string dict[], int n, int k) {
        // code here
        vector<int> adj[k];
        for(int i=0; i<n-1; i++)
        {
            string s1 = dict[i];
            string s2 = dict[i+1];
            
            int len = min(s1.length(), s2.length());
            for(int j=0; j<len; j++)
            {
                if(s1[j] != s2[j])
                {
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    break;
                }
            }
        }
        
        vector<int> indegree(k, 0);
        for(int i=0; i<k; i++)
        {
            for(int j=0; j<adj[i].size(); j++)
            {
                indegree[adj[i][j]]++;
            }
        }
        
        queue<int> q;
        for(int i=0; i<k; i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }
        
        string ans = "";
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            ans += curr + 'a';
            
            for(auto it : adj[curr])
            {
                indegree[it]--;
                if(indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }
        
        return ans;
    }
};

int main(){

    
    return 0;
}