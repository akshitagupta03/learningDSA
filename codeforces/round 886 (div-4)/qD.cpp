#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int count = 0;
        int res = INT_MIN;
        
        for(int i=0; i<n-1; i++){
            count = 0;
            if(arr[i+1] - arr[i] <= k){
                count++;
                int j = i;
                while(((arr[j+1] - arr[j]) <= k) && (j<n-1)){
                    count++;
                    // cout << "count: " << count << " ";
                    j++;
                }
            }
            res = max(res, count);
            // cout << "res: " << res << endl;
        }
        
        if(n == 1){
            res = 1;
        }
        
        cout << n-res << endl;
    }
        
    return 0;
}
