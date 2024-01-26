#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(int i=0; i<s.length(); i++)
        {
            m[s[i]]++;
        }

        vector<pair<int, char>> v;
        for(auto i:m)
        {
            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        string ans = "";

        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v[i].first; j++)
            {
                ans += v[i].second;
            }
        }

        return ans;
    }
};

int main(){

    
    return 0;
}