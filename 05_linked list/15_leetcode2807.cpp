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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* prev = head;
        while(temp != NULL){
            int a = __gcd(prev->val, temp->val);
            ListNode* curr = new ListNode(a);
            prev->next = curr;
            curr->next = temp;
            prev = temp;
            temp = temp->next;
        }

        return head;
    }
};

int main()
{
    

    return 0;
}
