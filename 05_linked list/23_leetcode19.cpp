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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;

        while(temp)
        {
            count++;
            temp = temp->next;
        }

        if(n == 1)
        {
            if(head->next == NULL)
            {
                return NULL;
            }
        }

        if(n == count)
        {
            return head->next;
        }

        n = count-n;
        temp = head;
        for(int i=0; i<n-1; i++)
        {
            temp = temp->next;
        }

        ListNode* curr = temp->next;
        temp->next = temp->next->next;
        delete(curr);

        return head;
    }
};

int main(){

    
    return 0;
}