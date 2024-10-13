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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, long long>> q;
        int ans = 0;

        if(root == NULL)
        {
            return ans;
        }

        q.push({root, 0});
        while(!q.empty())
        {
            int size = q.size();
            long long level = q.front().second;
            int first, last;

            for(int i=0; i<size; i++)
            {
                long long currIndex = q.front().second - level;
                TreeNode* curr = q.front().first;
                q.pop();

                if(i == 0) first = currIndex;
                if(i == size-1) last = currIndex;

                if(curr->left) q.push({curr->left, currIndex*2 + 1});
                if(curr->right) q.push({curr->right, currIndex*2 + 2});
            }

            ans = max(ans, last-first+1);
        }
        return ans;
    }
};

int main(){

    
    return 0;
}