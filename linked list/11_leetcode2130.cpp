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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
public:
    int pairSum(ListNode* head) {
        ListNode* temp = head;

        ListNode* mid = middleNode(head);
        ListNode* rev = reverseList(mid);

        int max=0;
        while(rev){
            int sum = 0;
            sum += temp->val + rev->val;
            if(sum > max){
                max = sum;
            }
            rev = rev->next;
            temp = temp->next;
        }
        return max;
    }
};

int main()
{

        
    return 0;
}
