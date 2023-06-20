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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        vector<int>v;

        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0;
        int j = v.size()/2;
        int n = v.size();

        int max = 0;
        while(i<=j){
            int sum = 0;
            sum = v[i] + v[n-i-1];
            if(sum > max){
                max = sum;
            }
            i++;
        }
        return max;
    }
};

int main()
{

        
    return 0;
}
