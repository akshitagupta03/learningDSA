#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
    private:
        ListNode* middleNode(ListNode* &head)
        {
            ListNode* temp = head;
            ListNode* fast = temp->next;
            ListNode* slow = temp;

            while(fast){
                fast = fast->next;
                if(fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
            }
            return slow;
        }

        ListNode* reverseList(ListNode* &head){
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* next = curr->next;

            while(curr){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
    
    public:
        bool isPalindrome(ListNode* head){
            ListNode* temp = head;
            if(temp==NULL || temp->next==NULL)
                return true;
            
            ListNode* mid = middleNode(head);
            ListNode* temp1 = head;
            ListNode* temp2 = reverseList(mid->next);

            while(temp2){
                if(temp1->val != temp2->val)
                    return false;

                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            return true;
        }
};

int main()
{

        
    return 0;
}