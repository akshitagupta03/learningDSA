#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minChanges(string s) {
        int count0 = 0;
        int count1 = 0;
        
        int ans = 0;

        for(int i=0; i<s.length()-1; i++)
        {
            if(s[i] == '0')
            {
                count0++;
                if(s[i+1] == '1')
                {
                    if(count0 % 2 != 0) 
                    {
                        ans++;
                        s[i+1] = '0';
                        count0++;
                        i++;
                    }
                }
            }
            else if(s[i] == '1')
            {
                count1++;
                if(s[i+1] == '0')
                {
                    if(count1 % 2 != 0) 
                    {
                        ans++;
                        count1++;
                        s[i+1] = '1';
                        i++;
                    }
                }
            }
        }
        return ans;
    }
};

int main(){

    
    return 0;
}