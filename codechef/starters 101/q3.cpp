#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    
	    string s;
	    cin >> s;
	    
	    string k;
	    cin >> k;
	    
	    int mini = INT_MAX;
	    bool isFound = s.find(k) != string::npos;
	    if(isFound){
	        mini = 0;
	    }
	    else{
	        for(int i=0; i<n-m+1; i++){
	            int sum = 0;
	            for(int j=0; j<m; j++){
	                int a = abs(s[i+j] - k[j]);
	                int b = 10-a;
	                
	                if(a > b){
	                    sum += b;
	                }
	                else{
	                    sum += a;
	                }
	            }
	            mini = min(sum, mini);
	        }
	    }
	    cout << mini << endl;
	}
	return 0;
}