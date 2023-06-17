#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int countNodes(ListNode* head){
    int count=0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* temp1 = headA;
    ListNode* temp2 = headB;

    if(!temp1 || !temp2){
        return NULL;
    }

    int countA = countNodes(headA);
    int countB = countNodes(headB);

    if(countA > countB){
        while(countA > countB){
            temp1 = temp1->next;
            countA--;
        }
    }
    else if(countB > countA){
        while(countB > countA){
            temp2 = temp2->next;
            countB--;
        }
    }

    while(temp1 && temp2){
        if(temp1 == temp2){
            return temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return NULL;
}

int main()
{

        
    return 0;
}