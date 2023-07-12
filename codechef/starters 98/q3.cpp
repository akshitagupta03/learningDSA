#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    vector<int> arr(n);
	    unordered_map<int, int> m;
	    
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	        m[arr[i]]++;
	    }
	    
	    vector<int> dept(n);
	    for(int i=0; i<n; i++){
	        cin >> dept[i];
	        m[dept[i]]++;
	    }
	    
	    int max = 1;
	    for(auto i:m){
	        if(i.second > max){
	            max = i.second;
	        }
	    }
	    
	    cout << max << endl;
	}
	return 0;
}
