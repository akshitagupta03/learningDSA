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
    ListNode* getMid(ListNode* head) 
    {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next) 
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right)
    {
        if(left == NULL)
        {
            return right;
        }
        if(right == NULL)
        {
            return left;
        }

        ListNode* temp = new ListNode(0);
        ListNode* curr = temp;

        while(left && right)
        {
            if(left->val <= right->val)
            {
                curr->next = left;
                left = left->next;
            }
            else
            {
                curr->next = right;
                right = right->next;
            }
            curr = curr->next;
        }

        while(left)
        {
            curr->next = left;
            left = left->next;
            curr = curr->next;
        }
        while(right)
        {
            curr->next = right;
            right = right->next;
            curr = curr->next;
        }

        return temp->next;
    }

    ListNode* sortList(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode* mid = getMid(head);

        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        left = sortList(left);
        right = sortList(right);

        ListNode* result = merge(left, right);

        return result;
    }
};