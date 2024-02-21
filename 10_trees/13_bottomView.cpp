#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root == NULL) return ans;
        
        map<int, int> m;
        queue<pair<Node*, int>> q;
        
        q.push({root, 0});
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            
            Node* node = it.first;
            int line = it.second;
            m[line] = node->data;
            
            if(node->left)
            {
                q.push({node->left, line-1});
            }
            if(node->right)
            {
                q.push({node->right, line+1});
            }
        }
        
        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};

int main(){

    
    return 0;
}