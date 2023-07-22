#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int sum = 0;
        for(int i=1; i<=n; i++){
            sum += i;
        }

        int temp = 0;
        for(int i=1; i<=n; i++){
            temp += i;
            if(sum - temp == temp - i){
                return i;
                break;
            }
        }
        return -1;
    }
};

int main()
{

        
    return 0;
}
