#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root == NULL)
        {
            return ans;
        }
        
        queue<pair<Node*, int>> q;
        map<int, int> m;
        
        q.push({root, 0});
        while(!q.empty())
        {
            auto it = q.front();
            q.pop();
            
            Node* node = it.first;
            int line = it.second;
            
            if(m.find(line) == m.end())
            {
                m[line] = node->data;
            }
            
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