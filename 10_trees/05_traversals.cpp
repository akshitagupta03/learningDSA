#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

vector<vector<int>> getTreeTraversal(TreeNode *root){
    stack<pair<TreeNode*, int>> st;
    vector<int> pre, in, post;
    vector<vector<int>> ans;

    if(root == NULL)
    {
        return ans;
    }

    st.push({root, 1});
    while(st.empty() == false)
    {
        auto it = st.top();
        st.pop();

        if(it.second == 1)
        {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left != NULL)
            {
                st.push({it.first->left, 1});
            }
        }
        else if(it.second == 2)
        {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->right != NULL)
            {
                st.push({it.first->right, 1});
            }
        }
        else
        {
            post.push_back(it.first->data);
        }
    }
    ans.push_back(in);
    ans.push_back(pre);
    ans.push_back(post);
    return ans;
}

int main(){

    
    return 0;
}