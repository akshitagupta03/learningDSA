#include <bits/stdc++.h>
#include <queue>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int a)
    {
        data = a;
        left = right = NULL;
    }
};

class tree{
    
    node* head;
    public:
    //constructor

    tree(){}

    tree(int a)
    {
        node* h = new node(a);
        head = h;
    }
    //insert

    void insert(node* curr)
    {
        int a;
        cout<<"\n enter number to add as a left child of "<<curr->data<<" ans -1 to go back to make it leaf - "; cin>>a;
        if(a == -1) {
            cout<<"\n enter number to add as a right child of "<<curr->data<<" ans -1 to go back to make it leaf - "; cin>>a;
        if(a == -1) return;
        node* tbar = new node(a);

        curr -> right = tbar;
        insert(curr->right);
            return;
        }
        node* tbal = new node(a);

        curr -> left = tbal;
        insert(curr->left);

        cout<<"\n enter number to add as a right child of "<<curr->data<<" ans -1 to make it leaf - "; cin>>a;
        if(a == -1) return;
        node* tbar = new node(a);

        curr -> right = tbar;
        insert(curr->right);
    }

    //create

    void create()
    {
        insert(head);
    }

    void printpre(node* curr)
    {
        if(curr)
        {
            cout<<curr->data<<" ";
            printpre(curr->left);
            printpre(curr->right);
        }
    }
    void preorder()
    {
        printpre(head);
    }

    // height
    int hh(node* curr)
    {
        if(!curr) return 0;

        return max(hh(curr->left), hh(curr->right)) + 1;
    }
    int height()
    {
        return hh(head);
    }

    // number of nodes
    int siz(node* curr)
    {
        if(!curr) return 0;
        return hh(curr->left) + hh(curr->right) + 1;
    }
    int size()
    {
        return siz(head) + 1;
    }

    //inorder traversal

    void in(node* curr)
    {
        if(!curr)
        {
            in(curr->left);
            cout<<curr->data<<" ";
            in(curr->right);
        }
    }

    void inorder()
    {
        in(head);
    }

    //post order traversal

    void po(node* curr)
    {
        if(!curr)
        {
            po(curr->left);
            po(curr->right);
            cout<<curr->data<<" ";
        }
    }

    void postorder()
    {
        po(head);
    }

    //level order traversal

    void levelOrder()
    {
        node* curr = head;
        queue<node*> q;
        q.push(curr);
        while(!q.empty())
        {
            node* temp = q.front();
            cout<<temp->data<<" ";
            q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
};

int main(){

    tree t(13);
    t.create(); 
    cout<<endl<<"level order traversal - ";
    t.levelOrder();
    return 0;
}