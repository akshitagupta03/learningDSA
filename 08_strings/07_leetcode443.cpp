#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        char ch = chars[0];
        int count = 1;
        int ind = 0;

        for(int i=1; i<chars.size(); i++)
        {
            if(chars[i] == ch)
            {
                count++;
            }
            else
            {
                chars[ind++] = ch;
                ch = chars[i];
                if(count != 1)
                {
                    string cnt = to_string(count);
                    for(char c:cnt)
                    {
                        chars[ind++] = c;
                    }
                }
                count = 1;
            }
        }

        chars[ind++] = ch;
        if(count != 1)
        {
            string cnt = to_string(count);
            for(char c:cnt)
            {
                chars[ind++] = c;
            }
        }
        return ind;
    }
};

int main(){

    
    return 0;
}