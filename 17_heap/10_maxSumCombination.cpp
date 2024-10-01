#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) {
        // code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        priority_queue<pair<int, pair<int, int>>> pq;
        
        set<pair<int, int>> s;
        
        pq.push({a[n-1]+b[n-1], {n-1, n-1}});
        s.insert({n-1, n-1});
        
        vector<int> ans;
        
        for(int count=0; count<k; count++)
        {
            pair<int, pair<int, int>> temp = pq.top();
            pq.pop();
            
            ans.push_back(temp.first);
            
            int i = temp.second.first;
            int j = temp.second.second;
            
            if(i-1 >= 0)
            {
                int sum = a[i-1]+b[j];
                pair<int, int> curr = {i-1, j};
                
                if(s.find(curr) == s.end())
                {
                    pq.push({sum, curr});
                    s.insert(curr);
                }
            }
            if(j-1 >= 0)
            {
                int sum = a[i]+b[j-1];
                pair<int, int> curr = {i, j-1};
                
                if(s.find(curr) == s.end())
                {
                    pq.push({sum, curr});
                    s.insert(curr);
                }
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}