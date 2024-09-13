#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> ans;
        vector<int> preXor(n);

        preXor[0] = arr[0];

        for(int i=1; i<n; i++)
        {
            preXor[i] = preXor[i-1] ^ arr[i];
        }

        for(int i=0; i<queries.size(); i++)
        {
            if(queries[i][0] == 0)
            {
                ans.push_back(preXor[queries[i][1]]);
            }
            else
            {
                int num = preXor[queries[i][1]];
                for(int j=0; j<queries[i][0]; j++)
                {
                    num = (num ^ arr[j]);
                }
                ans.push_back(num);
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}