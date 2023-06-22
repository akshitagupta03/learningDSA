#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* swapNodes(ListNode* head, int k) {
    ListNode* temp = head;
    ListNode* curr = head;

    for(int i=0; i<k-1; i++){
        temp = temp->next;
    }
    ListNode* node = temp;

    while(temp->next){
        temp = temp->next;
        curr = curr->next;
    }
    swap(curr->val, node->val);

    return head;
}

int main()
{

        
    return 0;
}
