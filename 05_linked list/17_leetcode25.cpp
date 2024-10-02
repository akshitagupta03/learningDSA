#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<int> s;
        ListNode* temp = head;
        ListNode* curr = head;

        if(head == NULL)
        {
            return head;
        }

        int count = 0;
        while(temp)
        {
            count++;
            s.push(temp->val);
            temp = temp->next;

            if(count == k)
            {
                while(!s.empty())
                {
                    curr->val = s.top();
                    curr = curr->next;
                    s.pop();
                }
                count = 0;
            }
        }
        return head;
    }
};

int main(){

    
    return 0;
}