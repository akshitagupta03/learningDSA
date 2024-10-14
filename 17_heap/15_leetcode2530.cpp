#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        long long ans = 0;

        for(int i=0; i<nums.size(); i++)
        {
            pq.push(nums[i]);
        }

        while(k--)
        {
            long long num = pq.top();
            pq.pop();
            ans += num;
            
            if(num % 3 == 0)
            {
                pq.push(num/3);
            }
            else
            {
                pq.push((num/3) + 1);
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}