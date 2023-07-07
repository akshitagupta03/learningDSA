#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int a1, a2, a3, b1, b2, b3;
	    vector<int> arrAlice(3);
	    vector<int> arrBob(3);
	    
	    cin >> arrAlice[0] >> arrAlice[1] >> arrAlice[2] 
	    >> arrBob[0] >> arrBob[1] >> arrBob[2];
	    
	    sort(arrAlice.begin(), arrAlice.end());
	    sort(arrBob.begin(), arrBob.end());
	    
	    int alice = arrAlice[1] + arrAlice[2];
	    int bob = arrBob[1] + arrBob[2];
	    
	    if(alice > bob){
	        cout << "Alice" << endl;
	    }
	    else if(bob > alice){
	        cout << "Bob" << endl;
	    }
	    else{
	        cout << "Tie" << endl;
	    }
	}	
	return 0;
}
