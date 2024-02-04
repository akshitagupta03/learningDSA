#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this -> data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if(left)
            delete left;
        if(right)
            delete right;
    }
};

bool isLeaf(TreeNode<int>* root)
{
    return (!root->left && !root->right);
}

void addLeft(TreeNode<int>* root, vector<int> &ans)
{
    TreeNode<int>* curr = root->left;
    while(curr)
    {
        if(!isLeaf(curr))
        {
            ans.push_back(curr->data);
        }
        if(curr->left)
        {
            curr = curr->left;
        } 
        else 
        {
            curr = curr->right;
        }
    }
}

void addLeaves(TreeNode<int>* root, vector<int>& ans)
{
    if(isLeaf(root))
    {
        ans.push_back(root->data);
        return;
    }

    if(root->left)
    {
        addLeaves(root->left, ans);
    }
    if(root->right)
    {
        addLeaves(root->right, ans);
    }
}

void addRight(TreeNode<int> *root, vector<int> &ans)
{
    TreeNode<int>* curr = root->right;
    vector<int> temp;
    while(curr)
    {
        if(!isLeaf(curr))
        {
            temp.push_back(curr->data);
        }
        if(curr->right)
        {
            curr = curr->right;
        } 
        else {
            curr = curr->left;
        }
    }

    for(int i=temp.size()-1; i>=0; i--)
    {
        ans.push_back(temp[i]);
    }
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int> ans;
    if(root == NULL)
    {
        return ans;
    }

    if(!isLeaf(root))
    {
        ans.push_back(root->data);
    }

    addLeft(root, ans);
    addLeaves(root, ans);
    addRight(root, ans);

    return ans;
}


int main(){

    
    return 0;
}