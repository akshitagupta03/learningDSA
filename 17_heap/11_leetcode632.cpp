#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        int i;
        int j;

        node(int data, int row, int col)
        {
            this->data = data;
            i = row;
            j = col;
        }
};

class compare
{
    public:
        bool operator()(node* a, node* b)
        {
            return a->data > b->data;
        }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<node*, vector<node*>, compare> pq;
        int k = nums.size();

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i=0; i<k; i++)
        {
            node* temp = new node(nums[i][0], i, 0);
            pq.push(temp);

            maxi = max(maxi, nums[i][0]);
            mini = min(mini, nums[i][0]);
        }

        int start = mini;
        int end = maxi;

        while(!pq.empty())
        {
            node* curr = pq.top();
            pq.pop();

            mini = curr->data;
            if(maxi - mini < end - start)
            {
                start = mini;
                end = maxi;
            }

            int i = curr->i;
            int j = curr->j;

            if(j+1 < nums[i].size())
            {
                maxi = max(maxi, nums[i][j+1]);
                node* temp = new node(nums[i][j+1], i, j+1);
                pq.push(temp);
            }
            else
            {
                break;
            }
        }

        return {start, end};
    }
};

int main(){

    
    return 0;
}