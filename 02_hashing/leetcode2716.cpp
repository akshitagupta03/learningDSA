#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char, int>m;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }
        return m.size();
    }
};

int main()
{

        
    return 0;
}
