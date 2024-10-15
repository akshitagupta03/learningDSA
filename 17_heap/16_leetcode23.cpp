#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class comp
{
    public: 
        bool operator()(ListNode* a, ListNode* b)
        {
            return a->val > b->val;
        }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, comp> pq;
        int k = lists.size();

        for(ListNode* n : lists)
        {
            if(n) pq.push(n);
        }

        ListNode* head = new ListNode(0);
        ListNode* temp = head;

        while(!pq.empty())
        {
            ListNode* curr = pq.top();
            pq.pop();

            temp->next = curr;
            temp = temp->next;

            if(curr->next)
            {
                pq.push(curr->next);
            }
        }
        return head->next;
    }
};

int main(){

    
    return 0;
}