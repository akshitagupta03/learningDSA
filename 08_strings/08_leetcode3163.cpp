#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string compressedString(string word) {
        char ch = word[0];
        int count = 1;
        string ans = "";

        for(int i=1; i<word.length(); i++)
        {
            if(word[i] == ch)
            {
                count++;
                if(count > 9)
                {
                    ans += '9';
                    ans += ch;
                    count = 1;
                }
            }
            else
            {
                ans += count + '0';
                ans += ch;
                ch = word[i];
                count = 1;
            }
        }
        ans += count + '0';
        ans += ch;
        
        return ans;
    }
};

int main(){

    
    return 0;
}