#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

class Solution{
  public:
    void inorder(Node* root, vector<int>& in)
    {
        if(root != NULL)
        {
            inorder(root->left, in);
            in.push_back(root->data);
            inorder(root->right, in);
        }
    }
    void fillPre(Node* &root, vector<int>& in, int index)
    {
        if(root == NULL) 
        {
            return;
        }
        
        root->data = in.back();
        in.pop_back();
        fillPre(root->right, in, index);
        fillPre(root->left, in, index);
    }
    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        vector<int> in;
        inorder(root, in);
        fillPre(root, in, 0);
    }    
};

int main(){

    
    return 0;
}