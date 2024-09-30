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
            return (a->data > b->data);
        }
};

class Solution
{
    public:
    //Function to merge k sorted arrays
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        //code here
        vector<int> ans;
        priority_queue<node*, vector<node*>, compare> minHeap;
        
        for(int i=0; i<k; i++)
        {
            node* temp = new node(arr[i][0], i, 0);
            minHeap.push(temp);
        }
        
        while(!minHeap.empty())
        {
            node* temp = minHeap.top();
            minHeap.pop();
            ans.push_back(temp->data);
            
            int i = temp->i;
            int j = temp->j;
            
            if(j+1 < arr[i].size())
            {
                node* curr = new node(arr[i][j+1], i, j+1);
                minHeap.push(curr);
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}