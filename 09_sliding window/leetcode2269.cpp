#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int n = num;
        string str = to_string(num);
        int count = 0;
        
        for(int i=0; i<str.length() - k + 1; i++){
            int div = stoi(str.substr(i, k));
            if(div > 0){
                if(n % div == 0){
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{

        
    return 0;
}
