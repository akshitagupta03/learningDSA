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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
        {
            return ans;
        }

        int level = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});

        TreeNode* temp = root;
        vector<int> vec;
        vec.push_back(root->val);
        ans.push_back(vec);

        vector<int> v;

        while(q.empty() == false)
        {
            temp = q.front().first;
            int lev = q.front().second;
            q.pop();

            if(lev > level)
            {
                if(lev != 1)
                {
                    ans.push_back(v);
                    v.clear();
                }
                level = lev;
            }

            if(temp->left)
            {
                q.push({temp->left, lev+1});
                v.push_back(temp->left->val);
            }
            if(temp->right)
            {
                q.push({temp->right, lev+1});
                v.push_back(temp->right->val);
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}