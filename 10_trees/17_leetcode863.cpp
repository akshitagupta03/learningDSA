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
    void markParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent)
    {
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();

            if(curr->left)
            {
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right)
            {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        queue<TreeNode*> q;
        unordered_map<TreeNode*, TreeNode*> parent;

        markParents(root, parent);
        unordered_map<TreeNode*, bool> visited;
        q.push(target);
        visited[target] = true;
        int level = 0;

        while(!q.empty())
        {
            int size = q.size();
            if(level == k)
            {
                break;
            }
            level++;

            for(int i=0; i<size; i++)
            {
                TreeNode* curr = q.front();
                q.pop();

                if(curr->left && !visited[curr->left])
                {
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                if(curr->right && !visited[curr->right])
                {
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                if(parent[curr] && !visited[parent[curr]])
                {
                    q.push(parent[curr]);
                    visited[parent[curr]] = true;
                }
            }
        }

        vector<int> ans;
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            ans.push_back(node->val);
        }

        return ans;
    }
};

int main(){

    
    return 0;
}