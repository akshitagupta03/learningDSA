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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        
        if(root == NULL)
        {
            return true;
        }

        q.push(root);
        bool leftToRight = true;

        while(!q.empty())
        {
            int size = q.size();
            vector<int> temp(size);

            for(int i=0; i<size; i++)
            {
                TreeNode* curr = q.front();
                q.pop();

                if(leftToRight)
                {
                    temp[i] = curr->val;
                }
                else
                {
                    temp[size-i-1] = curr->val;
                }
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

            for(int i=0; i<temp.size(); i++)
            {
                cout << temp[i] << " ";
                if(leftToRight)
                {
                    if(temp[i] % 2 == 0)
                    {
                        return false;
                    }
                }
                else if(!leftToRight)
                {
                    if(temp[i] % 2 == 1)
                    {
                        return false;
                    }
                }

                if(i > 0)
                {
                    if(temp[i] <= temp[i-1])
                    {
                        return false;
                    }
                }
            }
            cout << endl;

            leftToRight = !leftToRight;
        }
        return true;
    }
};

int main(){

    
    return 0;
}