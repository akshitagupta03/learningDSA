#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        // Your code here
        Node* temp = head;
        Node* curr = head;
        
        int count = 1;
        while(curr->next != NULL)
        {
            count++;
            curr = curr->next;
        }
        
        k = k%count;
        if(k == 0)
        {
            return head;
        }
        
        curr->next = head;
        for(int i=1; i<k; i++)
        {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        
        return head;
    }
};

int main(){

    
    return 0;
}