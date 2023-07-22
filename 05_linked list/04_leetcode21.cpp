#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* temp1 = list1;
    ListNode* temp2 = list2;

    if(temp1 == NULL)
        return temp2;
    
    if(temp2 == NULL)
        return temp1;
    
    ListNode *head = temp1;
    if(temp1->val > temp2->val)
    {
        head = temp2;
        temp2 = temp2->next;
    }
    else
    {
        temp1 = temp1->next;
    }
    ListNode *curr = head;
    
    while(temp1 && temp2)
    {
        if(temp1->val < temp2->val){
            curr->next = temp1;
            temp1 = temp1->next;
        }
        else{
            curr->next = temp2;
            temp2 = temp2->next;
        }
        curr = curr->next;
            
    }
    
    if(!temp1)
        curr->next = temp2;
    else
        curr->next = temp1;
        
    return head;
}

int main()
{

        
    return 0;
}