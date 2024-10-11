#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int solve(unordered_map<int, int>& m, TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }

        int l = solve(m, root->left);
        int r = solve(m, root->right);

        int num = l+r+root->val;
        m[num]++;

        return (l+r+root->val);
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        unordered_map<int, int> m;
        priority_queue<pair<int, int>> pq;

        solve(m, root);
        for(auto i:m)
        {
            pq.push({i.second, i.first});
        }

        int maxi = pq.top().first;
        while(!pq.empty() && pq.top().first == maxi)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};

int main(){

    
    return 0;
}