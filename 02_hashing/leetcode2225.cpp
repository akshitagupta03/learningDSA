#include <bits/stdc++.h>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> m;
        vector<vector<int>> ans;
        for(int i=0; i<matches.size(); i++){
            m[matches[i][1]]++;
        }

        set<int> set;
        for(int i=0; i<matches.size(); i++){
            if(m.find(matches[i][0]) == m.end()){
                set.insert(matches[i][0]);
            }
        }
        vector<int> temp1(set.begin(), set.end());
        ans.push_back(temp1);

        vector<int> temp2;
        for(auto i:m){
            if(i.second == 1){
                temp2.push_back(i.first);
            }
        }
        sort(temp2.begin(), temp2.end());
        ans.push_back(temp2);

        return ans;
    }
};

int main()
{

        
    return 0;
}
