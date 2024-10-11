#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;

        for(int i=0; i<s.size(); i++)
        {
            string word = s[i];
            sort(word.begin(), word.end());
            m[word].push_back(s[i]);
        }

        for(auto i:m)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};

int main(){

    
    return 0;
}