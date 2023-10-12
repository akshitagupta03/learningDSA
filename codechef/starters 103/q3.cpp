#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    vector<int> a;
	    vector<int> b;
	    
	    for(int i=0; i<3; i++){
	        int num;
	        cin >> num;
	        a.push_back(num);
	    }
	    for(int i=0; i<3; i++){
	        int num;
	        cin >> num;
	        b.push_back(num);
	    }
	    
	    sort(a.begin(), a.end(), greater<int>());
	    sort(b.begin(), b.end(), greater<int>());
	    
	    int num1 = a[0]*100 + a[1]*10 + a[2];
	    int num2 = b[0]*100 + b[1]*10 + b[2];
	    
	    if(num1 < num2){
	        cout << "Bob" << endl;
	    }
	    else if(num1 > num2){
	        cout << "Alice" << endl;
	    }
	    else{
	        cout << "Tie" << endl;
	    }
	}
	return 0;
}
