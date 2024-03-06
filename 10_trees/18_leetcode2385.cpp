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
    TreeNode* findNode(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent, int start)
    {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* res;

        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();

            if(curr->val == start)
            {
                res = curr;
            }

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
        return res;
    }
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
    int amountOfTime(TreeNode* root, int start) {
        queue<TreeNode*> q;
        unordered_map<TreeNode*, TreeNode*> parent;

        markParents(root, parent);
        unordered_map<TreeNode*, bool> visited;

        TreeNode* target = findNode(root, parent, start);
        q.push(target);
        visited[target] = true;
        int level = -1;

        while(!q.empty())
        {
            int size = q.size();
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
        return level;
    }
};

int main(){

    
    return 0;
}