#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeNodes(ListNode* head) {
    ListNode* temp = head;
    ListNode* prev = head;
    ListNode* last = prev;
    ListNode* p = prev;

    int sum=0;
    while(temp->next){
        if(temp->next->val != 0){
            sum += temp->next->val;
        }
        else{
            prev->val = sum;
            p = prev;
            prev = prev->next;
            sum=0;
        }
        temp = temp->next;
    }
    p->next = NULL;
    return last;
}

int main()
{

        
    return 0;
}
