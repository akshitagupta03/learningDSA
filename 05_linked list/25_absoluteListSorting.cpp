#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node* next;
    int data;
};

class Solution {

  public:
    Node* sortList(Node* head) {
        // Your Code Here
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
        Node* temp = head->next;
        Node* prev = head;
        
        while(temp)
        {
            if(temp->data < prev->data)
            {
                prev->next = temp->next;
                temp->next = head;
                head = temp;
                temp = prev;
            }
            else
            {
                prev = temp;
            }
            temp = temp->next;
        }
        return head;
    }
};

int main(){

    
    return 0;
}