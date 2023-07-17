#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int prev = 0;
        int count = 0;

        for(int i=0; i<bank.size(); i++){
            for(int j = 0; j<bank[i].size(); j++){
                if(bank[i][j] == '1'){
                    count++;
                }
            }
            if(count != 0){
                ans += count*prev;
                prev = count;
                count = 0;
            }
        }

        return ans;
    }
};

int main()
{

        
    return 0;
}