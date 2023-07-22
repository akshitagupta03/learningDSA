#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool hasCycle(ListNode *head) {
    if(head == NULL){
        return false;
    }
    ListNode* fast = head;
    ListNode* slow = head;

    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){
            return true;
        }
    }
    return false;
}

int main()
{

        
    return 0;
}
