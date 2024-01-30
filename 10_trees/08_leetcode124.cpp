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
    int solve(TreeNode* root, int& maxi)
    {
        if(root == NULL)
        {
            return 0;
        }

        int leftSum = max(0, solve(root->left, maxi));
        int rightSum = max(0, solve(root->right, maxi));

        maxi = max(maxi, leftSum + rightSum + root->val);
        return (max(leftSum, rightSum) + root->val);
    }
    
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        solve(root, maxi);
        return maxi;
    }
};

int main(){

    
    return 0;
}