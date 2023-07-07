#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    string s;
	    cin >> s;
	    
	    int a=0, ans = 0, flag=0;
	    
	    for(int i=0; i<s.length(); i++){
	        if (s[i] == ':' and a == 0){
	            flag = 1;
	        }
	            
            else if (s[i] == ')' and flag==1){
                a = 1;
            }
                
            else if (s[i] == '(' ){
                a = 0;
                flag = 0;
            }
            
            else if (s[i] == ':' and a == 1){
                ans++;
                a = 0;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
