#include <bits/stdc++.h>
using namespace std;

vector<int> getAverages(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> ans(n, -1);

    int start=k, end = n-k-1;
    int denom = 2*k+1;
    long long int sum = 0;

    for(int i=0; i<=2*k && i<n; i++){
        sum += nums[i];
    }
    if(start < n && start <= end){
        ans[start] = sum/denom;
    }

    for(int i=start+1; i<=end && i<n; i++){
        sum -= nums[i-k-1];
        sum += nums[i+k];
        ans[i] = sum/denom;
    }
    return ans;
}

int main()
{

        
    return 0;
}
