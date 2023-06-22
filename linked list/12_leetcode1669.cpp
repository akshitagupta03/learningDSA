#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    ListNode* temp = list1;
    int count = 0;

    while(count != a-1){
        count++;
        temp = temp->next;
    }
    ListNode* node = temp;
    while(count != b){
        count++;
        node = node->next;
    }

    ListNode* curr = list2;
    temp->next = curr;
    while(curr != NULL){
        curr = curr->next;
        temp = temp->next;
    }
    temp->next = node->next;

    return list1;
}

int main()
{

        
    return 0;
}
