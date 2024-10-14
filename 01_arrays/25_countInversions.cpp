#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(vector<long long>& arr, long long int low, 
    long long int mid, long long int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid + 1; 
        
        long long int ans = 0;
        
        while(left <= mid && right <= high)
        {
            if(arr[left] <= arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                ans += mid+1-left;
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while(right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i=low; i<=high; i++)
        {
            arr[i] = temp[i-low];
        }
        return ans;
    }
    
    long long int mergeSort(vector<long long>& arr, long long low, 
    long long high)
    {
        long long int ans = 0;
        
        if(low >= high)
        {
            return ans;
        }
        
        long long mid = low + (high-low)/2;
        ans += mergeSort(arr, low, mid);
        ans += mergeSort(arr, mid+1, high);
        ans += merge(arr, low, mid, high);
        
        return ans;
    }
    
    long long int inversionCount(vector<long long> &arr) {
        // Your Code Here
        int n = arr.size();
        return mergeSort(arr, 0, n-1);
    }
};

int main(){

    
    return 0;
}