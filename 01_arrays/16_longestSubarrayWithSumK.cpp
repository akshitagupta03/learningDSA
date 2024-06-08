#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int, int> m;
        int ans = 0;
        int sum = 0;
        
        for(int i=0; i<N; i++)
        {
            sum += A[i];
            if(m.find(sum) == m.end())
            {
                m[sum] = i;
            }
            
            if(sum == K)
            {
                ans = max(ans, i+1);
            }
            
            int rem = sum - K;
            if(m.find(rem) != m.end())
            {
                ans = max(ans, i-m[rem]);
            }
        }
        return ans;
    } 

};

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}