#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin >> q;
	
	while(q--){
	    int n;
	    cin >> n;
	    
	    string s, t, u;
	    cin >> s;
	    cin >> t;
	    cin >> u;
	    
	    int a = t[0];
	    int b = s[0];
	    int k = a - b;
	    if(k < 0){
	        k += 26;
	    }
	    
	    // cout << "a: " << a << " b: " << b << " k: " << k << endl;
	    
	    for(int i=0; i<n; i++){
	        u[i] = (u[i] - 'a' + k) % 26 + 'a';
	    }
	    
	    cout << u << endl;
	}
	return 0;
}
