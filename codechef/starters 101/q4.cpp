#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n, h;
	    cin >> n >> h;
	    
	    vector<int> arr(n);
	    int sum = 0;
	    int ans = 0;
	    
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    sort(arr.begin(), arr.end(), greater<int>());
	    
	    if(h > sum){
	        ans = 0;
	    }
	    else{
	        int add = 0;
	        int i=0;
	        while(add < h){
	            add += arr[i];
	            i++;
	        }
	        ans = arr[i-1];
	    }
	    cout << ans << endl;
	}
	return 0;
}