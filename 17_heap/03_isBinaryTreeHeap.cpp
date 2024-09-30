#include <bits/stdc++.h>
using namespace std;

// Structure of node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
    int countNodes(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        return (1 + countNodes(root->left) + countNodes(root->right));
    }
    bool isCBT(Node* root, int index, int count)
    {
        if(root == NULL)
        {
            return true;
        }
        if(index >= count)
        {
            return false;
        }
        else
        {
            bool left = isCBT(root->left, 2*index+1, count);
            bool right = isCBT(root->right, 2*index+2, count);
            return (left && right);
        }
    }
    bool isMaxHeap(Node* root)
    {
        if(root->left == NULL && root->right == NULL)
        {
            return true;
        }
        if(root->right == NULL)
        {
            if(root->left->data < root->data)
            {
                return true;
            }
        }
        
        return ((root->left->data < root->data) &&
        (root->right->data < root->data) && 
        isMaxHeap(root->left) && isMaxHeap(root->right));
    }
    bool isHeap(struct Node* root) {
        // code here
        int count = countNodes(root);
        
        if(isCBT(root, 0, count) && isMaxHeap(root))
        {
            return true;
        }
        return false;
    }
};

int main(){

    
    return 0;
}