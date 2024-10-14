#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        pre = NULL, suc = NULL;
        Node* curr = root;
        
        while(curr)
        {
            if(key >= curr->key)
            {
                curr = curr->right;
            }
            else
            {
                suc = curr;
                curr = curr->left;
            }
        }
        
        curr = root;
        while(curr)
        {
            if(curr->key >= key)
            {
                curr = curr->left;
            }
            else
            {
                pre = curr;
                curr = curr->right;
            }
        }
        
        return;
    }
};

int main(){

    
    return 0;
}