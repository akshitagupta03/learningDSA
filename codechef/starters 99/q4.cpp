#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    
	    vector<long long> arr(n);
	    long long sum = 0;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    sort(arr.begin(), arr.end());
	    vector<long long> res(n);
	    res[0] = sum;
	    
	    for(int i=0; i<n-1; i++){
	        sum -= arr[i];
	        res[i+1] = sum;
	    }
	    for(int i=0; i<n; i++){
	        cout << res[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
