#include <bits/stdc++.h>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
{
    vector<pair<int, int>> vec;

    for(int i=0; i<mat.size(); i++){
        int count=0;
        for(int j=0; j<mat[i].size(); j++){
            if(mat[i][j] == 1)
                count++;
        }
        vec.push_back({count, i});
    }
    sort(vec.begin(), vec.end());

    vector<int> ans;
    for(int i=0; i<k; i++){
        ans.push_back(vec[i].second);
    }

    return ans;
}

int main()
{

        
    return 0;
}
