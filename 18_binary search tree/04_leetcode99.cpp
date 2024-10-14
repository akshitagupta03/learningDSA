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
    void inorder(TreeNode* root, TreeNode*& prev, TreeNode*& first, 
    TreeNode*& second)
    {
        if(root == NULL)
        {
            return;
        }

        inorder(root->left, prev, first, second);
        if(prev)
        {
            if(root->val < prev->val)
            {
                if(first == NULL)
                {
                    first = prev;
                }
                second = root;
            }
        }
        prev = root;

        inorder(root->right, prev, first, second);
    }
    void recoverTree(TreeNode* root) {
        TreeNode* prev = NULL, *first = NULL, *second = NULL;
        inorder(root, prev, first, second);
        swap(first->val, second->val);
        return;
    }
};

int main(){

    
    return 0;
}