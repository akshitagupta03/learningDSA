#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* insert(TreeNode* root, int data)
    {
        if(root == NULL)
        {
            root = new TreeNode(data);
            return root;
        }

        if(data < root->val)
        {
            root->left = insert(root->left, data);
        }
        else
        {
            root->right = insert(root->right, data);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        for(int i=0; i<preorder.size(); i++)
        {
            root = insert(root, preorder[i]);
        }
        return root;
    }
};

int main(){

    
    return 0;
}