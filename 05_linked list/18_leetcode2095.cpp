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
    ListNode* middle(ListNode* head)
    {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* mid = middle(head);
        ListNode* temp = head;

        if(head->next == NULL)
        {
            return NULL;
        }

        while(temp->next != mid)
        {
            temp = temp->next;
        }

        temp->next = mid->next;
        delete(mid);
        return head;
    }
};

int main(){

    
    return 0;
}