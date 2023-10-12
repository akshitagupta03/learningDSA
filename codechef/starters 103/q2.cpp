#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    
	    int ans = x/y;
	    if(ans <= 20){
	        cout << ans << endl;
	    }
	    else{
	        cout << 20 << endl;
	    }
	}
	return 0;
}
