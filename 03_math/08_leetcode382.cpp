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
public:
    vector<int> arr;

    Solution(ListNode* head) {
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
    }
    
    int getRandom() {
        int num = rand() % arr.size();
        return arr[num];
    }
};

int main()
{

        
    return 0;
}
