#include <bits/stdc++.h>
using namespace std;

int xorOperation(int n, int start) {
    vector<int> nums;
    for(int i=0; i<n; i++){
        nums.push_back(start + 2*i);
    }

    int ans=0;
    for(int i=0; i<nums.size(); i++){
        ans = ans^nums[i];
    }
    return ans;
}

int main()
{

        
    return 0;
}