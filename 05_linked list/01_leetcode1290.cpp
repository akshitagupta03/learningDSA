#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int getDecimalValue(ListNode* head) {
    ListNode* temp = head;
    
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }

    int num=0;
    temp = head;
    while(temp!=NULL)
    {
        num += pow(2, (count-1)) * temp->val;
        count--;
        temp = temp->next;
    }

    return num;
}

int main()
{

        
    return 0;
}