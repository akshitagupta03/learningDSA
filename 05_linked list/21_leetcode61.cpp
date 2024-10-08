#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* temp = head;
        ListNode* curr = head;

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
        int n = count-k;

        for(int i=1; i<n; i++)
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