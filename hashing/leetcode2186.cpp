#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> m;
        int count = 0;

        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            m[t[i]]--;
        }
        for(auto i:m){
            count += abs(i.second);
        }

        return count;
    }
};

int main()
{

        
    return 0;
}
