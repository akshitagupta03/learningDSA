#include <bits/stdc++.h>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n; 
	    cin >> n;
	    
	    vector<int> arr(n);
	    unordered_set<int> s;
	    int res = 0;
	    int count = 0;
	    
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	        if(s.find(arr[i]) == s.end()){
	            s.insert(arr[i]);
	            count++;
	        }
	        else if(s.find(arr[i]) != s.end()){
	            s.erase(arr[i]);
	            count--;
	        }
	        
	        res = max(res, count);
	    }
	    cout << res << endl;
	}
	return 0;
}
