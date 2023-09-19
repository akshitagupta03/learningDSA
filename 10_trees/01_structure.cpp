
#include <bits/stdc++.h>
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
};

int main(){

    tree t(13);
    t.create(); 
    cout<<endl<<"preorder traversal - ";
    t.preorder();
  return 0;
}