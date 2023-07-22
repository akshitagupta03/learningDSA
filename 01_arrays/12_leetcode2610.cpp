#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int>m;
        vector<vector<int>> res;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }

        int max = 0;
        for(auto i:m){
            if(i.second > max){
                max = i.second;
            }
        }

        int n = max;
        for(int i=0; i<n; i++)
        {
            vector<int> temp;
            bool flag = true;

            for(auto x : m){
                if(x.second > 0){
                    flag = false;
                    temp.push_back(x.first);
                    m[x.first]--;
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};

int main()
{

        
    return 0;
}
