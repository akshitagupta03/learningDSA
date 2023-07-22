#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> m;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }

        int count = 0;
        for(int i=0; i<t.length(); i++){
            if(m.find(t[i]) != m.end()){
                m[t[i]]--;
            }
        }

        for(auto i:m){
            if(i.second > 0){
                count += i.second;
            }
        }
        return count;
    }
};

int main()
{

        
    return 0;
}
