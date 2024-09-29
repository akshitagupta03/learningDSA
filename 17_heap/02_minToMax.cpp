#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void maxHeapify(vector<int>& arr, int n, int i)
    {
        int l = 2*i+1;
        int r = 2*i+2;
        int maxi = i;
        
        if(l < n && arr[l] > arr[maxi])
        {
            maxi = l;
        }
        if(r < n && arr[r] > arr[maxi])
        {
            maxi = r;
        }
        if(maxi != i)
        {
            swap(arr[maxi], arr[i]);
            maxHeapify(arr, n, maxi);
        }
    }
    void convertMinToMaxHeap(vector<int> &arr, int n)
    {
        for(int i=(n-2)/2; i>=0; i--)
        {
            maxHeapify(arr, n, i);
        }
    }
    
};

int main(){

    
    return 0;
}