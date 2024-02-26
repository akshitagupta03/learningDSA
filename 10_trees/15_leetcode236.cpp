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
    bool solve(TreeNode* root, vector<TreeNode*>& a1, TreeNode* p)
    {
        if(root == NULL)
        {
            return false;
        }
        a1.push_back(root);
        if(root->val == p->val)
        {
            return true;
        }

        if(solve(root->left, a1, p) || solve(root->right, a1, p))
        {
            return true;
        }
        
        a1.pop_back();
        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> a1;
        vector<TreeNode*> a2;

        solve(root, a1, p);
        solve(root, a2, q);

        TreeNode* ans;
        int i;
        for(i=0; i<a1.size() && i<a2.size(); i++)
        {
            if(a1[i] != a2[i])
            {
                break;
            }
        }

        return a1[i-1];
    }
};

int main(){

    
    return 0;
}