#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int count=0, row=0, col=0;
        vector<vector<char>> arr(8, vector<char>(8, '.'));
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin >> arr[i][j];
                if(arr[i][j] != '.'){
                    row = i;
                    col = j;
                    count++;
                }
            }
        }
        
        // cout << "row: " << row << " " << "col: " << col << " " << "count: " << count << endl;
        
        row = row - count + 1;
        int i = row;
        int j = col;
        string ans = "";
        
        while(i<8){
            if(arr[i][j] != '.'){
                ans += arr[i][j];
            }
            i++;
        }
        cout << ans << endl;
    }
        
    return 0;
}
