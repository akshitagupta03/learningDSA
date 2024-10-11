#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};

class comp
{
    public:
        bool operator()(Node* a, Node* b)
        {
            return (a->data > b->data);
        }
};

class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        priority_queue<Node*, vector<Node*>, comp> pq;
        Node* temp = root;
        
        while(temp)
        {
            pq.push(temp);
            temp = temp->next;
        }
        
        Node* node = NULL;
        Node* head = NULL;
        
        while(!pq.empty())
        {
            Node* curr = pq.top();
            pq.pop();
            
            if(node == NULL)
            {
                head = curr;
                node = head;
            }
            else
            {
                node->bottom = curr;
                node = node->bottom;
            }
            
            if(node->bottom)
            {
                pq.push(node->bottom);
                node->bottom = NULL;
            }
        }
        
        return head;
    }
};

int main(){

    
    return 0;
}