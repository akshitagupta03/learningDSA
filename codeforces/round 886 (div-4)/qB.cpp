#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> length(n);
        vector<int> quality(n);
        
        unordered_map<int, int> m;
        
        for(int i=0; i<n; i++){
            cin >> length[i];
            cin >> quality[i];
            
            if(length[i] <= 10){
                m[i+1] = quality[i];
            }
        }
        
        int maxi = INT_MIN;
        int index = 0;
        for(auto i:m){
            if(i.second > maxi){
                maxi = i.second;
                index = i.first;
            }
        }
        
        cout << index << endl;
    }
        
    return 0;
}
