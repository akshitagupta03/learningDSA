#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;

    Node(int x)
    {
        key = x;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* root)
{
    if(root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node* root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

void postorder(Node* root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

Node* create()
{
    Node* root = NULL;
    int x;
    cout << "Enter root node: ";
    cin >> x;
    root = new Node(x);

    int num;
    cout << "Enter 0 to add node and -1 to break: ";
    cin >> num;

    while(num != -1)
    {
        int x;
        cout << "Enter value of node: ";
        cin >> x;

        Node* temp = root;
        Node* curr = new Node(x);

        toop:
        while(temp->left && temp->right)
        {
            int nu;
            cout << "Enter 1 to go left and 2 to go right of " << temp->key << ": "; 
            cin >> nu;

            if(nu == 2)
            {
                temp = temp->right;
            }
            else
            {
                temp = temp->left;
            }
        }

        while(temp->left && temp->right == NULL)
        {
            int nu;
            cout << "Enter 1 to go left of " << temp->key << " and 2 to insert in right of " << temp->key << ": ";
            cin >> nu;

            if(nu == 1)
            {
                temp = temp->left;
                goto toop;
            }
            else if(nu == 2)
            {
                temp->right = curr;
                temp = temp->right;
                goto start;
            }
        }

        while(temp->right && temp->left == NULL)
        {
            int nu;
            cout << "Enter 1 to enter to left of " << temp->key << " and 2 to go right of " << temp->key << ": ";
            cin >> nu;

            if(nu == 2)
            {
                temp = temp->right;
                goto toop;
            }
            else if(nu == 1)
            {
                temp->left = curr;
                temp = temp->left;
                goto start;
            }
        }

        if(temp->left == NULL && temp->right == NULL)
        {
            int nu;
            cout << "Enter 1 to insert in left of " << temp->key << " and 2 to insert in right of " << temp->key << ": ";
            cin >> nu;

            if(nu == 1)
            {
                temp->left = curr;
                temp = temp->left;
            }
            else if(nu == 2)
            {
                temp->right = curr;
                temp = temp->right;
            }
        }

        start:
        inorder(root);
        cout << endl;
        cout << "Enter 0 to continue and -1 to break: ";
        cin >> num;
    }

    return root;
}

int main()
{
    Node* root = create();
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    
    return 0;
}