#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int curr, int end, vector<int>& ans)
    {
        if(curr > end) return;
        ans.push_back(curr);

        for(int i=0; i<=9; i++)
        {
            int next = curr*10 + i;
            if(next <= end)
            {
                solve(next, end, ans);
            }
            else
            {
                break;
            }
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;

        for(int i=1; i<=9; i++)
        {
            solve(i, n, ans);
        }

        return ans;
    }
};

int main(){

    
    return 0;
}