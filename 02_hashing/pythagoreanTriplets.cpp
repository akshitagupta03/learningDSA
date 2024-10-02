#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    unordered_map<int, int> m;
	    int maxi = INT_MIN;
	    
	    for(int i=0; i<n; i++)
	    {
	        m[arr[i]]++;
	        maxi = max(maxi, arr[i]);
	    }
	    
	    for(int i=1; i<= maxi; i++)
	    {
	        if(m.find(i) == m.end())
	        {
	            continue;
	        }
	        
	        for(int j=1; j<=maxi; j++)
	        {
	            if(m.find(j) == m.end())
	            {
	                continue;
	            }
	            if(i==j && m[i] == 1)
	            {
	                continue;
	            }
	            
	            int root = sqrt(i*i + j*j);
	            
	            if(root*root != (i*i + j*j))
	            {
	                continue;
	            }
	            if(root > maxi)
	            {
	                continue;
	            }
	            if(m.find(root) == m.end())
	            {
	                continue;
	            }
	            if(m[root])
	            {
	                return true;
	            }
	        }
	    }
	    return false;
	}
};

int main(){

    
    return 0;
}