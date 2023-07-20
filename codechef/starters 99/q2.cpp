#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int x, y, r;
	    cin >> x >> y >> r;
	    
	    int extra = r/30;
	    int sticks = x + extra;
	    
	    if(sticks % y != 0){
	        cout << (sticks/y)+1 << endl;
	    }
	    else{
	        cout << (sticks/y) << endl;
	    }
	}
	return 0;
}
