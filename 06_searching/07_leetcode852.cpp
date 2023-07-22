#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0; 
        int end = arr.size()-1; 
        int middle = start+(end-start)/2;

        while(start < end)
        {
            if(arr[middle] < arr[middle+1]){
                start = middle+1;
            }
            else{ 
                end = middle;
                middle = start+(end-start)/2; 
            }
        }
        return start;
    }
};

int main()
{

        
    return 0;
}
